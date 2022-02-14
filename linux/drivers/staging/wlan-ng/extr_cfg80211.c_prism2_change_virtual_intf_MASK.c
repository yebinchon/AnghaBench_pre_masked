
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct wlandevice {int macmode; } ;
struct wiphy {int dummy; } ;
struct vif_params {int dummy; } ;
struct net_device {TYPE_1__* ieee80211_ptr; struct wlandevice* ml_priv; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;
struct TYPE_2__ {int iftype; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct net_device*,char*,int) ;
 int FUNC_1 (struct wlandevice*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct wiphy *VAR_5,
          struct net_device *VAR_6,
          enum nl80211_iftype VAR_7,
          struct vif_params *VAR_8)
{
 struct wlandevice *VAR_9 = VAR_6->ml_priv;
 u32 VAR_10;
 int VAR_11;
 int VAR_12 = 0;

 switch (VAR_7) {
 case 129:
  if (VAR_9->macmode == VAR_4)
   goto exit;
  VAR_9->macmode = VAR_4;
  VAR_10 = 0;
  break;
 case 128:
  if (VAR_9->macmode == VAR_3)
   goto exit;
  VAR_9->macmode = VAR_3;
  VAR_10 = 1;
  break;
 default:
  FUNC_0(VAR_6, "Operation mode: %d not support\n", VAR_7);
  return -VAR_2;
 }


 VAR_11 = FUNC_1(VAR_9,
     VAR_0,
     VAR_10);

 if (VAR_11)
  VAR_12 = -VAR_1;

 VAR_6->ieee80211_ptr->iftype = VAR_7;

exit:
 return VAR_12;
}
