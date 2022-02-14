
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlr_net_priv {int dummy; } ;
struct phy_device {int dummy; } ;
struct net_device {int dummy; } ;


 struct xlr_net_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct phy_device*) ;
 struct phy_device* FUNC_3 (struct xlr_net_priv*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_0)
{
 struct xlr_net_priv *VAR_1 = FUNC_0(VAR_0);
 struct phy_device *VAR_2 = FUNC_3(VAR_1);

 FUNC_2(VAR_2);
 FUNC_1(VAR_0);
 return 0;
}
