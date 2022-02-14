
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int strength; int bytes; int size; int mode; int correct; int calculate; int hwctl; } ;
struct nand_chip {int bbt_options; TYPE_1__ ecc; int controller; } ;
struct mtd_info {int writesize; int oobsize; } ;
struct ingenic_nfc {TYPE_2__* soc_info; int dev; int ecc; } ;
struct TYPE_4__ {int * oob_layout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct mtd_info*,int *) ;
 struct mtd_info* FUNC_4 (struct nand_chip*) ;
 scalar_t__ FUNC_5 (char*) ;
 int VAR_7 ;
 struct ingenic_nfc* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct nand_chip *VAR_8)
{
 struct mtd_info *VAR_9 = FUNC_4(VAR_8);
 struct ingenic_nfc *VAR_10 = FUNC_6(VAR_8->controller);
 int VAR_11;

 if (VAR_8->ecc.strength == 4) {

  VAR_8->ecc.bytes = 9;
 } else {
  VAR_8->ecc.bytes = FUNC_2((1 + 8) * VAR_8->ecc.size) *
      (VAR_8->ecc.strength / 8);
 }

 switch (VAR_8->ecc.mode) {
 case 130:
  if (!VAR_10->ecc) {
   FUNC_0(VAR_10->dev, "HW ECC selected, but ECC controller not found\n");
   return -VAR_1;
  }

  VAR_8->ecc.hwctl = VAR_6;
  VAR_8->ecc.calculate = VAR_4;
  VAR_8->ecc.correct = VAR_5;

 case 128:
  FUNC_1(VAR_10->dev, "using %s (strength %d, size %d, bytes %d)\n",
    (VAR_10->ecc) ? "hardware ECC" : "software ECC",
    VAR_8->ecc.strength, VAR_8->ecc.size, VAR_8->ecc.bytes);
  break;
 case 129:
  FUNC_1(VAR_10->dev, "not using ECC\n");
  break;
 default:
  FUNC_0(VAR_10->dev, "ECC mode %d not supported\n",
   VAR_8->ecc.mode);
  return -VAR_0;
 }


 if (VAR_8->ecc.mode != 130)
  return 0;


 VAR_11 = VAR_9->writesize / VAR_8->ecc.size * VAR_8->ecc.bytes;

 if (VAR_11 > VAR_9->oobsize - 2) {
  FUNC_0(VAR_10->dev,
   "invalid ECC config: required %d ECC bytes, but only %d are available",
   VAR_11, VAR_9->oobsize - 2);
  return -VAR_0;
 }





 if (VAR_8->bbt_options & VAR_3)
  VAR_8->bbt_options |= VAR_2;


 if (FUNC_5("qi,lb60"))
  FUNC_3(VAR_9, &VAR_7);
 else
  FUNC_3(VAR_9, VAR_10->soc_info->oob_layout);

 return 0;
}
