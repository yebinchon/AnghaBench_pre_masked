
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_data_interface {int dummy; } ;
struct nand_chip {struct nand_data_interface data_interface; int onfi_timing_mode_default; } ;


 int FUNC_0 (struct nand_chip*) ;
 int FUNC_1 (struct nand_chip*,int) ;
 int FUNC_2 (struct nand_chip*) ;
 int FUNC_3 (struct nand_chip*,int) ;
 int FUNC_4 (struct nand_chip*,int) ;

int FUNC_5(struct nand_chip *VAR_0, int VAR_1)
{
 struct nand_data_interface VAR_2 = VAR_0->data_interface;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_1);
 if (VAR_3)
  return VAR_3;






 FUNC_3(VAR_0, VAR_1);
 VAR_3 = FUNC_2(VAR_0);
 FUNC_0(VAR_0);
 if (VAR_3)
  return VAR_3;
 if (!VAR_0->onfi_timing_mode_default)
  return 0;

 VAR_0->data_interface = VAR_2;
 VAR_3 = FUNC_4(VAR_0, VAR_1);
 if (VAR_3)
  return VAR_3;

 return 0;
}
