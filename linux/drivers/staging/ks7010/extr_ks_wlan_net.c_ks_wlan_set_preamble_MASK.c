
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ preamble; } ;
struct ks_wlan_private {scalar_t__ sleep_mode; int need_commit; TYPE_1__ reg; } ;
struct iw_request_info {int dummy; } ;
typedef scalar_t__ __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 struct ks_wlan_private* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_7,
    struct iw_request_info *VAR_8, __u32 *VAR_9,
    char *VAR_10)
{
 struct ks_wlan_private *VAR_11 = FUNC_0(VAR_7);

 if (VAR_11->sleep_mode == VAR_5)
  return -VAR_2;


 if (*VAR_9 != VAR_3 && *VAR_9 != VAR_4)
  return -VAR_1;

 VAR_11->reg.preamble = *VAR_9;
 VAR_11->need_commit |= VAR_6;
 return -VAR_0;
}
