
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s3c2410_nand_info {int device; int cpu_type; } ;
struct TYPE_2__ {int mode; int strength; int size; int bytes; void* calculate; int hwctl; int correct; int algo; } ;
struct nand_chip {int page_shift; int bbt_options; int options; TYPE_1__ ecc; } ;
struct mtd_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;



 int FUNC_0 (int ,char*,struct nand_chip*,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct mtd_info*,int *) ;
 struct mtd_info* FUNC_4 (struct nand_chip*) ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct s3c2410_nand_info* FUNC_5 (struct mtd_info*) ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_6(struct nand_chip *VAR_12)
{
 struct mtd_info *VAR_13 = FUNC_4(VAR_12);
 struct s3c2410_nand_info *VAR_14 = FUNC_5(VAR_13);

 switch (VAR_12->ecc.mode) {

 case 132:
  FUNC_2(VAR_14->device, "ECC disabled\n");
  break;

 case 131:






  VAR_12->ecc.algo = VAR_2;
  FUNC_2(VAR_14->device, "soft ECC\n");
  break;

 case 133:
  VAR_12->ecc.calculate = VAR_4;
  VAR_12->ecc.correct = VAR_5;
  VAR_12->ecc.strength = 1;

  switch (VAR_14->cpu_type) {
  case 130:
   VAR_12->ecc.hwctl = VAR_6;
   VAR_12->ecc.calculate = VAR_4;
   break;

  case 129:
   VAR_12->ecc.hwctl = VAR_9;
   VAR_12->ecc.calculate = VAR_8;
   break;

  case 128:
   VAR_12->ecc.hwctl = VAR_11;
   VAR_12->ecc.calculate = VAR_10;
   break;
  }

  FUNC_0(VAR_14->device, "chip %p => page shift %d\n",
   VAR_12, VAR_12->page_shift);



  if (VAR_12->page_shift > 10) {
   VAR_12->ecc.size = 256;
   VAR_12->ecc.bytes = 3;
  } else {
   VAR_12->ecc.size = 512;
   VAR_12->ecc.bytes = 3;
   FUNC_3(FUNC_4(VAR_12),
       &VAR_7);
  }

  FUNC_2(VAR_14->device, "hardware ECC\n");
  break;

 default:
  FUNC_1(VAR_14->device, "invalid ECC mode!\n");
  return -VAR_0;
 }

 if (VAR_12->bbt_options & VAR_1)
  VAR_12->options |= VAR_3;

 return 0;
}
