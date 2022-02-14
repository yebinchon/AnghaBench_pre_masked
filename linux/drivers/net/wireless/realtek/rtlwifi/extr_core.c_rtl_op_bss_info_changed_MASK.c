
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct rtl_sta_info {void* wireless_mode; } ;
struct TYPE_10__ {scalar_t__ p2p_ps_mode; } ;
struct rtl_ps_ctl {int report_linked; TYPE_1__ p2p_ps_info; } ;
struct TYPE_18__ {int conf_mutex; } ;
struct TYPE_13__ {TYPE_3__* btc_ops; } ;
struct TYPE_11__ {scalar_t__ supp_phymode_switch; } ;
struct rtl_priv {TYPE_9__ locks; TYPE_8__* cfg; TYPE_4__ btcoexist; TYPE_2__ dm; } ;
struct rtl_mac {int beacon_enabled; scalar_t__ link_state; scalar_t__ current_ampdu_density; scalar_t__ current_ampdu_factor; int ht_enable; int vht_enable; int basic_rates; void* mode; scalar_t__ bssid; void* vendor; int max_mss_density; int slot_time; scalar_t__ short_preamble; int use_cts_protect; int assoc_id; scalar_t__ cnt_after_linked; int beacon_interval; } ;
struct rtl_hal {scalar_t__ current_bandtype; } ;
struct ieee80211_vif {int type; } ;
struct TYPE_15__ {scalar_t__ vht_supported; } ;
struct TYPE_14__ {scalar_t__ ampdu_density; scalar_t__ ampdu_factor; scalar_t__ ht_supported; } ;
struct ieee80211_sta {int* supp_rates; TYPE_6__ vht_cap; TYPE_5__ ht_cap; scalar_t__ drv_priv; } ;
struct ieee80211_hw {int wiphy; } ;
struct ieee80211_bss_conf {scalar_t__ bssid; scalar_t__ use_short_slot; scalar_t__ use_short_preamble; int use_cts_prot; int aid; scalar_t__ assoc; int beacon_int; scalar_t__ enable_beacon; } ;
struct cfg80211_bss {int dummy; } ;
struct TYPE_17__ {TYPE_7__* ops; int * maps; } ;
struct TYPE_16__ {int (* set_hw_reg ) (struct ieee80211_hw*,int ,scalar_t__*) ;scalar_t__ (* get_btc_status ) () ;int (* set_network_type ) (struct ieee80211_hw*,int ) ;int (* chk_switch_dmdp ) (struct ieee80211_hw*) ;int (* update_rate_tbl ) (struct ieee80211_hw*,struct ieee80211_sta*,int ,int) ;int (* linked_set_reg ) (struct ieee80211_hw*) ;int (* set_bcn_intv ) (struct ieee80211_hw*) ;int (* update_interrupt_mask ) (struct ieee80211_hw*,int ,int ) ;} ;
struct TYPE_12__ {int (* btc_mediastatus_notify ) (struct rtl_priv*,scalar_t__) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 scalar_t__ VAR_38 ;
 void* VAR_39 ;
 size_t VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 scalar_t__ VAR_43 ;
 scalar_t__ VAR_44 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,...) ;
 void* VAR_45 ;
 void* VAR_46 ;
 void* VAR_47 ;
 void* VAR_48 ;
 void* VAR_49 ;
 void* VAR_50 ;
 void* VAR_51 ;
 struct cfg80211_bss* FUNC_1 (int ,int *,scalar_t__*,int *,int ,int ,int ) ;
 int FUNC_2 (int ,struct cfg80211_bss*) ;
 int FUNC_3 (int ,struct cfg80211_bss*) ;
 int FUNC_4 (scalar_t__) ;
 struct ieee80211_sta* FUNC_5 (struct ieee80211_vif*,scalar_t__*) ;
 int FUNC_6 (scalar_t__,scalar_t__,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (struct ieee80211_hw*) ;
 int FUNC_12 (struct ieee80211_hw*) ;
 struct rtl_hal* FUNC_13 (struct rtl_priv*) ;
 int FUNC_14 (struct ieee80211_hw*) ;
 struct rtl_mac* FUNC_15 (struct rtl_priv*) ;
 int FUNC_16 (struct ieee80211_hw*,int ) ;
 struct rtl_priv* FUNC_17 (struct ieee80211_hw*) ;
 struct rtl_ps_ctl* FUNC_18 (struct rtl_priv*) ;
 int FUNC_19 (struct ieee80211_hw*,struct ieee80211_sta*,int ) ;
 int FUNC_20 (struct ieee80211_hw*,struct ieee80211_vif*) ;
 int FUNC_21 (struct ieee80211_hw*,int ,int ) ;
 int FUNC_22 (struct ieee80211_hw*,int ,scalar_t__*) ;
 scalar_t__ FUNC_23 () ;
 int FUNC_24 (struct rtl_priv*,scalar_t__) ;
 int FUNC_25 (struct ieee80211_hw*,int ,scalar_t__*) ;
 int FUNC_26 (struct ieee80211_hw*,int ,scalar_t__*) ;
 int FUNC_27 (struct ieee80211_hw*,int ,scalar_t__*) ;
 int FUNC_28 (struct ieee80211_hw*,int ,scalar_t__*) ;
 int FUNC_29 (struct ieee80211_hw*,int ,scalar_t__*) ;
 int FUNC_30 (struct ieee80211_hw*,int ,scalar_t__*) ;
 int FUNC_31 (struct ieee80211_hw*,int ,scalar_t__*) ;
 int FUNC_32 (struct ieee80211_hw*) ;
 int FUNC_33 (struct ieee80211_hw*,int ,int ) ;
 int FUNC_34 (struct ieee80211_hw*) ;
 int FUNC_35 (struct ieee80211_hw*) ;
 int FUNC_36 (struct ieee80211_hw*,struct ieee80211_sta*,int ,int) ;
 int FUNC_37 (struct ieee80211_hw*,int ,scalar_t__*) ;
 int FUNC_38 (struct ieee80211_hw*) ;
 int FUNC_39 (struct ieee80211_hw*,int ) ;

__attribute__((used)) static void FUNC_40(struct ieee80211_hw *VAR_52,
        struct ieee80211_vif *VAR_53,
        struct ieee80211_bss_conf *VAR_54,
        u32 VAR_55)
{
 struct rtl_priv *VAR_56 = FUNC_17(VAR_52);
 struct rtl_hal *VAR_57 = FUNC_13(VAR_56);
 struct rtl_mac *VAR_58 = FUNC_15(FUNC_17(VAR_52));
 struct rtl_ps_ctl *VAR_59 = FUNC_18(FUNC_17(VAR_52));

 FUNC_7(&VAR_56->locks.conf_mutex);
 if (VAR_53->type == VAR_33 ||
     VAR_53->type == VAR_34 ||
     VAR_53->type == VAR_35) {
  if (VAR_55 & VAR_4 ||
      (VAR_55 & VAR_5 &&
       VAR_54->enable_beacon)) {
   if (VAR_58->beacon_enabled == 0) {
    FUNC_0(VAR_56, VAR_14, VAR_15,
      "BSS_CHANGED_BEACON_ENABLED\n");



    VAR_58->beacon_enabled = 1;
    VAR_56->cfg->ops->update_interrupt_mask(VAR_52,
      VAR_56->cfg->maps
      [VAR_40], 0);

    if (VAR_56->cfg->ops->linked_set_reg)
     VAR_56->cfg->ops->linked_set_reg(VAR_52);
    FUNC_20(VAR_52, VAR_53);
   }
  }
  if ((VAR_55 & VAR_5 &&
      !VAR_54->enable_beacon)) {
   if (VAR_58->beacon_enabled == 1) {
    FUNC_0(VAR_56, VAR_14, VAR_15,
      "ADHOC DISABLE BEACON\n");

    VAR_58->beacon_enabled = 0;
    VAR_56->cfg->ops->update_interrupt_mask(VAR_52, 0,
      VAR_56->cfg->maps
      [VAR_40]);
   }
  }
  if (VAR_55 & VAR_6) {
   FUNC_0(VAR_56, VAR_12, VAR_17,
     "BSS_CHANGED_BEACON_INT\n");
   VAR_58->beacon_interval = VAR_54->beacon_int;
   VAR_56->cfg->ops->set_bcn_intv(VAR_52);
  }
 }


 if (VAR_55 & VAR_2) {
  u8 VAR_60;

  if (VAR_54->assoc) {
   struct ieee80211_sta *VAR_61 = ((void*)0);
   u8 VAR_62 = 10;

   VAR_60 = VAR_43;





   FUNC_12(VAR_52);


   FUNC_11(VAR_52);

   VAR_58->link_state = VAR_31;
   VAR_58->cnt_after_linked = 0;
   VAR_58->assoc_id = VAR_54->aid;
   FUNC_6(VAR_58->bssid, VAR_54->bssid, VAR_18);

   if (VAR_56->cfg->ops->linked_set_reg)
    VAR_56->cfg->ops->linked_set_reg(VAR_52);

   FUNC_9();
   VAR_61 = FUNC_5(VAR_53, (u8 *)VAR_54->bssid);
   if (!VAR_61) {
    FUNC_10();
    goto out;
   }
   FUNC_0(VAR_56, VAR_13, VAR_16,
     "send PS STATIC frame\n");
   if (VAR_56->dm.supp_phymode_switch) {
    if (VAR_61->ht_cap.ht_supported)
     FUNC_19(VAR_52, VAR_61,
       VAR_30);
   }

   if (VAR_57->current_bandtype == VAR_1) {
    VAR_58->mode = VAR_45;
   } else {
    if (VAR_61->supp_rates[0] <= 0xf)
     VAR_58->mode = VAR_48;
    else
     VAR_58->mode = VAR_49;
   }

   if (VAR_61->ht_cap.ht_supported) {
    if (VAR_57->current_bandtype == VAR_0)
     VAR_58->mode = VAR_50;
    else
     VAR_58->mode = VAR_51;
   }

   if (VAR_61->vht_cap.vht_supported) {
    if (VAR_57->current_bandtype == VAR_1)
     VAR_58->mode = VAR_47;
    else
     VAR_58->mode = VAR_46;
   }

   if (VAR_53->type == VAR_36)
    VAR_56->cfg->ops->update_rate_tbl(VAR_52, VAR_61, 0,
           1);
   FUNC_10();


   VAR_56->cfg->ops->set_hw_reg(VAR_52,
            VAR_25,
            (u8 *)(&VAR_62));

   FUNC_0(VAR_56, VAR_14, VAR_15,
     "BSS_CHANGED_ASSOC\n");
  } else {
   struct cfg80211_bss *VAR_63 = ((void*)0);

   VAR_60 = VAR_44;

   if (VAR_58->link_state == VAR_31)
    FUNC_14(VAR_52);
   if (VAR_59->p2p_ps_info.p2p_ps_mode > VAR_38)
    FUNC_16(VAR_52, VAR_37);
   VAR_58->link_state = VAR_32;

   VAR_63 = FUNC_1(VAR_52->wiphy, ((void*)0),
            (u8 *)VAR_58->bssid, ((void*)0), 0,
            VAR_28,
            VAR_29);

   FUNC_0(VAR_56, VAR_14, VAR_15,
     "bssid = %pMF\n", VAR_58->bssid);

   if (VAR_63) {
    FUNC_3(VAR_52->wiphy, VAR_63);
    FUNC_2(VAR_52->wiphy, VAR_63);
    FUNC_0(VAR_56, VAR_14, VAR_15,
      "cfg80211_unlink !!\n");
   }

   FUNC_4(VAR_58->bssid);
   VAR_58->vendor = VAR_39;
   VAR_58->mode = 0;

   if (VAR_56->dm.supp_phymode_switch) {
    if (VAR_56->cfg->ops->chk_switch_dmdp)
     VAR_56->cfg->ops->chk_switch_dmdp(VAR_52);
   }
   FUNC_0(VAR_56, VAR_14, VAR_15,
     "BSS_CHANGED_UN_ASSOC\n");
  }
  VAR_56->cfg->ops->set_network_type(VAR_52, VAR_53->type);



  VAR_56->cfg->ops->set_hw_reg(VAR_52,
           VAR_24,
           (u8 *)(&VAR_60));
  VAR_59->report_linked = (VAR_60 == VAR_43) ?
          1 : 0;

  if (VAR_56->cfg->ops->get_btc_status())
   VAR_56->btcoexist.btc_ops->btc_mediastatus_notify(
       VAR_56, VAR_60);
 }

 if (VAR_55 & VAR_8) {
  FUNC_0(VAR_56, VAR_14, VAR_17,
    "BSS_CHANGED_ERP_CTS_PROT\n");
  VAR_58->use_cts_protect = VAR_54->use_cts_prot;
 }

 if (VAR_55 & VAR_9) {
  FUNC_0(VAR_56, VAR_14, VAR_16,
    "BSS_CHANGED_ERP_PREAMBLE use short preamble:%x\n",
     VAR_54->use_short_preamble);

  VAR_58->short_preamble = VAR_54->use_short_preamble;
  VAR_56->cfg->ops->set_hw_reg(VAR_52, VAR_19,
           (u8 *)(&VAR_58->short_preamble));
 }

 if (VAR_55 & VAR_10) {
  FUNC_0(VAR_56, VAR_14, VAR_17,
    "BSS_CHANGED_ERP_SLOT\n");

  if (VAR_54->use_short_slot)
   VAR_58->slot_time = VAR_42;
  else
   VAR_58->slot_time = VAR_41;

  VAR_56->cfg->ops->set_hw_reg(VAR_52, VAR_27,
           (u8 *)(&VAR_58->slot_time));
 }

 if (VAR_55 & VAR_11) {
  struct ieee80211_sta *VAR_64 = ((void*)0);

  FUNC_0(VAR_56, VAR_14, VAR_17,
    "BSS_CHANGED_HT\n");

  FUNC_9();
  VAR_64 = FUNC_5(VAR_53, (u8 *)VAR_54->bssid);
  if (VAR_64) {
   if (VAR_64->ht_cap.ampdu_density >
       VAR_58->current_ampdu_density)
    VAR_58->current_ampdu_density =
        VAR_64->ht_cap.ampdu_density;
   if (VAR_64->ht_cap.ampdu_factor <
       VAR_58->current_ampdu_factor)
    VAR_58->current_ampdu_factor =
        VAR_64->ht_cap.ampdu_factor;
  }
  FUNC_10();

  VAR_56->cfg->ops->set_hw_reg(VAR_52, VAR_26,
           (u8 *)(&VAR_58->max_mss_density));
  VAR_56->cfg->ops->set_hw_reg(VAR_52, VAR_20,
           &VAR_58->current_ampdu_factor);
  VAR_56->cfg->ops->set_hw_reg(VAR_52, VAR_21,
           &VAR_58->current_ampdu_density);
 }

 if (VAR_55 & VAR_7) {
  u32 VAR_65;
  struct ieee80211_sta *VAR_66 = ((void*)0);

  VAR_56->cfg->ops->set_hw_reg(VAR_52, VAR_23,
           (u8 *)VAR_54->bssid);

  FUNC_0(VAR_56, VAR_14, VAR_15,
    "bssid: %pM\n", VAR_54->bssid);

  VAR_58->vendor = VAR_39;
  FUNC_6(VAR_58->bssid, VAR_54->bssid, VAR_18);

  FUNC_9();
  VAR_66 = FUNC_5(VAR_53, (u8 *)VAR_54->bssid);
  if (!VAR_66) {
   FUNC_10();
   goto out;
  }

  if (VAR_57->current_bandtype == VAR_1) {
   VAR_58->mode = VAR_45;
  } else {
   if (VAR_66->supp_rates[0] <= 0xf)
    VAR_58->mode = VAR_48;
   else
    VAR_58->mode = VAR_49;
  }

  if (VAR_66->ht_cap.ht_supported) {
   if (VAR_57->current_bandtype == VAR_0)
    VAR_58->mode = VAR_50;
   else
    VAR_58->mode = VAR_51;
  }

  if (VAR_66->vht_cap.vht_supported) {
   if (VAR_57->current_bandtype == VAR_1)
    VAR_58->mode = VAR_47;
   else
    VAR_58->mode = VAR_46;
  }



  if (VAR_53->type == VAR_36) {
   struct rtl_sta_info *VAR_67;

   VAR_67 = (struct rtl_sta_info *)VAR_66->drv_priv;
   VAR_67->wireless_mode = VAR_58->mode;
  }

  if (VAR_66->ht_cap.ht_supported) {
   VAR_58->ht_enable = 1;







  }

  if (VAR_66->vht_cap.vht_supported)
   VAR_58->vht_enable = 1;

  if (VAR_55 & VAR_3) {


   if (VAR_57->current_bandtype == VAR_1)
    VAR_65 = VAR_66->supp_rates[1] << 4;
   else
    VAR_65 = VAR_66->supp_rates[0];

   VAR_58->basic_rates = VAR_65;
   VAR_56->cfg->ops->set_hw_reg(VAR_52, VAR_22,
     (u8 *)(&VAR_65));
  }
  FUNC_10();
 }
out:
 FUNC_8(&VAR_56->locks.conf_mutex);
}
