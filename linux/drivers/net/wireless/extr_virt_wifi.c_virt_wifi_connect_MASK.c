
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct virt_wifi_netdev_priv {int connect_requested_bss; int connect; int is_up; scalar_t__ being_deleted; } ;
struct net_device {int dummy; } ;
struct cfg80211_connect_params {int bssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 struct virt_wifi_netdev_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (struct wiphy*,char*) ;

__attribute__((used)) static int FUNC_5(struct wiphy *VAR_2, struct net_device *VAR_3,
        struct cfg80211_connect_params *VAR_4)
{
 struct virt_wifi_netdev_priv *VAR_5 = FUNC_2(VAR_3);
 bool VAR_6;

 if (VAR_5->being_deleted || !VAR_5->is_up)
  return -VAR_0;

 VAR_6 = FUNC_3(&VAR_5->connect, VAR_1 * 2);
 if (!VAR_6)
  return -VAR_0;

 if (VAR_4->bssid)
  FUNC_1(VAR_5->connect_requested_bss, VAR_4->bssid);
 else
  FUNC_0(VAR_5->connect_requested_bss);

 FUNC_4(VAR_2, "connect\n");

 return 0;
}
