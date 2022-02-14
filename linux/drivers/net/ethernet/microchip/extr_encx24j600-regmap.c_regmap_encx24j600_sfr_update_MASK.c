
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_transfer {int* tx_buf; int len; } ;
struct spi_message {int dummy; } ;
struct encx24j600_context {int bank; int spi; } ;
typedef int reg ;
typedef int cmd ;


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
 int FUNC_0 (struct encx24j600_context*,int) ;
 int FUNC_1 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_2 (struct spi_message*) ;
 int FUNC_3 (int ,struct spi_message*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct encx24j600_context *VAR_10,
     u8 VAR_11, u8 *VAR_12, size_t VAR_13,
     u8 VAR_14, u8 VAR_15)
{
 u8 VAR_16 = VAR_11 & VAR_0;
 u8 VAR_17 = ((VAR_11 & VAR_1) >> VAR_2);
 u8 VAR_18 = VAR_14;
 struct spi_message VAR_19;
 struct spi_transfer VAR_20[3] = { { .tx_buf = &VAR_18, .len = sizeof(VAR_18), },
         { .tx_buf = &VAR_11, .len = sizeof(VAR_11), },
         { .tx_buf = VAR_12, .len = VAR_13 }, };

 if (VAR_11 < 0x80) {
  int VAR_21 = 0;

  VAR_18 = VAR_15 | VAR_16;
  if ((VAR_16 < 0x16) && (VAR_10->bank != VAR_17))
   VAR_21 = FUNC_0(VAR_10, VAR_17);
  if (FUNC_4(VAR_21))
   return VAR_21;
 } else {



  switch (VAR_11) {
  case 135:
   VAR_18 = VAR_4; break;
  case 134:
   VAR_18 = VAR_5; break;
  case 132:
   VAR_18 = VAR_6; break;
  case 131:
   VAR_18 = VAR_7; break;
  case 129:
   VAR_18 = VAR_8; break;
  case 128:
   VAR_18 = VAR_9; break;
  case 136:
  case 133:
  case 130:
  default:
   return -VAR_3;
  }
 }

 FUNC_2(&VAR_19);
 FUNC_1(&VAR_20[0], &VAR_19);

 if (VAR_18 == VAR_14) {
  VAR_20[1].tx_buf = &VAR_11;
  FUNC_1(&VAR_20[1], &VAR_19);
 }

 FUNC_1(&VAR_20[2], &VAR_19);
 return FUNC_3(VAR_10->spi, &VAR_19);
}
