
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ operation_mode; scalar_t__ power_mgmt; } ;
struct ks_wlan_private {scalar_t__ sleep_mode; TYPE_1__ reg; } ;
struct iw_request_info {int dummy; } ;
typedef scalar_t__ __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ks_wlan_private*,int ) ;
 struct ks_wlan_private* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_8,
      struct iw_request_info *VAR_9, __u32 *VAR_10,
      char *VAR_11)
{
 struct ks_wlan_private *VAR_12 = FUNC_1(VAR_8);

 if (VAR_12->sleep_mode == VAR_6)
  return -VAR_1;

 if (*VAR_10 != VAR_3 &&
     *VAR_10 != VAR_4 &&
     *VAR_10 != VAR_5)
  return -VAR_0;

 if ((*VAR_10 == VAR_4 || *VAR_10 == VAR_5) &&
     (VAR_12->reg.operation_mode != VAR_2))
  return -VAR_0;

 VAR_12->reg.power_mgmt = *VAR_10;
 FUNC_0(VAR_12, VAR_7);

 return 0;
}
