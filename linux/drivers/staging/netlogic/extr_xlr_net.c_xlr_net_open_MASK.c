
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xlr_net_priv {int dummy; } ;
struct phy_device {int dummy; } ;
struct net_device {int dummy; } ;


 struct xlr_net_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct phy_device*) ;
 int FUNC_3 (struct phy_device*) ;
 int FUNC_4 (char*) ;
 struct phy_device* FUNC_5 (struct xlr_net_priv*) ;
 int FUNC_6 (struct xlr_net_priv*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_0)
{
 u32 VAR_1;
 struct xlr_net_priv *VAR_2 = FUNC_0(VAR_0);
 struct phy_device *VAR_3 = FUNC_5(VAR_2);


 FUNC_2(VAR_3);

 VAR_1 = FUNC_3(VAR_3);
 if (VAR_1) {
  FUNC_4("Autoneg failed\n");
  return VAR_1;
 }

 FUNC_6(VAR_2);

 FUNC_1(VAR_0);

 return 0;
}
