
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_12__ {void* length; void* code; } ;
struct mwl8k_cmd_set_new_stn {int mac_ht_param_info; int is_qos_sta; TYPE_6__ header; void* ht_capabilities_info; int * ht_rates; int legacy_rates; void* action; void* stn_id; int mac_addr; void* aid; } ;
struct ieee80211_vif {int dummy; } ;
struct TYPE_10__ {int * rx_mask; } ;
struct TYPE_11__ {int cap; int ampdu_factor; int ampdu_density; TYPE_4__ mcs; scalar_t__ ht_supported; } ;
struct ieee80211_sta {int aid; int* supp_rates; TYPE_5__ ht_cap; int addr; } ;
struct TYPE_8__ {TYPE_1__* chan; } ;
struct TYPE_9__ {TYPE_2__ chandef; } ;
struct ieee80211_hw {TYPE_3__ conf; } ;
struct TYPE_7__ {size_t band; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct mwl8k_cmd_set_new_stn*) ;
 struct mwl8k_cmd_set_new_stn* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct ieee80211_hw*,struct ieee80211_vif*,TYPE_6__*) ;

__attribute__((used)) static int FUNC_6(struct ieee80211_hw *VAR_7,
         struct ieee80211_vif *VAR_8,
         struct ieee80211_sta *VAR_9)
{
 struct mwl8k_cmd_set_new_stn *VAR_10;
 u32 VAR_11;
 int VAR_12;

 VAR_10 = FUNC_3(sizeof(*VAR_10), VAR_2);
 if (VAR_10 == ((void*)0))
  return -VAR_0;

 VAR_10->header.code = FUNC_0(VAR_3);
 VAR_10->header.length = FUNC_0(sizeof(*VAR_10));
 VAR_10->aid = FUNC_0(VAR_9->aid);
 FUNC_4(VAR_10->mac_addr, VAR_9->addr, VAR_1);
 VAR_10->stn_id = FUNC_0(VAR_9->aid);
 VAR_10->action = FUNC_0(VAR_4);
 if (VAR_7->conf.chandef.chan->band == VAR_5)
  VAR_11 = VAR_9->supp_rates[VAR_5];
 else
  VAR_11 = VAR_9->supp_rates[VAR_6] << 5;
 VAR_10->legacy_rates = FUNC_1(VAR_11);
 if (VAR_9->ht_cap.ht_supported) {
  VAR_10->ht_rates[0] = VAR_9->ht_cap.mcs.rx_mask[0];
  VAR_10->ht_rates[1] = VAR_9->ht_cap.mcs.rx_mask[1];
  VAR_10->ht_rates[2] = VAR_9->ht_cap.mcs.rx_mask[2];
  VAR_10->ht_rates[3] = VAR_9->ht_cap.mcs.rx_mask[3];
  VAR_10->ht_capabilities_info = FUNC_0(VAR_9->ht_cap.cap);
  VAR_10->mac_ht_param_info = (VAR_9->ht_cap.ampdu_factor & 3) |
   ((VAR_9->ht_cap.ampdu_density & 7) << 2);
  VAR_10->is_qos_sta = 1;
 }

 VAR_12 = FUNC_5(VAR_7, VAR_8, &VAR_10->header);
 FUNC_2(VAR_10);

 return VAR_12;
}
