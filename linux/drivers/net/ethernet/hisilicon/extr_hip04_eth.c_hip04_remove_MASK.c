
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct net_device {int dummy; } ;
struct hip04_priv {int tx_timeout_task; int phy_node; scalar_t__ phy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,struct device*) ;
 struct hip04_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 struct net_device* FUNC_6 (struct platform_device*) ;
 int FUNC_7 (struct net_device*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_0)
{
 struct net_device *VAR_1 = FUNC_6(VAR_0);
 struct hip04_priv *VAR_2 = FUNC_3(VAR_1);
 struct device *VAR_3 = &VAR_0->dev;

 if (VAR_2->phy)
  FUNC_5(VAR_2->phy);

 FUNC_2(VAR_1, VAR_3);
 FUNC_7(VAR_1);
 FUNC_4(VAR_2->phy_node);
 FUNC_0(&VAR_2->tx_timeout_task);
 FUNC_1(VAR_1);

 return 0;
}
