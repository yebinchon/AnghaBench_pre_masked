
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ phy_type; } ;
struct ks_wlan_private {scalar_t__ sleep_mode; int need_commit; TYPE_1__ reg; } ;
struct iw_request_info {int dummy; } ;
typedef scalar_t__ __u32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 struct ks_wlan_private* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_8,
    struct iw_request_info *VAR_9, __u32 *VAR_10,
    char *VAR_11)
{
 struct ks_wlan_private *VAR_12 = FUNC_0(VAR_8);

 if (VAR_12->sleep_mode == VAR_6)
  return -VAR_5;

 if (*VAR_10 != VAR_1 &&
     *VAR_10 != VAR_2 &&
     *VAR_10 != VAR_0)
  return -VAR_4;


 VAR_12->reg.phy_type = *VAR_10;
 VAR_12->need_commit |= VAR_7;
 return -VAR_3;
}
