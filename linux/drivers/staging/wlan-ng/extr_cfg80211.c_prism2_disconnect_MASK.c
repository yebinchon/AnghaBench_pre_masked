
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct wlandevice {int dummy; } ;
struct wiphy {int dummy; } ;
struct TYPE_3__ {int len; int data; } ;
struct TYPE_4__ {TYPE_1__ data; } ;
struct p80211msg_lnxreq_autojoin {TYPE_2__ ssid; int msgcode; } ;
struct net_device {struct wlandevice* ml_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct wlandevice*,int *) ;

__attribute__((used)) static int FUNC_2(struct wiphy *VAR_2, struct net_device *VAR_3,
        u16 VAR_4)
{
 struct wlandevice *VAR_5 = VAR_3->ml_priv;
 struct p80211msg_lnxreq_autojoin VAR_6;
 int VAR_7;
 int VAR_8 = 0;


 VAR_6.msgcode = VAR_0;

 FUNC_0(VAR_6.ssid.data.data, "---", 3);
 VAR_6.ssid.data.len = 3;

 VAR_7 = FUNC_1(VAR_5, (u8 *)&VAR_6);

 if (VAR_7)
  VAR_8 = -VAR_1;

 return VAR_8;
}
