
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {int dummy; } ;
struct mtd_info {int dummy; } ;
struct mpc5121_nfc_prv {int csreg; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nand_chip* FUNC_0 (struct mtd_info*) ;
 struct mpc5121_nfc_prv* FUNC_1 (struct nand_chip*) ;
 struct device_node* FUNC_2 (int *,int *,char*) ;
 int FUNC_3 (struct device_node*,int ) ;
 int FUNC_4 (struct device_node*) ;

__attribute__((used)) static int FUNC_5(struct mtd_info *VAR_2)
{
 struct nand_chip *VAR_3 = FUNC_0(VAR_2);
 struct mpc5121_nfc_prv *VAR_4 = FUNC_1(VAR_3);
 struct device_node *VAR_5;

 VAR_5 = FUNC_2(((void*)0), ((void*)0), "fsl,mpc5121ads-cpld");
 if (VAR_5) {
  VAR_4->csreg = FUNC_3(VAR_5, 0);
  FUNC_4(VAR_5);
  if (!VAR_4->csreg)
   return -VAR_1;


  VAR_4->csreg += 9;
  return 0;
 }

 return -VAR_0;
}
