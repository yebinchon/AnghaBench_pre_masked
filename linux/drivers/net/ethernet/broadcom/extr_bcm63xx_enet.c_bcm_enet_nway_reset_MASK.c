
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct bcm_enet_priv {scalar_t__ has_phy; } ;


 int VAR_0 ;
 struct bcm_enet_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1)
{
 struct bcm_enet_priv *VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2->has_phy)
  return FUNC_1(VAR_1);

 return -VAR_0;
}
