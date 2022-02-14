
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct peer_capability_info {int extended_ht_caps; int interop; int station_id; scalar_t__ amsdu_enabled; int ht_rates; int legacy_rates; void* ht_caps; int ht_support; void* basic_caps; int peer_type; } ;
struct TYPE_14__ {void* length; void* code; } ;
struct mwl8k_cmd_update_stadb {TYPE_7__ header; struct peer_capability_info peer_info; int peer_addr; int action; } ;
struct TYPE_8__ {int assoc_capability; } ;
struct ieee80211_vif {TYPE_1__ bss_conf; } ;
struct TYPE_12__ {int rx_mask; } ;
struct TYPE_13__ {int cap; int ampdu_factor; int ampdu_density; TYPE_5__ mcs; int ht_supported; } ;
struct ieee80211_sta {int* supp_rates; TYPE_6__ ht_cap; int addr; } ;
struct TYPE_10__ {TYPE_2__* chan; } ;
struct TYPE_11__ {TYPE_3__ chandef; } ;
struct ieee80211_hw {TYPE_4__ conf; } ;
struct TYPE_9__ {size_t band; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mwl8k_cmd_update_stadb*) ;
 struct mwl8k_cmd_update_stadb* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (struct ieee80211_hw*,TYPE_7__*) ;

__attribute__((used)) static int FUNC_7(struct ieee80211_hw *VAR_8,
          struct ieee80211_vif *VAR_9,
          struct ieee80211_sta *VAR_10)
{
 struct mwl8k_cmd_update_stadb *VAR_11;
 struct peer_capability_info *VAR_12;
 u32 VAR_13;
 int VAR_14;

 VAR_11 = FUNC_3(sizeof(*VAR_11), VAR_2);
 if (VAR_11 == ((void*)0))
  return -VAR_0;

 VAR_11->header.code = FUNC_0(VAR_3);
 VAR_11->header.length = FUNC_0(sizeof(*VAR_11));
 VAR_11->action = FUNC_1(VAR_5);
 FUNC_5(VAR_11->peer_addr, VAR_10->addr, VAR_1);

 VAR_12 = &VAR_11->peer_info;
 VAR_12->peer_type = VAR_4;
 VAR_12->basic_caps = FUNC_0(VAR_9->bss_conf.assoc_capability);
 VAR_12->ht_support = VAR_10->ht_cap.ht_supported;
 VAR_12->ht_caps = FUNC_0(VAR_10->ht_cap.cap);
 VAR_12->extended_ht_caps = (VAR_10->ht_cap.ampdu_factor & 3) |
  ((VAR_10->ht_cap.ampdu_density & 7) << 2);
 if (VAR_8->conf.chandef.chan->band == VAR_6)
  VAR_13 = VAR_10->supp_rates[VAR_6];
 else
  VAR_13 = VAR_10->supp_rates[VAR_7] << 5;
 FUNC_4(VAR_12->legacy_rates, VAR_13);
 FUNC_5(VAR_12->ht_rates, VAR_10->ht_cap.mcs.rx_mask, 16);
 VAR_12->interop = 1;
 VAR_12->amsdu_enabled = 0;

 VAR_14 = FUNC_6(VAR_8, &VAR_11->header);
 if (!VAR_14)
  VAR_14 = VAR_12->station_id;
 FUNC_2(VAR_11);

 return VAR_14;
}
