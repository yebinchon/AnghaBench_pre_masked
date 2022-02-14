
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ disabled; } ;
union iwreq_data {TYPE_1__ power; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {scalar_t__ operation_mode; int power_mgmt; } ;
struct ks_wlan_private {scalar_t__ sleep_mode; TYPE_2__ reg; } ;
struct iw_request_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ks_wlan_private*,int ) ;
 struct ks_wlan_private* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_7,
        struct iw_request_info *VAR_8,
        union iwreq_data *VAR_9, char *VAR_10)
{
 struct ks_wlan_private *VAR_11 = FUNC_1(VAR_7);

 if (VAR_11->sleep_mode == VAR_5)
  return -VAR_1;

 if (VAR_9->power.disabled) {
  VAR_11->reg.power_mgmt = VAR_3;
 } else {
  if (VAR_11->reg.operation_mode != VAR_2)
   return -VAR_0;
  VAR_11->reg.power_mgmt = VAR_4;
 }

 FUNC_0(VAR_11, VAR_6);

 return 0;
}
