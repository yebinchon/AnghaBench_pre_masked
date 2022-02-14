
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int steps; int bytes; } ;
struct nand_chip {TYPE_1__ ecc; void* oob_poi; int controller; } ;
struct mtd_oob_region {int offset; } ;
struct mtd_info {int dummy; } ;
struct atmel_nand_controller {int dev; } ;
struct atmel_nand {int pmecc; } ;


 int FUNC_0 (int ,int,void*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct mtd_info*,int ,struct mtd_oob_region*) ;
 struct mtd_info* FUNC_4 (struct nand_chip*) ;
 struct atmel_nand* FUNC_5 (struct nand_chip*) ;
 struct atmel_nand_controller* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct nand_chip *VAR_0, bool VAR_1)
{
 struct atmel_nand *VAR_2 = FUNC_5(VAR_0);
 struct mtd_info *VAR_3 = FUNC_4(VAR_0);
 struct atmel_nand_controller *VAR_4;
 struct mtd_oob_region VAR_5;
 void *VAR_6;
 int VAR_7, VAR_8;

 VAR_4 = FUNC_6(VAR_0->controller);

 if (VAR_1)
  return 0;

 VAR_7 = FUNC_1(VAR_2->pmecc);
 if (VAR_7) {
  FUNC_2(VAR_4->dev,
   "Failed to transfer NAND page data (err = %d)\n",
   VAR_7);
  return VAR_7;
 }

 FUNC_3(VAR_3, 0, &VAR_5);
 VAR_6 = VAR_0->oob_poi + VAR_5.offset;

 for (VAR_8 = 0; VAR_8 < VAR_0->ecc.steps; VAR_8++) {
  FUNC_0(VAR_2->pmecc, VAR_8,
         VAR_6);
  VAR_6 += VAR_0->ecc.bytes;
 }

 return 0;
}
