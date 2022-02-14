
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iw_param {long flags; int value; } ;
union iwreq_data {struct iw_param param; } ;
struct hermes {int dummy; } ;
struct orinoco_private {int key_mgmt; int tkip_cm_active; int wep_restrict; int wpa_enabled; int has_wpa; struct hermes hw; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;



 long VAR_6 ;


 int VAR_7 ;





 int FUNC_0 (struct hermes*,int ) ;
 int FUNC_1 (struct hermes*,int ) ;
 struct orinoco_private* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct orinoco_private*,unsigned long*) ;
 int FUNC_4 (struct orinoco_private*,unsigned long*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_8,
      struct iw_request_info *VAR_9,
      union iwreq_data *VAR_10, char *VAR_11)
{
 struct orinoco_private *VAR_12 = FUNC_2(VAR_8);
 struct hermes *VAR_13 = &VAR_12->hw;
 struct iw_param *VAR_14 = &VAR_10->param;
 unsigned long VAR_15;
 int VAR_16 = -VAR_1;

 if (FUNC_3(VAR_12, &VAR_15) != 0)
  return -VAR_0;

 switch (VAR_14->flags & VAR_6) {
 case 128:
 case 136:
 case 137:
 case 131:
 case 132:
 case 135:



  break;

 case 133:



  if (VAR_14->value == VAR_7)
   VAR_16 = -VAR_2;
  break;

 case 134:




  VAR_12->key_mgmt = VAR_14->value;
  break;

 case 130:







  if (VAR_14->value) {
   VAR_12->tkip_cm_active = 1;
   VAR_16 = FUNC_0(VAR_13, 0);
  } else {
   VAR_12->tkip_cm_active = 0;
   VAR_16 = FUNC_1(VAR_13, 0);
  }
  break;

 case 138:
  if (VAR_14->value & VAR_5)
   VAR_12->wep_restrict = 1;
  else if (VAR_14->value & VAR_4)
   VAR_12->wep_restrict = 0;
  else
   VAR_16 = -VAR_2;
  break;

 case 129:
  if (VAR_12->has_wpa) {
   VAR_12->wpa_enabled = VAR_14->value ? 1 : 0;
  } else {
   if (VAR_14->value)
    VAR_16 = -VAR_3;

   VAR_12->wpa_enabled = 0;
  }
  break;

 default:
  VAR_16 = -VAR_3;
 }

 FUNC_4(VAR_12, &VAR_15);
 return VAR_16;
}
