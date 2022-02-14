
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {int controller; } ;
struct atmel_nand_controller {int dev; } ;
struct atmel_nand {int pmecc; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,char*,int) ;
 struct atmel_nand* FUNC_2 (struct nand_chip*) ;
 struct atmel_nand_controller* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct nand_chip *VAR_0, int VAR_1, bool VAR_2)
{
 struct atmel_nand *VAR_3 = FUNC_2(VAR_0);
 struct atmel_nand_controller *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_3(VAR_0->controller);

 if (VAR_2)
  return 0;

 VAR_5 = FUNC_0(VAR_3->pmecc, VAR_1);
 if (VAR_5)
  FUNC_1(VAR_4->dev,
   "Failed to enable ECC engine (err = %d)\n", VAR_5);

 return VAR_5;
}
