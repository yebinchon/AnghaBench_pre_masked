
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct net_device {int dummy; } ;
struct bcm_enet_priv {int mac_clk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct net_device*) ;
 struct bcm_enet_priv* FUNC_2 (struct net_device*) ;
 struct net_device* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct bcm_enet_priv *VAR_1;
 struct net_device *VAR_2;


 VAR_2 = FUNC_3(VAR_0);
 VAR_1 = FUNC_2(VAR_2);
 FUNC_4(VAR_2);

 FUNC_0(VAR_1->mac_clk);

 FUNC_1(VAR_2);
 return 0;
}
