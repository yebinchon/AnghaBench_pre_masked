
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rt2x00_dev {TYPE_1__* ops; scalar_t__ intf_sta_count; } ;
struct ieee80211_vif {int* addr; } ;
struct TYPE_2__ {int max_ap_intf; } ;



u32 FUNC_0(struct rt2x00_dev *VAR_0,
    struct ieee80211_vif *VAR_1)
{




 if (VAR_0->intf_sta_count)
  return 0;
 return VAR_1->addr[5] & (VAR_0->ops->max_ap_intf - 1);
}
