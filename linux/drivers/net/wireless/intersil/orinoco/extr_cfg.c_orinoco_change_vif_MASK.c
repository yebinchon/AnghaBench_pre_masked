
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct vif_params {int dummy; } ;
struct orinoco_private {int iw_mode; int broken_monitor; int has_port3; int has_ibss; } ;
struct net_device {int dummy; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int FUNC_0 (struct orinoco_private*) ;
 scalar_t__ FUNC_1 (struct orinoco_private*,unsigned long*) ;
 int FUNC_2 (struct orinoco_private*,unsigned long*) ;
 int FUNC_3 (struct orinoco_private*) ;
 struct orinoco_private* FUNC_4 (struct wiphy*) ;
 int FUNC_5 (struct wiphy*,char*) ;

__attribute__((used)) static int FUNC_6(struct wiphy *VAR_3, struct net_device *VAR_4,
         enum nl80211_iftype VAR_5,
         struct vif_params *VAR_6)
{
 struct orinoco_private *VAR_7 = FUNC_4(VAR_3);
 int VAR_8 = 0;
 unsigned long VAR_9;

 if (FUNC_1(VAR_7, &VAR_9) != 0)
  return -VAR_0;

 switch (VAR_5) {
 case 130:
  if (!VAR_7->has_ibss && !VAR_7->has_port3)
   VAR_8 = -VAR_1;
  break;

 case 128:
  break;

 case 129:
  if (VAR_7->broken_monitor && !VAR_2) {
   FUNC_5(VAR_3,
       "Monitor mode support is buggy in this firmware, not enabling\n");
   VAR_8 = -VAR_1;
  }
  break;

 default:
  VAR_8 = -VAR_1;
 }

 if (!VAR_8) {
  VAR_7->iw_mode = VAR_5;
  FUNC_3(VAR_7);
  VAR_8 = FUNC_0(VAR_7);
 }

 FUNC_2(VAR_7, &VAR_9);

 return VAR_8;
}
