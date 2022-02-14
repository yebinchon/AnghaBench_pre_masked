
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rockchip_dp_phy {int grf; int phy_24m; int dev; } ;
struct phy {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 struct rockchip_dp_phy* FUNC_3 (struct phy*) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static int FUNC_5(struct phy *VAR_4, bool VAR_5)
{
 struct rockchip_dp_phy *VAR_6 = FUNC_3(VAR_4);
 int VAR_7;

 if (VAR_5) {
  VAR_7 = FUNC_4(VAR_6->grf, VAR_3,
       VAR_0 |
       VAR_2);
  if (VAR_7 < 0) {
   FUNC_2(VAR_6->dev, "Can't enable PHY power %d\n", VAR_7);
   return VAR_7;
  }

  VAR_7 = FUNC_1(VAR_6->phy_24m);
 } else {
  FUNC_0(VAR_6->phy_24m);

  VAR_7 = FUNC_4(VAR_6->grf, VAR_3,
       VAR_0 |
       VAR_1);
 }

 return VAR_7;
}
