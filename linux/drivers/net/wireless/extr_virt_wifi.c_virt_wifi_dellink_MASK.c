
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virt_wifi_netdev_priv {int being_deleted; int lowerdev; } ;
struct net_device {TYPE_1__* ieee80211_ptr; } ;
struct list_head {int dummy; } ;
struct TYPE_2__ {int wiphy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct virt_wifi_netdev_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*,struct list_head*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct net_device *VAR_1,
         struct list_head *VAR_2)
{
 struct virt_wifi_netdev_priv *VAR_3 = FUNC_1(VAR_1);

 if (VAR_1->ieee80211_ptr)
  FUNC_7(VAR_1->ieee80211_ptr->wiphy);

 VAR_3->being_deleted = 1;
 FUNC_6(VAR_1);
 FUNC_4(VAR_1);

 FUNC_2(VAR_3->lowerdev);
 FUNC_3(VAR_3->lowerdev, VAR_1);

 FUNC_5(VAR_1, VAR_2);
 FUNC_0(VAR_0);


}
