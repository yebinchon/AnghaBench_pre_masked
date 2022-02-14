
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ieee80211_vif {scalar_t__ type; } ;
struct ath10k {TYPE_2__* hw; } ;
struct TYPE_3__ {int listen_interval; } ;
struct TYPE_4__ {TYPE_1__ conf; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static u32 FUNC_0(struct ath10k *VAR_1,
          struct ieee80211_vif *VAR_2)
{
 if (VAR_2->type == VAR_0)
  return 1;

 return VAR_1->hw->conf.listen_interval;
}
