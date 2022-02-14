
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nand_chip {int dummy; } ;
struct mtd_info {int writesize; int oobsize; } ;
struct davinci_nand_pdata {int ecc_bits; } ;
struct TYPE_4__ {int mode; int bytes; int size; int strength; void* algo; int hwctl; int correct; int calculate; int options; } ;
struct TYPE_5__ {TYPE_1__ ecc; } ;
struct davinci_nand_info {TYPE_2__ chip; TYPE_3__* pdev; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct davinci_nand_pdata*) ;
 void* VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;

 int VAR_6 ;


 int FUNC_1 (struct davinci_nand_pdata*) ;
 int VAR_7 ;
 int FUNC_2 (int *,char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (struct mtd_info*,int *) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 struct davinci_nand_pdata* FUNC_4 (TYPE_3__*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 struct mtd_info* FUNC_5 (struct nand_chip*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct davinci_nand_info* FUNC_8 (struct mtd_info*) ;

__attribute__((used)) static int FUNC_9(struct nand_chip *VAR_17)
{
 struct mtd_info *VAR_18 = FUNC_5(VAR_17);
 struct davinci_nand_info *VAR_19 = FUNC_8(VAR_18);
 struct davinci_nand_pdata *VAR_20 = FUNC_4(VAR_19->pdev);
 int VAR_21 = 0;

 if (FUNC_0(VAR_20))
  return FUNC_1(VAR_20);

 switch (VAR_19->chip.ecc.mode) {
 case 129:
  VAR_20->ecc_bits = 0;
  break;
 case 128:
  VAR_20->ecc_bits = 0;






  VAR_19->chip.ecc.algo = VAR_5;
  break;
 case 130:
  if (VAR_20->ecc_bits == 4) {






   FUNC_6(&VAR_7);
   if (VAR_8)
    VAR_21 = -VAR_0;
   else
    VAR_8 = 1;
   FUNC_7(&VAR_7);

   if (VAR_21 == -VAR_0)
    return VAR_21;

   VAR_19->chip.ecc.calculate = VAR_11;
   VAR_19->chip.ecc.correct = VAR_13;
   VAR_19->chip.ecc.hwctl = VAR_15;
   VAR_19->chip.ecc.bytes = 10;
   VAR_19->chip.ecc.options = VAR_4;
   VAR_19->chip.ecc.algo = VAR_3;
  } else {

   VAR_19->chip.ecc.calculate = VAR_10;
   VAR_19->chip.ecc.correct = VAR_12;
   VAR_19->chip.ecc.hwctl = VAR_14;
   VAR_19->chip.ecc.bytes = 3;
   VAR_19->chip.ecc.algo = VAR_5;
  }
  VAR_19->chip.ecc.size = 512;
  VAR_19->chip.ecc.strength = VAR_20->ecc_bits;
  break;
 default:
  return -VAR_1;
 }







 if (VAR_20->ecc_bits == 4) {
  int VAR_22 = VAR_18->writesize / 512;

  if (!VAR_22 || VAR_18->oobsize < 16) {
   FUNC_2(&VAR_19->pdev->dev, "too small\n");
   return -VAR_1;
  }





  if (VAR_22 == 1) {
   FUNC_3(VAR_18, &VAR_9);
  } else if (VAR_22 == 4 || VAR_22 == 8) {
   FUNC_3(VAR_18, &VAR_16);
   VAR_19->chip.ecc.mode = VAR_6;
  } else {
   return -VAR_2;
  }
 }

 return VAR_21;
}
