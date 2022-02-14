
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wiphy {int dummy; } ;
struct vif_params {int dummy; } ;
struct usbnet {int dummy; } ;
struct TYPE_2__ {int iftype; } ;
struct rndis_wlan_private {TYPE_1__ wdev; struct usbnet* usbdev; } ;
struct net_device {int dummy; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (struct usbnet*,int) ;
 struct rndis_wlan_private* FUNC_1 (struct wiphy*) ;

__attribute__((used)) static int FUNC_2(struct wiphy *VAR_3,
     struct net_device *VAR_4,
     enum nl80211_iftype VAR_5,
     struct vif_params *VAR_6)
{
 struct rndis_wlan_private *VAR_7 = FUNC_1(VAR_3);
 struct usbnet *VAR_8 = VAR_7->usbdev;
 int VAR_9;

 switch (VAR_5) {
 case 129:
  VAR_9 = VAR_1;
  break;
 case 128:
  VAR_9 = VAR_2;
  break;
 default:
  return -VAR_0;
 }

 VAR_7->wdev.iftype = VAR_5;

 return FUNC_0(VAR_8, VAR_9);
}
