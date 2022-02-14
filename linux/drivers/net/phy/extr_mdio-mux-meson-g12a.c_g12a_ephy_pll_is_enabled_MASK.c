
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g12a_ephy_pll {scalar_t__ base; } ;
struct clk_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 struct g12a_ephy_pll* FUNC_0 (struct clk_hw*) ;
 unsigned int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_2)
{
 struct g12a_ephy_pll *VAR_3 = FUNC_0(VAR_2);
 unsigned int VAR_4;

 VAR_4 = FUNC_1(VAR_3->base + VAR_0);

 return (VAR_4 & VAR_1) ? 1 : 0;
}
