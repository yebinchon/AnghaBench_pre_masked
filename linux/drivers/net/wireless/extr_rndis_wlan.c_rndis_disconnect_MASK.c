
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wiphy {int dummy; } ;
struct usbnet {int net; } ;
struct rndis_wlan_private {int connected; int bssid; struct usbnet* usbdev; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct usbnet*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ) ;
 struct rndis_wlan_private* FUNC_3 (struct wiphy*) ;

__attribute__((used)) static int FUNC_4(struct wiphy *VAR_0, struct net_device *VAR_1,
        u16 VAR_2)
{
 struct rndis_wlan_private *VAR_3 = FUNC_3(VAR_0);
 struct usbnet *VAR_4 = VAR_3->usbdev;

 FUNC_2(VAR_4->net, "cfg80211.disconnect(%d)\n", VAR_2);

 VAR_3->connected = 0;
 FUNC_1(VAR_3->bssid);

 return FUNC_0(VAR_4);
}
