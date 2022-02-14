
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union phy_configure_opts {int mipi_dphy; } ;
struct phy {int dummy; } ;
struct cdns_dphy_cfg {int member_0; } ;
struct cdns_dphy {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct phy*,int *,struct cdns_dphy_cfg*) ;
 int FUNC_1 (struct cdns_dphy*,int ) ;
 int FUNC_2 (struct cdns_dphy*,struct cdns_dphy_cfg*) ;
 int FUNC_3 (struct cdns_dphy*) ;
 struct cdns_dphy* FUNC_4 (struct phy*) ;

__attribute__((used)) static int FUNC_5(struct phy *VAR_1, union phy_configure_opts *VAR_2)
{
 struct cdns_dphy *VAR_3 = FUNC_4(VAR_1);
 struct cdns_dphy_cfg VAR_4 = { 0 };
 int VAR_5;

 VAR_5 = FUNC_0(VAR_1, &VAR_2->mipi_dphy, &VAR_4);
 if (VAR_5)
  return VAR_5;





 VAR_5 = FUNC_3(VAR_3);
 if (VAR_5)
  return VAR_5;
 FUNC_1(VAR_3, VAR_0);





 FUNC_2(VAR_3, &VAR_4);

 return 0;
}
