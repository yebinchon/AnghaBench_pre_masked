
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {int dummy; } ;
struct mxc_nand_host {int clk_act; int clk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct mxc_nand_host* FUNC_2 (struct nand_chip*) ;

__attribute__((used)) static void FUNC_3(struct nand_chip *VAR_0, int VAR_1)
{
 struct mxc_nand_host *VAR_2 = FUNC_2(VAR_0);

 if (VAR_1 == -1) {

  if (VAR_2->clk_act) {
   FUNC_0(VAR_2->clk);
   VAR_2->clk_act = 0;
  }
  return;
 }

 if (!VAR_2->clk_act) {

  FUNC_1(VAR_2->clk);
  VAR_2->clk_act = 1;
 }
}
