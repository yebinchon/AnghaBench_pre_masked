
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wiphy {int dummy; } ;
struct usbnet {int net; } ;
struct rndis_wlan_private {scalar_t__ device_type; int scan_work; int workqueue; struct cfg80211_scan_request* scan_request; } ;
struct net_device {int dummy; } ;
struct cfg80211_scan_request {TYPE_1__* wdev; } ;
struct TYPE_2__ {struct net_device* netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct rndis_wlan_private* FUNC_0 (struct usbnet*) ;
 int FUNC_1 (int ,char*) ;
 struct usbnet* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,int *,int) ;
 int FUNC_4 (struct usbnet*,int *,int *) ;
 int FUNC_5 (struct usbnet*) ;

__attribute__((used)) static int FUNC_6(struct wiphy *VAR_4,
   struct cfg80211_scan_request *VAR_5)
{
 struct net_device *VAR_6 = VAR_5->wdev->netdev;
 struct usbnet *VAR_7 = FUNC_2(VAR_6);
 struct rndis_wlan_private *VAR_8 = FUNC_0(VAR_7);
 int VAR_9;
 int VAR_10 = VAR_3;

 FUNC_1(VAR_7->net, "cfg80211.scan\n");




 FUNC_4(VAR_7, ((void*)0), ((void*)0));

 if (VAR_8->scan_request && VAR_8->scan_request != VAR_5)
  return -VAR_0;

 VAR_8->scan_request = VAR_5;

 VAR_9 = FUNC_5(VAR_7);
 if (VAR_9 == 0) {
  if (VAR_8->device_type == VAR_2)
   VAR_10 = VAR_1;


  FUNC_3(VAR_8->workqueue, &VAR_8->scan_work, VAR_10);
 }

 return VAR_9;
}
