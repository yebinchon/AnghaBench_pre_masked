
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int tag ;
struct TYPE_4__ {int len; } ;
struct mmc_spi_host {TYPE_3__* spi; TYPE_2__* data; TYPE_1__ t; } ;
struct mmc_command {int opcode; unsigned short* resp; int error; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {int* status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;




 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *,char*,...) ;
 char* FUNC_1 (struct mmc_command*) ;
 int FUNC_2 (struct mmc_spi_host*) ;
 int FUNC_3 (struct mmc_spi_host*,int) ;
 int FUNC_4 (struct mmc_command*) ;
 int FUNC_5 (struct mmc_spi_host*,int ) ;
 int VAR_12 ;
 int FUNC_6 (char*,int,char*,int,char*) ;

__attribute__((used)) static int FUNC_7(struct mmc_spi_host *VAR_13,
  struct mmc_command *VAR_14, int VAR_15)
{
 u8 *VAR_16 = VAR_13->data->status;
 u8 *VAR_17 = VAR_16 + VAR_13->t.len;
 int VAR_18 = 0;
 int VAR_19;
 u8 VAR_20 = 0;
 unsigned short VAR_21;
 int VAR_22;
 char VAR_23[32];

 FUNC_6(VAR_23, sizeof(VAR_23), "  ... CMD%d response SPI_%s",
  VAR_14->opcode, FUNC_1(VAR_14));







 VAR_16 += 8;
 while (VAR_16 < VAR_17 && *VAR_16 == 0xff)
  VAR_16++;


 if (VAR_16 == VAR_17) {
  VAR_16 = VAR_13->data->status;
  VAR_17 = VAR_16+1;
  for (VAR_22 = 2; VAR_22 < 16; VAR_22++) {
   VAR_18 = FUNC_3(VAR_13, 1);
   if (VAR_18 < 0)
    goto done;
   if (*VAR_16 != 0xff)
    goto checkstatus;
  }
  VAR_18 = -VAR_5;
  goto done;
 }

checkstatus:
 VAR_19 = 0;
 if (*VAR_16 & 0x80) {

  VAR_21 = *VAR_16++ << 8;

  if (VAR_16 == VAR_17) {
   VAR_18 = FUNC_3(VAR_13, 1);
   if (VAR_18 < 0)
    goto done;
   VAR_16 = VAR_13->data->status;
   VAR_17 = VAR_16+1;
  }
  VAR_21 |= *VAR_16++;
  while (VAR_21 & 0x8000) {
   VAR_19++;
   VAR_21 <<= 1;
  }
  VAR_14->resp[0] = VAR_21 >> 8;
  VAR_20 = VAR_21;
 } else {
  VAR_14->resp[0] = *VAR_16++;
 }
 VAR_14->error = 0;


 if (VAR_14->resp[0] != 0) {
  if ((VAR_11 | VAR_6)
    & VAR_14->resp[0])
   VAR_18 = -VAR_0;
  else if (VAR_10 & VAR_14->resp[0])
   VAR_18 = -VAR_4;
  else if (VAR_7 & VAR_14->resp[0])
   VAR_18 = -VAR_1;
  else if ((VAR_9 | VAR_8)
    & VAR_14->resp[0])
   VAR_18 = -VAR_3;

 }

 switch (FUNC_4(VAR_14)) {




 case 130:

  while (VAR_16 < VAR_17 && *VAR_16 == 0)
   VAR_16++;
  if (VAR_16 == VAR_17)
   FUNC_5(VAR_13, VAR_12);
  break;




 case 129:

  if (VAR_16 == VAR_17) {
   VAR_18 = FUNC_3(VAR_13, 1);
   if (VAR_18 < 0)
    goto done;
   VAR_16 = VAR_13->data->status;
   VAR_17 = VAR_16+1;
  }
  if (VAR_19) {
   VAR_21 = VAR_20 << 8;
   VAR_21 |= *VAR_16 << VAR_19;
   VAR_14->resp[0] |= (VAR_21 & 0xFF00);
  } else {
   VAR_14->resp[0] |= *VAR_16 << 8;
  }
  break;


 case 128:
  VAR_21 = VAR_20 << 8;
  VAR_14->resp[1] = 0;
  for (VAR_22 = 0; VAR_22 < 4; VAR_22++) {
   VAR_14->resp[1] <<= 8;

   if (VAR_16 == VAR_17) {
    VAR_18 = FUNC_3(VAR_13, 1);
    if (VAR_18 < 0)
     goto done;
    VAR_16 = VAR_13->data->status;
    VAR_17 = VAR_16+1;
   }
   if (VAR_19) {
    VAR_21 |= *VAR_16++ << VAR_19;
    VAR_14->resp[1] |= (VAR_21 >> 8);
    VAR_21 <<= 8;
   } else {
    VAR_14->resp[1] |= *VAR_16++;
   }
  }
  break;


 case 131:
  break;

 default:
  FUNC_0(&VAR_13->spi->dev, "bad response type %04x\n",
   FUNC_4(VAR_14));
  if (VAR_18 >= 0)
   VAR_18 = -VAR_2;
  goto done;
 }

 if (VAR_18 < 0)
  FUNC_0(&VAR_13->spi->dev, "%s: resp %04x %08x\n",
   VAR_23, VAR_14->resp[0], VAR_14->resp[1]);


 if (VAR_18 >= 0 && VAR_15)
  return VAR_18;
done:
 if (VAR_18 < 0)
  VAR_14->error = VAR_18;
 FUNC_2(VAR_13);
 return VAR_18;
}
