
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy {int dummy; } ;
struct cdns_dphy {scalar_t__ regs; int pll_ref_clk; int psm_clk; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct cdns_dphy* FUNC_1 (struct phy*) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct phy *VAR_3)
{
 struct cdns_dphy *VAR_4 = FUNC_1(VAR_3);

 FUNC_0(VAR_4->psm_clk);
 FUNC_0(VAR_4->pll_ref_clk);


 FUNC_2(VAR_1 | VAR_2,
        VAR_4->regs + VAR_0);

 return 0;
}
