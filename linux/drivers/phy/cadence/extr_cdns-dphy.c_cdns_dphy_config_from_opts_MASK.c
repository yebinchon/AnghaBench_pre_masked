
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_configure_opts_mipi_dphy {int wakeup; } ;
struct phy {int dummy; } ;
struct cdns_dphy_cfg {int dummy; } ;
struct cdns_dphy {int dummy; } ;


 int FUNC_0 (struct cdns_dphy*) ;
 int FUNC_1 (struct cdns_dphy*,struct cdns_dphy_cfg*,struct phy_configure_opts_mipi_dphy*,unsigned int*) ;
 struct cdns_dphy* FUNC_2 (struct phy*) ;
 int FUNC_3 (struct phy_configure_opts_mipi_dphy*) ;

__attribute__((used)) static int FUNC_4(struct phy *VAR_0,
          struct phy_configure_opts_mipi_dphy *VAR_1,
          struct cdns_dphy_cfg *VAR_2)
{
 struct cdns_dphy *VAR_3 = FUNC_2(VAR_0);
 unsigned int VAR_4 = 0;
 int VAR_5;

 VAR_5 = FUNC_3(VAR_1);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_1(VAR_3, VAR_2,
     VAR_1, &VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_1->wakeup = FUNC_0(VAR_3) / 1000;

 return 0;
}
