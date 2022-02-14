
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int steps; int bytes; int size; int strength; } ;
struct nand_chip {TYPE_2__ ecc; void* oob_poi; int controller; } ;
struct mtd_oob_region {int offset; } ;
struct TYPE_3__ {int failed; } ;
struct mtd_info {TYPE_1__ ecc_stats; } ;
struct atmel_nand_controller {int dev; } ;
struct atmel_nand {int pmecc; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,void*,void*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (struct mtd_info*,int ,struct mtd_oob_region*) ;
 int FUNC_6 (void*,int ,void*,int ,int *,int ,int ) ;
 struct mtd_info* FUNC_7 (struct nand_chip*) ;
 struct atmel_nand* FUNC_8 (struct nand_chip*) ;
 struct atmel_nand_controller* FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct nand_chip *VAR_0, void *VAR_1,
      bool VAR_2)
{
 struct atmel_nand *VAR_3 = FUNC_8(VAR_0);
 struct mtd_info *VAR_4 = FUNC_7(VAR_0);
 struct atmel_nand_controller *VAR_5;
 struct mtd_oob_region VAR_6;
 int VAR_7, VAR_8, VAR_9 = 0;
 void *VAR_10, *VAR_11;

 VAR_5 = FUNC_9(VAR_0->controller);

 if (VAR_2)
  return 0;

 VAR_7 = FUNC_2(VAR_3->pmecc);
 if (VAR_7) {
  FUNC_3(VAR_5->dev,
   "Failed to read NAND page data (err = %d)\n",
   VAR_7);
  return VAR_7;
 }

 FUNC_5(VAR_4, 0, &VAR_6);
 VAR_11 = VAR_0->oob_poi + VAR_6.offset;
 VAR_10 = VAR_1;

 for (VAR_8 = 0; VAR_8 < VAR_0->ecc.steps; VAR_8++) {
  VAR_7 = FUNC_1(VAR_3->pmecc, VAR_8, VAR_10,
       VAR_11);
  if (VAR_7 < 0 && !FUNC_0(VAR_3->pmecc))
   VAR_7 = FUNC_6(VAR_10,
         VAR_0->ecc.size,
         VAR_11,
         VAR_0->ecc.bytes,
         ((void*)0), 0,
         VAR_0->ecc.strength);

  if (VAR_7 >= 0)
   VAR_9 = FUNC_4(VAR_7, VAR_9);
  else
   VAR_4->ecc_stats.failed++;

  VAR_10 += VAR_0->ecc.size;
  VAR_11 += VAR_0->ecc.bytes;
 }

 return VAR_9;
}
