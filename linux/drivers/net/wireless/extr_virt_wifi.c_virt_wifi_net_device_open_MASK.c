
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virt_wifi_netdev_priv {int is_up; } ;
struct net_device {int dummy; } ;


 struct virt_wifi_netdev_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_0)
{
 struct virt_wifi_netdev_priv *VAR_1 = FUNC_0(VAR_0);

 VAR_1->is_up = 1;
 return 0;
}
