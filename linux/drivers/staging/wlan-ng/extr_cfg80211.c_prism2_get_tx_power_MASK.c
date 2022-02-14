
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wlandevice {int dummy; } ;
struct wireless_dev {int dummy; } ;
struct wiphy {int dummy; } ;
struct prism2_wiphy_private {struct wlandevice* wlandev; } ;
struct TYPE_2__ {int data; } ;
struct p80211msg_dot11req_mibget {int msgcode; TYPE_1__ mibattribute; } ;
struct p80211item_uint32 {int data; int did; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct wlandevice*,int *) ;
 struct prism2_wiphy_private* FUNC_1 (struct wiphy*) ;

__attribute__((used)) static int FUNC_2(struct wiphy *VAR_3, struct wireless_dev *VAR_4,
          int *VAR_5)
{
 struct prism2_wiphy_private *VAR_6 = FUNC_1(VAR_3);
 struct wlandevice *VAR_7 = VAR_6->wlandev;
 struct p80211msg_dot11req_mibget VAR_8;
 struct p80211item_uint32 *VAR_9;
 int VAR_10;
 int VAR_11 = 0;

 VAR_9 = (struct p80211item_uint32 *)&VAR_8.mibattribute.data;
 VAR_8.msgcode = VAR_1;
 VAR_9->did = VAR_0;

 VAR_10 = FUNC_0(VAR_7, (u8 *)&VAR_8);

 if (VAR_10) {
  VAR_11 = -VAR_2;
  goto exit;
 }

 *VAR_5 = VAR_9->data;

exit:
 return VAR_11;
}
