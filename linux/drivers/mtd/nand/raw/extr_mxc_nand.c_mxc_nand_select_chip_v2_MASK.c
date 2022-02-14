
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {int dummy; } ;
struct mxc_nand_host {int clk_act; int active_cs; int clk; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct mxc_nand_host* FUNC_2 (struct nand_chip*) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static void FUNC_4(struct nand_chip *VAR_1, int VAR_2)
{
 struct mxc_nand_host *VAR_3 = FUNC_2(VAR_1);

 if (VAR_2 == -1) {

  if (VAR_3->clk_act) {
   FUNC_0(VAR_3->clk);
   VAR_3->clk_act = 0;
  }
  return;
 }

 if (!VAR_3->clk_act) {

  FUNC_1(VAR_3->clk);
  VAR_3->clk_act = 1;
 }

 VAR_3->active_cs = VAR_2;
 FUNC_3(VAR_3->active_cs << 4, VAR_0);
}
