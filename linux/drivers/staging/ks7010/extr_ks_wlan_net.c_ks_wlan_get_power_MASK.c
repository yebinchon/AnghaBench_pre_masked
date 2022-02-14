
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int disabled; } ;
union iwreq_data {TYPE_1__ power; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {scalar_t__ power_mgmt; } ;
struct ks_wlan_private {scalar_t__ sleep_mode; TYPE_2__ reg; } ;
struct iw_request_info {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct ks_wlan_private* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_2,
        struct iw_request_info *VAR_3,
        union iwreq_data *VAR_4, char *VAR_5)
{
 struct ks_wlan_private *VAR_6 = FUNC_0(VAR_2);

 if (VAR_6->sleep_mode == VAR_1)
  return -VAR_0;

 VAR_4->power.disabled = (VAR_6->reg.power_mgmt <= 0);

 return 0;
}
