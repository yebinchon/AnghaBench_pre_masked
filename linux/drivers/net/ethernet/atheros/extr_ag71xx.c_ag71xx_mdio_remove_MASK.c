
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ag71xx {int clk_mdio; scalar_t__ mii_bus; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct ag71xx *VAR_0)
{
 if (VAR_0->mii_bus)
  FUNC_1(VAR_0->mii_bus);
 FUNC_0(VAR_0->clk_mdio);
}
