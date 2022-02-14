
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wiphy {int dummy; } ;
struct vif_params {int dummy; } ;
struct net_device {int dummy; } ;
struct lbs_private {TYPE_1__* wdev; scalar_t__ iface_running; struct net_device* mesh_dev; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;
struct TYPE_2__ {int iftype; } ;


 int VAR_0 ;



 int FUNC_0 (struct lbs_private*,int) ;
 struct lbs_private* FUNC_1 (struct wiphy*) ;

__attribute__((used)) static int FUNC_2(struct wiphy *VAR_1, struct net_device *VAR_2,
 enum nl80211_iftype VAR_3,
        struct vif_params *VAR_4)
{
 struct lbs_private *VAR_5 = FUNC_1(VAR_1);
 int VAR_6 = 0;

 if (VAR_2 == VAR_5->mesh_dev)
  return -VAR_0;

 switch (VAR_3) {
 case 129:
 case 128:
 case 130:
  break;
 default:
  return -VAR_0;
 }

 if (VAR_5->iface_running)
  VAR_6 = FUNC_0(VAR_5, VAR_3);

 if (!VAR_6)
  VAR_5->wdev->iftype = VAR_3;

 return VAR_6;
}
