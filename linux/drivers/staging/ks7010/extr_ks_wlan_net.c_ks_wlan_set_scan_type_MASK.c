
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ scan_type; } ;
struct ks_wlan_private {scalar_t__ sleep_mode; TYPE_1__ reg; } ;
struct iw_request_info {int dummy; } ;
typedef scalar_t__ __u32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct ks_wlan_private* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_5,
     struct iw_request_info *VAR_6, __u32 *VAR_7,
     char *VAR_8)
{
 struct ks_wlan_private *VAR_9 = FUNC_0(VAR_5);

 if (VAR_9->sleep_mode == VAR_4)
  return -VAR_2;


 if (*VAR_7 != VAR_0 && *VAR_7 != VAR_3)
  return -VAR_1;

 VAR_9->reg.scan_type = *VAR_7;
 return 0;
}
