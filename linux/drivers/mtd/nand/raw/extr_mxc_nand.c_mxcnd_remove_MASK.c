
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct mxc_nand_host {int clk; scalar_t__ clk_act; int nand; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 struct mxc_nand_host* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct mxc_nand_host *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(&VAR_1->nand);
 if (VAR_1->clk_act)
  FUNC_0(VAR_1->clk);

 return 0;
}
