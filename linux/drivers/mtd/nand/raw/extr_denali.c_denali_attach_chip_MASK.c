
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bytes; int strength; int size; } ;
struct nand_chip {TYPE_1__ ecc; } ;
struct mtd_info {scalar_t__ oobsize; } ;
struct denali_controller {int dev; scalar_t__ oob_skip_bytes; int ecc_caps; } ;


 int FUNC_0 (struct nand_chip*) ;
 int FUNC_1 (int ,char*,int ,int ,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct nand_chip*,int ,scalar_t__) ;
 struct mtd_info* FUNC_4 (struct nand_chip*) ;
 struct denali_controller* FUNC_5 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_6(struct nand_chip *VAR_0)
{
 struct denali_controller *VAR_1 = FUNC_5(VAR_0);
 struct mtd_info *VAR_2 = FUNC_4(VAR_0);
 int VAR_3;

 VAR_3 = FUNC_3(VAR_0, VAR_1->ecc_caps,
       VAR_2->oobsize - VAR_1->oob_skip_bytes);
 if (VAR_3) {
  FUNC_2(VAR_1->dev, "Failed to setup ECC settings.\n");
  return VAR_3;
 }

 FUNC_1(VAR_1->dev,
  "chosen ECC settings: step=%d, strength=%d, bytes=%d\n",
  VAR_0->ecc.size, VAR_0->ecc.strength, VAR_0->ecc.bytes);

 VAR_3 = FUNC_0(VAR_0);
 if (VAR_3)
  return VAR_3;

 return 0;
}
