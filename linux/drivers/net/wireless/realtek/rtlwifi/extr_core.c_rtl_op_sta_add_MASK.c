
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct rtl_sta_info {int mac_addr; void* wireless_mode; int list; } ;
struct TYPE_6__ {int entry_list_lock; } ;
struct rtl_priv {TYPE_5__* cfg; TYPE_1__ locks; int entry_list; } ;
struct rtl_mac {scalar_t__ p2p; } ;
struct rtl_hal {scalar_t__ current_bandtype; } ;
struct ieee80211_vif {scalar_t__ type; } ;
struct TYPE_8__ {scalar_t__ vht_supported; } ;
struct TYPE_7__ {scalar_t__ ht_supported; } ;
struct ieee80211_sta {int* supp_rates; int addr; TYPE_3__ vht_cap; TYPE_2__ ht_cap; scalar_t__ drv_priv; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_10__ {TYPE_4__* ops; } ;
struct TYPE_9__ {int (* update_rate_tbl ) (struct ieee80211_hw*,struct ieee80211_sta*,int ,int) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int ) ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,int ,int ) ;
 struct rtl_hal* FUNC_3 (struct rtl_priv*) ;
 struct rtl_mac* FUNC_4 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_5 (struct ieee80211_hw*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct ieee80211_hw*,struct ieee80211_sta*,int ,int) ;

__attribute__((used)) static int FUNC_9(struct ieee80211_hw *VAR_12,
    struct ieee80211_vif *VAR_13,
    struct ieee80211_sta *VAR_14)
{
 struct rtl_priv *VAR_15 = FUNC_5(VAR_12);
 struct rtl_hal *VAR_16 = FUNC_3(FUNC_5(VAR_12));
 struct rtl_mac *VAR_17 = FUNC_4(FUNC_5(VAR_12));
 struct rtl_sta_info *VAR_18;

 if (VAR_14) {
  VAR_18 = (struct rtl_sta_info *)VAR_14->drv_priv;
  FUNC_6(&VAR_15->locks.entry_list_lock);
  FUNC_1(&VAR_18->list, &VAR_15->entry_list);
  FUNC_7(&VAR_15->locks.entry_list_lock);
  if (VAR_16->current_bandtype == VAR_0) {
   VAR_18->wireless_mode = VAR_9;
   if (VAR_14->supp_rates[0] <= 0xf)
    VAR_18->wireless_mode = VAR_8;
   if (VAR_14->ht_cap.ht_supported)
    VAR_18->wireless_mode = VAR_10;

   if (VAR_13->type == VAR_5)
    VAR_18->wireless_mode = VAR_9;
  } else if (VAR_16->current_bandtype == VAR_1) {
   VAR_18->wireless_mode = VAR_6;
   if (VAR_14->ht_cap.ht_supported)
    VAR_18->wireless_mode = VAR_11;
   if (VAR_14->vht_cap.vht_supported)
    VAR_18->wireless_mode = VAR_7;

   if (VAR_13->type == VAR_5)
    VAR_18->wireless_mode = VAR_6;
  }

  if (VAR_17->p2p)
   VAR_14->supp_rates[0] &= 0xfffffff0;

  FUNC_2(VAR_18->mac_addr, VAR_14->addr, VAR_4);
  FUNC_0(VAR_15, VAR_2, VAR_3,
   "Add sta addr is %pM\n", VAR_14->addr);
  VAR_15->cfg->ops->update_rate_tbl(VAR_12, VAR_14, 0, 1);
 }

 return 0;
}
