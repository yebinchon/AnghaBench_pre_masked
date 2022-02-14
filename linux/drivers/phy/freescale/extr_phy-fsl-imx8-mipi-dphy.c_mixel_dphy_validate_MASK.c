
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union phy_configure_opts {int mipi_dphy; } ;
struct phy {int dummy; } ;
struct mixel_dphy_cfg {int member_0; } ;
typedef enum phy_mode { ____Placeholder_phy_mode } phy_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct phy*,int *,struct mixel_dphy_cfg*) ;

__attribute__((used)) static int FUNC_1(struct phy *VAR_2, enum phy_mode VAR_3, int VAR_4,
          union phy_configure_opts *VAR_5)
{
 struct mixel_dphy_cfg VAR_6 = { 0 };

 if (VAR_3 != VAR_1)
  return -VAR_0;

 return FUNC_0(VAR_2, &VAR_5->mipi_dphy, &VAR_6);
}
