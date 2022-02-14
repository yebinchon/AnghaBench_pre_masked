
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iw_param {int flags; int value; } ;
union iwreq_data {struct iw_param param; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int privacy_invoked; int authenticate_type; } ;
struct TYPE_3__ {int version; int rsn_enabled; int pairwise_suite; int group_suite; int key_mgmt_suite; int auth_alg; int wpa_enabled; } ;
struct ks_wlan_private {scalar_t__ sleep_mode; scalar_t__ need_commit; TYPE_2__ reg; TYPE_1__ wpa; } ;
struct iw_request_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (struct ks_wlan_private*,scalar_t__) ;
 struct ks_wlan_private* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_12,
     struct iw_request_info *VAR_13,
     union iwreq_data *VAR_14, char *VAR_15)
{
 struct ks_wlan_private *VAR_16 = FUNC_1(VAR_12);
 struct iw_param *VAR_17 = &VAR_14->param;
 int VAR_18 = (VAR_17->flags & VAR_4);
 int VAR_19 = VAR_17->value;

 if (VAR_16->sleep_mode == VAR_5)
  return -VAR_3;

 switch (VAR_18) {
 case 131:
  switch (VAR_19) {
  case 130:
   VAR_16->wpa.version = VAR_19;
   if (VAR_16->wpa.rsn_enabled)
    VAR_16->wpa.rsn_enabled = 0;
   VAR_16->need_commit |= VAR_7;
   break;
  case 129:
  case 128:
   VAR_16->wpa.version = VAR_19;
   if (!(VAR_16->wpa.rsn_enabled))
    VAR_16->wpa.rsn_enabled = 1;
   VAR_16->need_commit |= VAR_7;
   break;
  default:
   return -VAR_2;
  }
  break;
 case 144:
  switch (VAR_19) {
  case 145:
   if (VAR_16->reg.privacy_invoked) {
    VAR_16->reg.privacy_invoked = 0x00;
    VAR_16->need_commit |= VAR_11;
   }
   break;
  case 141:
  case 143:
  case 147:
  case 142:
   if (!VAR_16->reg.privacy_invoked) {
    VAR_16->reg.privacy_invoked = 0x01;
    VAR_16->need_commit |= VAR_11;
   }
   VAR_16->wpa.pairwise_suite = VAR_19;
   VAR_16->need_commit |= VAR_10;
   break;
  default:
   return -VAR_2;
  }
  break;
 case 146:
  switch (VAR_19) {
  case 145:
   if (VAR_16->reg.privacy_invoked) {
    VAR_16->reg.privacy_invoked = 0x00;
    VAR_16->need_commit |= VAR_11;
   }
   break;
  case 141:
  case 143:
  case 147:
  case 142:
   if (!VAR_16->reg.privacy_invoked) {
    VAR_16->reg.privacy_invoked = 0x01;
    VAR_16->need_commit |= VAR_11;
   }
   VAR_16->wpa.group_suite = VAR_19;
   VAR_16->need_commit |= VAR_9;
   break;
  default:
   return -VAR_2;
  }
  break;
 case 139:
  switch (VAR_19) {
  case 138:
  case 137:
  case 0:
  case 4:
   VAR_16->wpa.key_mgmt_suite = VAR_19;
   VAR_16->need_commit |= VAR_8;
   break;
  default:
   return -VAR_2;
  }
  break;
 case 151:
  switch (VAR_19) {
  case 149:
   VAR_16->wpa.auth_alg = VAR_19;
   VAR_16->reg.authenticate_type = VAR_0;
   break;
  case 148:
   VAR_16->wpa.auth_alg = VAR_19;
   VAR_16->reg.authenticate_type = VAR_1;
   break;
  case 150:
  default:
   return -VAR_2;
  }
  VAR_16->need_commit |= VAR_6;
  break;
 case 132:
  VAR_16->wpa.wpa_enabled = VAR_19;
  break;
 case 136:
  if ((VAR_19 && !VAR_16->reg.privacy_invoked) ||
      (!VAR_19 && VAR_16->reg.privacy_invoked)) {
   VAR_16->reg.privacy_invoked = VAR_19 ? 0x01 : 0x00;
   VAR_16->need_commit |= VAR_11;
  }
  break;
 case 134:
 case 133:
 case 140:
 case 135:
 default:
  break;
 }


 if (VAR_16->need_commit) {
  FUNC_0(VAR_16, VAR_16->need_commit);
  VAR_16->need_commit = 0;
 }
 return 0;
}
