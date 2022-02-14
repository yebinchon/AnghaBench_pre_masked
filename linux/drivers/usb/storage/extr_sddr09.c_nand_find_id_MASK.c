
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_flash_dev {unsigned char model_id; } ;


 int FUNC_0 (struct nand_flash_dev*) ;
 struct nand_flash_dev* VAR_0 ;

__attribute__((used)) static struct nand_flash_dev *
FUNC_1(unsigned char VAR_1) {
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++)
  if (VAR_0[VAR_2].model_id == VAR_1)
   return &(VAR_0[VAR_2]);
 return ((void*)0);
}
