
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xsphy_instance {int ref_clk; } ;
struct phy {int dummy; } ;


 int FUNC_0 (int ) ;
 struct xsphy_instance* FUNC_1 (struct phy*) ;

__attribute__((used)) static int FUNC_2(struct phy *VAR_0)
{
 struct xsphy_instance *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->ref_clk);
 return 0;
}
