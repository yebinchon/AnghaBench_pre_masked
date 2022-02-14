
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int scan_type; } ;
struct ks_wlan_private {scalar_t__ sleep_mode; TYPE_1__ reg; } ;
struct iw_request_info {int dummy; } ;
typedef int __u32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct ks_wlan_private* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_2,
     struct iw_request_info *VAR_3, __u32 *VAR_4,
     char *VAR_5)
{
 struct ks_wlan_private *VAR_6 = FUNC_0(VAR_2);

 if (VAR_6->sleep_mode == VAR_1)
  return -VAR_0;

 *VAR_4 = VAR_6->reg.scan_type;
 return 0;
}
