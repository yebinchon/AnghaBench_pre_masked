
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union phy_configure_opts {int mipi_dphy; } ;
struct sun6i_dphy {int config; } ;
struct phy {int dummy; } ;


 int FUNC_0 (int *,union phy_configure_opts*,int) ;
 struct sun6i_dphy* FUNC_1 (struct phy*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct phy *VAR_0, union phy_configure_opts *VAR_1)
{
 struct sun6i_dphy *VAR_2 = FUNC_1(VAR_0);
 int VAR_3;

 VAR_3 = FUNC_2(&VAR_1->mipi_dphy);
 if (VAR_3)
  return VAR_3;

 FUNC_0(&VAR_2->config, VAR_1, sizeof(VAR_2->config));

 return 0;
}
