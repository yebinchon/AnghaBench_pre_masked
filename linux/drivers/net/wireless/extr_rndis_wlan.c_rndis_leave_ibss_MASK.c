
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct usbnet {int net; } ;
struct rndis_wlan_private {int connected; int bssid; struct usbnet* usbdev; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct usbnet*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 struct rndis_wlan_private* FUNC_3 (struct wiphy*) ;

__attribute__((used)) static int FUNC_4(struct wiphy *VAR_0, struct net_device *VAR_1)
{
 struct rndis_wlan_private *VAR_2 = FUNC_3(VAR_0);
 struct usbnet *VAR_3 = VAR_2->usbdev;

 FUNC_2(VAR_3->net, "cfg80211.leave_ibss()\n");

 VAR_2->connected = 0;
 FUNC_1(VAR_2->bssid);

 return FUNC_0(VAR_3);
}
