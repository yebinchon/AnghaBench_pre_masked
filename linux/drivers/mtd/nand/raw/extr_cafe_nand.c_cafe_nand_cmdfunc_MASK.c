
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct nand_chip {int dummy; } ;
struct mtd_info {int writesize; int size; int oobsize; } ;
struct cafe_priv {int ctl2; int ctl1; int data_pos; int datalen; TYPE_1__* pdev; scalar_t__ mmio; scalar_t__ usedma; int nr_data; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;


 int VAR_8 ;


 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,unsigned int,...) ;
 int FUNC_2 (struct cafe_priv*,int ) ;
 int FUNC_3 (struct cafe_priv*,int,int ) ;
 int FUNC_4 () ;
 struct cafe_priv* FUNC_5 (struct nand_chip*) ;
 struct mtd_info* FUNC_6 (struct nand_chip*) ;
 int FUNC_7 (struct nand_chip*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (char*,int,...) ;
 int FUNC_10 (scalar_t__) ;
 int VAR_14 ;
 int FUNC_11 (int) ;
 scalar_t__ FUNC_12 (int ) ;

__attribute__((used)) static void FUNC_13(struct nand_chip *VAR_15, unsigned VAR_16,
         int VAR_17, int VAR_18)
{
 struct mtd_info *VAR_19 = FUNC_6(VAR_15);
 struct cafe_priv *VAR_20 = FUNC_5(VAR_15);
 int VAR_21 = 0;
 uint32_t VAR_22;
 uint32_t VAR_23 = 0x80000000;

 FUNC_1(&VAR_20->pdev->dev, "cmdfunc %02x, 0x%x, 0x%x\n",
  VAR_16, VAR_17, VAR_18);

 if (VAR_16 == 133 || VAR_16 == 132) {

  FUNC_3(VAR_20, VAR_20->ctl2 | 0x100 | VAR_16, VAR_10);
  VAR_22 = VAR_20->ctl1;
  VAR_20->ctl2 &= ~(1<<30);
  FUNC_1(&VAR_20->pdev->dev, "Continue command, ctl1 %08x, #data %d\n",
     VAR_20->ctl1, VAR_20->nr_data);
  goto do_command;
 }

 FUNC_3(VAR_20, 0, VAR_10);


 if (VAR_19->writesize > 512 &&
     VAR_16 == VAR_6) {
  VAR_17 += VAR_19->writesize;
  VAR_16 = VAR_3;
 }




 if (VAR_17 != -1) {
  FUNC_3(VAR_20, VAR_17, VAR_1);
  VAR_21 = 2;
  if (VAR_18 != -1)
   goto write_adr2;
 } else if (VAR_18 != -1) {
  FUNC_3(VAR_20, VAR_18 & 0xffff, VAR_1);
  VAR_18 >>= 16;
 write_adr2:
  FUNC_3(VAR_20, VAR_18, VAR_2);
  VAR_21 += 2;
  if (VAR_19->size > VAR_19->writesize << 16)
   VAR_21++;
 }

 VAR_20->data_pos = VAR_20->datalen = 0;


 VAR_22 = 0x80000000 | VAR_16 | (VAR_20->ctl1 & VAR_0);


 if (VAR_16 == VAR_5 || VAR_16 == 128) {
  VAR_22 |= (1<<26);

  VAR_20->datalen = 4;

  VAR_21 = 1;
 } else if (VAR_16 == VAR_3 || VAR_16 == VAR_4 ||
     VAR_16 == VAR_6 || VAR_16 == 130) {
  VAR_22 |= 1<<26;

  VAR_20->datalen = VAR_19->writesize + VAR_19->oobsize - VAR_17;
 } else if (VAR_16 == 129)
  VAR_22 |= 1<<25;


 if (VAR_21)
  VAR_22 |= ((VAR_21-1)|8) << 27;

 if (VAR_16 == 129 || VAR_16 == 134) {


  VAR_20->ctl1 = VAR_22;
  FUNC_1(&VAR_20->pdev->dev, "Setup for delayed command, ctl1 %08x, dlen %x\n",
     VAR_20->ctl1, VAR_20->datalen);
  return;
 }

 if (VAR_16 == 130)
  FUNC_3(VAR_20, VAR_20->ctl2 | 0x100 | VAR_8, VAR_10);
 else if (VAR_16 == VAR_3 && VAR_19->writesize > 512)
  FUNC_3(VAR_20, VAR_20->ctl2 | 0x100 | VAR_7, VAR_10);

 do_command:
 FUNC_1(&VAR_20->pdev->dev, "dlen %x, ctl1 %x, ctl2 %x\n",
  VAR_20->datalen, VAR_22, FUNC_2(VAR_20, VAR_10));


 FUNC_3(VAR_20, VAR_20->datalen, VAR_11);
 FUNC_3(VAR_20, 0x90000000, VAR_13);
 if (VAR_20->usedma && (VAR_22 & (3<<25))) {
  uint32_t VAR_24 = 0xc0000000 + VAR_20->datalen;

  if (VAR_22 & (1<<26)) {

   VAR_24 |= (1<<29);


   VAR_23 = 0x10000000;
  }
  FUNC_3(VAR_20, VAR_24, VAR_12);
 }
 VAR_20->datalen = 0;

 if (FUNC_12(VAR_14)) {
  int VAR_25;
  FUNC_9("About to write command %08x to register 0\n", VAR_22);
  for (VAR_25=4; VAR_25< 0x5c; VAR_25+=4)
   FUNC_9("Register %x: %08x\n", VAR_25, FUNC_10(VAR_20->mmio + VAR_25));
 }

 FUNC_3(VAR_20, VAR_22, VAR_9);


 FUNC_8(100);

 if (1) {
  int VAR_26;
  uint32_t VAR_27;

  for (VAR_26 = 500000; VAR_26 != 0; VAR_26--) {
   VAR_27 = FUNC_2(VAR_20, VAR_13);
   if (VAR_27 & VAR_23)
    break;
   FUNC_11(1);
   if (!(VAR_26 % 100000))
    FUNC_1(&VAR_20->pdev->dev, "Wait for ready, IRQ %x\n", VAR_27);
   FUNC_4();
  }
  FUNC_3(VAR_20, VAR_23, VAR_13);
  FUNC_1(&VAR_20->pdev->dev, "Command %x completed after %d usec, irqs %x (%x)\n",
        VAR_16, 500000-VAR_26, VAR_27, FUNC_2(VAR_20, VAR_13));
 }

 FUNC_0(VAR_20->ctl2 & (1<<30));

 switch (VAR_16) {

 case 135:
 case 132:
 case 134:
 case 133:
 case 129:
 case 131:
 case 128:
 case 130:
  FUNC_3(VAR_20, VAR_20->ctl2, VAR_10);
  return;
 }
 FUNC_7(VAR_15);
 FUNC_3(VAR_20, VAR_20->ctl2, VAR_10);
}
