
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int tx_gain; } ;
struct ks_wlan_private {scalar_t__ sleep_mode; TYPE_1__ gain; } ;
struct iw_request_info {int dummy; } ;
typedef int __u32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ks_wlan_private*,int ) ;
 struct ks_wlan_private* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_3,
          struct iw_request_info *VAR_4, __u32 *VAR_5,
          char *VAR_6)
{
 struct ks_wlan_private *VAR_7 = FUNC_1(VAR_3);

 if (VAR_7->sleep_mode == VAR_1)
  return -VAR_0;

 *VAR_5 = VAR_7->gain.tx_gain;
 FUNC_0(VAR_7, VAR_2);
 return 0;
}
