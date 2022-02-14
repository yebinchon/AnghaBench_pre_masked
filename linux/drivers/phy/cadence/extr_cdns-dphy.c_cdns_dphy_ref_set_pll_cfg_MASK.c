
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cdns_dphy_cfg {int pll_fbdiv; int pll_opdiv; int pll_ipdiv; } ;
struct cdns_dphy {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct cdns_dphy *VAR_6,
          const struct cdns_dphy_cfg *VAR_7)
{
 u32 VAR_8, VAR_9;

 VAR_8 = (VAR_7->pll_fbdiv / 4) - 2;
 VAR_9 = VAR_7->pll_fbdiv - VAR_8 - 2;

 FUNC_6(VAR_2 | VAR_3 |
        FUNC_1(VAR_7->pll_ipdiv) |
        FUNC_2(VAR_7->pll_opdiv),
        VAR_6->regs + VAR_4);
 FUNC_6(VAR_1 |
        FUNC_0(VAR_8, VAR_9),
        VAR_6->regs + VAR_0);
 FUNC_6(FUNC_4(6) | FUNC_5(0x101) |
        FUNC_3(0x8),
        VAR_6->regs + VAR_5);
}
