
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_flash_dev {int dummy; } ;
struct nand_chip {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nand_chip*) ;
 int FUNC_1 (struct nand_chip*) ;
 int FUNC_2 (struct nand_chip*,unsigned int,struct nand_flash_dev*) ;
 int FUNC_3 (struct nand_chip*) ;
 int FUNC_4 (struct nand_chip*) ;

int FUNC_5(struct nand_chip *VAR_1, unsigned int VAR_2,
         struct nand_flash_dev *VAR_3)
{
 int VAR_4;

 if (!VAR_2)
  return -VAR_0;

 VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_0(VAR_1);
 if (VAR_4)
  goto cleanup_ident;

 VAR_4 = FUNC_4(VAR_1);
 if (VAR_4)
  goto detach_chip;

 return 0;

detach_chip:
 FUNC_1(VAR_1);
cleanup_ident:
 FUNC_3(VAR_1);

 return VAR_4;
}
