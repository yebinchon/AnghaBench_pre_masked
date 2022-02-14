
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ phy_type; scalar_t__ cts_mode; } ;
struct ks_wlan_private {scalar_t__ sleep_mode; int need_commit; TYPE_1__ reg; } ;
struct iw_request_info {int dummy; } ;
typedef scalar_t__ __u32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 struct ks_wlan_private* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_9,
    struct iw_request_info *VAR_10, __u32 *VAR_11,
    char *VAR_12)
{
 struct ks_wlan_private *VAR_13 = FUNC_0(VAR_9);

 if (VAR_13->sleep_mode == VAR_7)
  return -VAR_6;

 if (*VAR_11 != VAR_0 && *VAR_11 != VAR_1)
  return -VAR_5;

 VAR_13->reg.cts_mode = (*VAR_11 == VAR_0) ? *VAR_11 :
         (VAR_13->reg.phy_type == VAR_3 ||
          VAR_13->reg.phy_type == VAR_2) ?
          *VAR_11 : !*VAR_11;

 VAR_13->need_commit |= VAR_8;
 return -VAR_4;
}
