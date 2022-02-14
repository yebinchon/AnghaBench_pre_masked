
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virt_wifi_netdev_priv {int is_up; } ;
struct net_device {TYPE_1__* ieee80211_ptr; } ;
struct TYPE_2__ {int wiphy; } ;


 struct virt_wifi_netdev_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_0)
{
 struct virt_wifi_netdev_priv *VAR_1 = FUNC_0(VAR_0);

 VAR_1->is_up = 0;

 if (!VAR_0->ieee80211_ptr)
  return 0;

 FUNC_3(VAR_0->ieee80211_ptr->wiphy);
 FUNC_2(VAR_0);
 FUNC_1(VAR_0);

 return 0;
}
