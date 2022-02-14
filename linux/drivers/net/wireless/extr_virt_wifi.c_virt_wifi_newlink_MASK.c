
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct virt_wifi_netdev_priv {int being_deleted; int is_connected; int is_up; TYPE_1__* lowerdev; int connect; struct net_device* upperdev; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {scalar_t__ mtu; TYPE_5__* ieee80211_ptr; } ;
struct net {int dummy; } ;
struct TYPE_10__ {int wiphy; int iftype; } ;
struct TYPE_9__ {scalar_t__ mtu; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (int *,int ) ;
 int VAR_6 ;
 int FUNC_1 (struct net_device*,int *) ;
 int VAR_7 ;
 TYPE_1__* FUNC_2 (struct net*,int ) ;
 int FUNC_3 (int ) ;
 int VAR_8 ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (struct net_device*,TYPE_1__*) ;
 int FUNC_6 (TYPE_5__*) ;
 TYPE_5__* FUNC_7 (int,int ) ;
 struct virt_wifi_netdev_priv* FUNC_8 (struct net_device*) ;
 int FUNC_9 (TYPE_1__*,int ,struct virt_wifi_netdev_priv*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*,struct net_device*,struct netlink_ext_ack*) ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 (TYPE_1__*,struct net_device*) ;
 int FUNC_14 (struct nlattr*) ;
 int FUNC_15 (struct net_device*) ;
 int FUNC_16 (struct net_device*) ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_17(struct net *VAR_11, struct net_device *VAR_12,
        struct nlattr *VAR_13[], struct nlattr *VAR_14[],
        struct netlink_ext_ack *VAR_15)
{
 struct virt_wifi_netdev_priv *VAR_16 = FUNC_8(VAR_12);
 int VAR_17;

 if (!VAR_13[VAR_4])
  return -VAR_0;

 FUNC_12(VAR_12);

 VAR_16->upperdev = VAR_12;
 VAR_16->lowerdev = FUNC_2(VAR_11,
         FUNC_14(VAR_13[VAR_4]));

 if (!VAR_16->lowerdev)
  return -VAR_1;
 if (!VAR_13[VAR_5])
  VAR_12->mtu = VAR_16->lowerdev->mtu;
 else if (VAR_12->mtu > VAR_16->lowerdev->mtu)
  return -VAR_0;

 VAR_17 = FUNC_9(VAR_16->lowerdev, VAR_10,
      VAR_16);
 if (VAR_17) {
  FUNC_4(&VAR_16->lowerdev->dev,
   "can't netdev_rx_handler_register: %d\n", VAR_17);
  return VAR_17;
 }

 FUNC_5(VAR_12, VAR_16->lowerdev);
 FUNC_13(VAR_16->lowerdev, VAR_12);

 FUNC_1(VAR_12, &VAR_16->lowerdev->dev);
 VAR_12->ieee80211_ptr = FUNC_7(sizeof(*VAR_12->ieee80211_ptr), VAR_3);

 if (!VAR_12->ieee80211_ptr) {
  VAR_17 = -VAR_2;
  goto remove_handler;
 }

 VAR_12->ieee80211_ptr->iftype = VAR_6;
 VAR_12->ieee80211_ptr->wiphy = VAR_8;

 VAR_17 = FUNC_15(VAR_12);
 if (VAR_17) {
  FUNC_4(&VAR_16->lowerdev->dev, "can't register_netdevice: %d\n",
   VAR_17);
  goto free_wireless_dev;
 }

 VAR_17 = FUNC_11(VAR_16->lowerdev, VAR_12, VAR_15);
 if (VAR_17) {
  FUNC_4(&VAR_16->lowerdev->dev, "can't netdev_upper_dev_link: %d\n",
   VAR_17);
  goto unregister_netdev;
 }

 VAR_16->being_deleted = 0;
 VAR_16->is_connected = 0;
 VAR_16->is_up = 0;
 FUNC_0(&VAR_16->connect, VAR_9);
 FUNC_3(VAR_7);

 return 0;
unregister_netdev:
 FUNC_16(VAR_12);
free_wireless_dev:
 FUNC_6(VAR_12->ieee80211_ptr);
 VAR_12->ieee80211_ptr = ((void*)0);
remove_handler:
 FUNC_10(VAR_16->lowerdev);

 return VAR_17;
}
