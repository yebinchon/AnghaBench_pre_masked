
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {int dummy; } ;
struct mtd_info {int dummy; } ;
struct mpc5121_nfc_prv {scalar_t__ csreg; scalar_t__ clk; } ;
struct device {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 struct nand_chip* FUNC_2 (struct mtd_info*) ;
 struct mpc5121_nfc_prv* FUNC_3 (struct nand_chip*) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_0, struct mtd_info *VAR_1)
{
 struct nand_chip *VAR_2 = FUNC_2(VAR_1);
 struct mpc5121_nfc_prv *VAR_3 = FUNC_3(VAR_2);

 if (VAR_3->clk)
  FUNC_0(VAR_3->clk);

 if (VAR_3->csreg)
  FUNC_1(VAR_3->csreg);
}
