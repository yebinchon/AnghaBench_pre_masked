
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct ti_qspi {unsigned int cmd; scalar_t__ base; int dev; int dc; } ;
struct spi_transfer {int rx_nbits; int bits_per_word; int * rx_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;


 int FUNC_0 (int ,char*,unsigned int,int ) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (struct ti_qspi*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (struct ti_qspi*) ;
 int FUNC_7 (struct ti_qspi*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_8(struct ti_qspi *VAR_7, struct spi_transfer *VAR_8,
    int VAR_9)
{
 int VAR_10;
 unsigned int VAR_11;
 u8 *VAR_12;

 VAR_12 = VAR_8->rx_buf;
 VAR_11 = VAR_7->cmd;
 switch (VAR_8->rx_nbits) {
 case 129:
  VAR_11 |= VAR_2;
  break;
 case 128:
  VAR_11 |= VAR_3;
  break;
 default:
  VAR_11 |= VAR_4;
  break;
 }
 VAR_10 = VAR_8->bits_per_word >> 3;

 while (VAR_9) {
  FUNC_0(VAR_7->dev, "rx cmd %08x dc %08x\n", VAR_11, VAR_7->dc);
  if (FUNC_2(VAR_7))
   return -VAR_0;

  FUNC_7(VAR_7, VAR_11, VAR_5);
  if (FUNC_6(VAR_7)) {
   FUNC_1(VAR_7->dev, "read timed out\n");
   return -VAR_1;
  }
  switch (VAR_10) {
  case 1:
   *VAR_12 = FUNC_3(VAR_7->base + VAR_6);
   break;
  case 2:
   *((u16 *)VAR_12) = FUNC_5(VAR_7->base + VAR_6);
   break;
  case 4:
   *((u32 *)VAR_12) = FUNC_4(VAR_7->base + VAR_6);
   break;
  }
  VAR_12 += VAR_10;
  VAR_9 -= VAR_10;
 }

 return 0;
}
