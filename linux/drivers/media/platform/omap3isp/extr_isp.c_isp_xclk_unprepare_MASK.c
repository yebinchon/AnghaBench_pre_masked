
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isp_xclk {int isp; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int ) ;
 struct isp_xclk* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static void FUNC_2(struct clk_hw *VAR_0)
{
 struct isp_xclk *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->isp);
}
