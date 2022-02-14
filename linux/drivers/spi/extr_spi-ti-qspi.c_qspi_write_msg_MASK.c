
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct ti_qspi {unsigned int cmd; int dev; scalar_t__ base; int dc; } ;
struct spi_transfer {int bits_per_word; int * tx_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned int FUNC_0 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,unsigned int,int ,int const) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (struct ti_qspi*) ;
 scalar_t__ FUNC_5 (struct ti_qspi*) ;
 int FUNC_6 (struct ti_qspi*,unsigned int,int ) ;
 int FUNC_7 (int const,scalar_t__) ;
 int FUNC_8 (int ,scalar_t__) ;
 int FUNC_9 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_10(struct ti_qspi *VAR_10, struct spi_transfer *VAR_11,
     int VAR_12)
{
 int VAR_13, VAR_14;
 unsigned int VAR_15;
 const u8 *VAR_16;
 u32 VAR_17;

 VAR_16 = VAR_11->tx_buf;
 VAR_15 = VAR_10->cmd | VAR_9;
 VAR_13 = VAR_11->bits_per_word >> 3;
 VAR_14 = VAR_13;

 while (VAR_12) {
  if (FUNC_4(VAR_10))
   return -VAR_0;

  switch (VAR_13) {
  case 1:
   FUNC_2(VAR_10->dev, "tx cmd %08x dc %08x data %02x\n",
     VAR_15, VAR_10->dc, *VAR_16);
   if (VAR_12 >= VAR_8) {
    u32 *VAR_18 = (u32 *)VAR_16;

    VAR_17 = FUNC_1(*VAR_18++);
    FUNC_8(VAR_17, VAR_10->base +
           VAR_6);
    VAR_17 = FUNC_1(*VAR_18++);
    FUNC_8(VAR_17, VAR_10->base +
           VAR_5);
    VAR_17 = FUNC_1(*VAR_18++);
    FUNC_8(VAR_17, VAR_10->base +
           VAR_4);
    VAR_17 = FUNC_1(*VAR_18++);
    FUNC_8(VAR_17, VAR_10->base +
           VAR_3);
    VAR_14 = VAR_8;
    VAR_15 |= FUNC_0(VAR_7);
   } else {
    FUNC_7(*VAR_16, VAR_10->base + VAR_3);
    VAR_15 = VAR_10->cmd | VAR_9;
    VAR_14 = VAR_13;
    VAR_15 |= FUNC_0(VAR_13);
   }
   break;
  case 2:
   FUNC_2(VAR_10->dev, "tx cmd %08x dc %08x data %04x\n",
     VAR_15, VAR_10->dc, *VAR_16);
   FUNC_9(*((u16 *)VAR_16), VAR_10->base + VAR_3);
   break;
  case 4:
   FUNC_2(VAR_10->dev, "tx cmd %08x dc %08x data %08x\n",
     VAR_15, VAR_10->dc, *VAR_16);
   FUNC_8(*((u32 *)VAR_16), VAR_10->base + VAR_3);
   break;
  }

  FUNC_6(VAR_10, VAR_15, VAR_2);
  if (FUNC_5(VAR_10)) {
   FUNC_3(VAR_10->dev, "write timed out\n");
   return -VAR_1;
  }
  VAR_16 += VAR_14;
  VAR_12 -= VAR_14;
 }

 return 0;
}
