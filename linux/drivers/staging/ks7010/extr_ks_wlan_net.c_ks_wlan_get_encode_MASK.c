
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iw_point {int flags; int length; } ;
union iwreq_data {struct iw_point encoding; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int authenticate_type; int wep_index; TYPE_1__* wep_key; scalar_t__ privacy_invoked; } ;
struct ks_wlan_private {scalar_t__ sleep_mode; TYPE_2__ reg; } ;
struct iw_request_info {int dummy; } ;
struct TYPE_3__ {int size; int val; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char*,int ,int) ;
 struct ks_wlan_private* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_6,
         struct iw_request_info *VAR_7,
         union iwreq_data *VAR_8, char *VAR_9)
{
 struct ks_wlan_private *VAR_10 = FUNC_1(VAR_6);
 struct iw_point *VAR_11 = &VAR_8->encoding;
 int VAR_12 = (VAR_11->flags & VAR_2) - 1;

 if (VAR_10->sleep_mode == VAR_5)
  return -VAR_0;


 VAR_11->flags = VAR_1;


 switch (VAR_10->reg.authenticate_type) {
 case 129:
  VAR_11->flags = VAR_3;
  break;
 case 128:
  VAR_11->flags = VAR_4;
  break;
 }


 if ((VAR_12 < 0) || (VAR_12 >= 4))
  VAR_12 = VAR_10->reg.wep_index;
 if (VAR_10->reg.privacy_invoked) {
  VAR_11->flags &= ~VAR_1;

 }
 VAR_11->flags |= VAR_12 + 1;

 if (VAR_12 >= 0 && VAR_12 < 4) {
  VAR_11->length = (VAR_10->reg.wep_key[VAR_12].size <= 16) ?
    VAR_10->reg.wep_key[VAR_12].size : 0;
  FUNC_0(VAR_9, VAR_10->reg.wep_key[VAR_12].val, VAR_11->length);
 }

 return 0;
}
