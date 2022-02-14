
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iw_param {int flags; int value; } ;
union iwreq_data {struct iw_param param; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int rsn_enabled; int auth_alg; int key_mgmt_suite; int group_suite; int pairwise_suite; int version; } ;
struct ks_wlan_private {scalar_t__ sleep_mode; TYPE_1__ wpa; } ;
struct iw_request_info {int dummy; } ;


 int VAR_0 ;




 int VAR_1 ;





 scalar_t__ VAR_2 ;
 struct ks_wlan_private* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_3,
     struct iw_request_info *VAR_4,
     union iwreq_data *VAR_5, char *VAR_6)
{
 struct ks_wlan_private *VAR_7 = FUNC_0(VAR_3);
 struct iw_param *VAR_8 = &VAR_5->param;
 int VAR_9 = (VAR_8->flags & VAR_1);

 if (VAR_7->sleep_mode == VAR_2)
  return -VAR_0;



 switch (VAR_9) {
 case 128:
  VAR_8->value = VAR_7->wpa.version;
  break;
 case 134:
  VAR_8->value = VAR_7->wpa.pairwise_suite;
  break;
 case 135:
  VAR_8->value = VAR_7->wpa.group_suite;
  break;
 case 132:
  VAR_8->value = VAR_7->wpa.key_mgmt_suite;
  break;
 case 136:
  VAR_8->value = VAR_7->wpa.auth_alg;
  break;
 case 129:
  VAR_8->value = VAR_7->wpa.rsn_enabled;
  break;
 case 131:
 case 130:
 case 133:
 default:

  break;
 }
 return 0;
}
