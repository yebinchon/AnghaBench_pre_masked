
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mode; int bytes; int strength; int algo; int options; int correct; int calculate; } ;
struct nand_chip {TYPE_1__ ecc; } ;
struct mtd_info {int oobsize; } ;
struct fsmc_nand_data {int dev; int pid; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (struct mtd_info*,int *) ;
 int VAR_7 ;
 struct fsmc_nand_data* FUNC_5 (struct nand_chip*) ;
 struct mtd_info* FUNC_6 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_7(struct nand_chip *VAR_8)
{
 struct mtd_info *VAR_9 = FUNC_6(VAR_8);
 struct fsmc_nand_data *VAR_10 = FUNC_5(VAR_8);

 if (FUNC_0(VAR_10->pid) >= 8) {
  switch (VAR_9->oobsize) {
  case 16:
  case 64:
  case 128:
  case 224:
  case 256:
   break;
  default:
   FUNC_3(VAR_10->dev,
     "No oob scheme defined for oobsize %d\n",
     VAR_9->oobsize);
   return -VAR_0;
  }

  FUNC_4(VAR_9, &VAR_5);

  return 0;
 }

 switch (VAR_8->ecc.mode) {
 case 130:
  FUNC_2(VAR_10->dev, "Using 1-bit HW ECC scheme\n");
  VAR_8->ecc.calculate = VAR_6;
  VAR_8->ecc.correct = VAR_7;
  VAR_8->ecc.bytes = 3;
  VAR_8->ecc.strength = 1;
  VAR_8->ecc.options |= VAR_3;
  break;

 case 128:
  if (VAR_8->ecc.algo == VAR_2) {
   FUNC_2(VAR_10->dev,
     "Using 4-bit SW BCH ECC scheme\n");
   break;
  }

 case 129:
  break;

 default:
  FUNC_1(VAR_10->dev, "Unsupported ECC mode!\n");
  return -VAR_1;
 }





 if (VAR_8->ecc.mode == 130) {
  switch (VAR_9->oobsize) {
  case 16:
  case 64:
  case 128:
   FUNC_4(VAR_9,
       &VAR_4);
   break;
  default:
   FUNC_3(VAR_10->dev,
     "No oob scheme defined for oobsize %d\n",
     VAR_9->oobsize);
   return -VAR_0;
  }
 }

 return 0;
}
