
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
struct phy_configure_opts_mipi_dphy {unsigned long hs_clk_rate; } ;
struct cdns_dphy_cfg {int pll_ipdiv; int pll_opdiv; int pll_fbdiv; } ;
struct cdns_dphy {int pll_ref_clk; } ;


 int FUNC_0 (unsigned long,unsigned long) ;
 int VAR_0 ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (struct cdns_dphy_cfg*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct cdns_dphy *VAR_1,
         struct cdns_dphy_cfg *VAR_2,
         struct phy_configure_opts_mipi_dphy *VAR_3,
         unsigned int *VAR_4)
{
 unsigned long VAR_5 = FUNC_1(VAR_1->pll_ref_clk);
 u64 VAR_6;

 FUNC_2(VAR_2, 0, sizeof(*VAR_2));

 if (VAR_5 < 9600000 || VAR_5 >= 150000000)
  return -VAR_0;
 else if (VAR_5 < 19200000)
  VAR_2->pll_ipdiv = 1;
 else if (VAR_5 < 38400000)
  VAR_2->pll_ipdiv = 2;
 else if (VAR_5 < 76800000)
  VAR_2->pll_ipdiv = 4;
 else
  VAR_2->pll_ipdiv = 8;

 VAR_6 = VAR_3->hs_clk_rate;

 if (VAR_6 > 2500000000UL || VAR_6 < 160000000UL)
  return -VAR_0;
 else if (VAR_6 >= 1250000000)
  VAR_2->pll_opdiv = 1;
 else if (VAR_6 >= 630000000)
  VAR_2->pll_opdiv = 2;
 else if (VAR_6 >= 320000000)
  VAR_2->pll_opdiv = 4;
 else if (VAR_6 >= 160000000)
  VAR_2->pll_opdiv = 8;

 VAR_2->pll_fbdiv = FUNC_0(VAR_6 * 2 * VAR_2->pll_opdiv *
       VAR_2->pll_ipdiv,
       VAR_5);

 return 0;
}
