
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy {int dummy; } ;
struct cdns_dphy {int psm_clk; int pll_ref_clk; } ;


 int FUNC_0 (int ) ;
 struct cdns_dphy* FUNC_1 (struct phy*) ;

__attribute__((used)) static int FUNC_2(struct phy *VAR_0)
{
 struct cdns_dphy *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->pll_ref_clk);
 FUNC_0(VAR_1->psm_clk);

 return 0;
}
