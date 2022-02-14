
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int tx_gain; int tx_mode; } ;
struct ks_wlan_private {scalar_t__ sleep_mode; TYPE_1__ gain; } ;
struct iw_request_info {int dummy; } ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ks_wlan_private*,int ) ;
 struct ks_wlan_private* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_4,
          struct iw_request_info *VAR_5, __u32 *VAR_6,
          char *VAR_7)
{
 struct ks_wlan_private *VAR_8 = FUNC_1(VAR_4);

 if (VAR_8->sleep_mode == VAR_2)
  return -VAR_1;

 if (*VAR_6 > 0xFF)
  return -VAR_0;

 VAR_8->gain.tx_gain = (u8)*VAR_6;
 VAR_8->gain.tx_mode = (VAR_8->gain.tx_gain < 0xFF) ? 1 : 0;
 FUNC_0(VAR_8, VAR_3);
 return 0;
}
