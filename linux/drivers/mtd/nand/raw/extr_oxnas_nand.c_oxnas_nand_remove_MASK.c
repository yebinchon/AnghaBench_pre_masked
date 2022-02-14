
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct oxnas_nand_ctrl {int clk; scalar_t__* chips; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 struct oxnas_nand_ctrl* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct oxnas_nand_ctrl *VAR_1 = FUNC_2(VAR_0);

 if (VAR_1->chips[0])
  FUNC_1(VAR_1->chips[0]);

 FUNC_0(VAR_1->clk);

 return 0;
}
