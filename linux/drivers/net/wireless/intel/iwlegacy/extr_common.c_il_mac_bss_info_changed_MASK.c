
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct il_rxon_cmd {int dummy; } ;
struct TYPE_10__ {void* bssid_addr; int flags; } ;
struct TYPE_7__ {int qos_active; } ;
struct il_priv {int beacon_enabled; void* bssid; scalar_t__ band; int mutex; TYPE_3__* ops; TYPE_4__ staging; int active; int timestamp; int lock; TYPE_1__ qos_data; } ;
struct TYPE_8__ {scalar_t__ enable_beacon; } ;
struct ieee80211_vif {scalar_t__ type; TYPE_2__ bss_conf; } ;
struct ieee80211_hw {struct il_priv* priv; } ;
struct ieee80211_bss_conf {TYPE_4__* bssid; int ibss_joined; scalar_t__ aid; int sync_tsf; scalar_t__ assoc; scalar_t__ use_cts_prot; scalar_t__ use_short_preamble; int qos; } ;
struct TYPE_9__ {int (* manage_ibss_station ) (struct il_priv*,struct ieee80211_vif*,int ) ;int (* config_ap ) (struct il_priv*) ;int (* post_associate ) (struct il_priv*) ;int (* set_rxon_chain ) (struct il_priv*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (char*,...) ;
 int VAR_10 ;
 int FUNC_1 (char*,char*,TYPE_4__*) ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (struct ieee80211_hw*,struct ieee80211_vif*) ;
 int FUNC_3 (struct il_priv*,struct ieee80211_vif*) ;
 int FUNC_4 (struct il_priv*) ;
 scalar_t__ FUNC_5 (struct il_priv*) ;
 int FUNC_6 (struct il_priv*) ;
 scalar_t__ FUNC_7 (struct il_priv*,int) ;
 int FUNC_8 (struct il_priv*) ;
 int FUNC_9 (struct il_priv*,struct ieee80211_vif*) ;
 int FUNC_10 (struct il_priv*) ;
 int FUNC_11 (struct il_priv*,int ) ;
 scalar_t__ FUNC_12 (TYPE_4__*) ;
 int FUNC_13 (void*,TYPE_4__*,int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,unsigned long) ;
 int FUNC_17 (int *,unsigned long) ;
 int FUNC_18 (struct il_priv*) ;
 int FUNC_19 (struct il_priv*) ;
 int FUNC_20 (struct il_priv*) ;
 int FUNC_21 (struct il_priv*,struct ieee80211_vif*,int ) ;

void
FUNC_22(struct ieee80211_hw *VAR_17, struct ieee80211_vif *VAR_18,
   struct ieee80211_bss_conf *VAR_19, u32 VAR_20)
{
 struct il_priv *VAR_21 = VAR_17->priv;
 int VAR_22;

 FUNC_14(&VAR_21->mutex);
 FUNC_0("enter: changes 0x%x\n", VAR_20);

 if (!FUNC_4(VAR_21)) {
  FUNC_0("leave - not alive\n");
  FUNC_15(&VAR_21->mutex);
  return;
 }

 if (VAR_20 & VAR_9) {
  unsigned long VAR_23;

  FUNC_16(&VAR_21->lock, VAR_23);
  VAR_21->qos_data.qos_active = VAR_19->qos;
  FUNC_10(VAR_21);
  FUNC_17(&VAR_21->lock, VAR_23);
 }

 if (VAR_20 & VAR_3) {

  if (VAR_18->bss_conf.enable_beacon)
   VAR_21->beacon_enabled = 1;
  else
   VAR_21->beacon_enabled = 0;
 }

 if (VAR_20 & VAR_4) {
  FUNC_0("BSSID %pM\n", VAR_19->bssid);
  if (FUNC_12(VAR_19->bssid))
   FUNC_11(VAR_21, VAR_11);






  if (FUNC_7(VAR_21, 100)) {
   FUNC_0("leave - scan abort failed\n");
   FUNC_15(&VAR_21->mutex);
   return;
  }


  FUNC_13(VAR_21->staging.bssid_addr, VAR_19->bssid, VAR_10);


  FUNC_13(VAR_21->bssid, VAR_19->bssid, VAR_10);
 }






 if (VAR_18->type == VAR_13 && (VAR_20 & VAR_2))
  FUNC_2(VAR_17, VAR_18);

 if (VAR_20 & VAR_6) {
  FUNC_0("ERP_PREAMBLE %d\n", VAR_19->use_short_preamble);
  if (VAR_19->use_short_preamble)
   VAR_21->staging.flags |= VAR_15;
  else
   VAR_21->staging.flags &= ~VAR_15;
 }

 if (VAR_20 & VAR_5) {
  FUNC_0("ERP_CTS %d\n", VAR_19->use_cts_prot);
  if (VAR_19->use_cts_prot && VAR_21->band != VAR_12)
   VAR_21->staging.flags |= VAR_16;
  else
   VAR_21->staging.flags &= ~VAR_16;
  if (VAR_19->use_cts_prot)
   VAR_21->staging.flags |= VAR_14;
  else
   VAR_21->staging.flags &= ~VAR_14;
 }

 if (VAR_20 & VAR_1) {
 }

 if (VAR_20 & VAR_7) {
  FUNC_3(VAR_21, VAR_18);

  if (VAR_21->ops->set_rxon_chain)
   VAR_21->ops->set_rxon_chain(VAR_21);
 }

 if (VAR_20 & VAR_0) {
  FUNC_0("ASSOC %d\n", VAR_19->assoc);
  if (VAR_19->assoc) {
   VAR_21->timestamp = VAR_19->sync_tsf;

   if (!FUNC_6(VAR_21))
    VAR_21->ops->post_associate(VAR_21);
  } else
   FUNC_9(VAR_21, VAR_18);
 }

 if (VAR_20 && FUNC_5(VAR_21) && VAR_19->aid) {
  FUNC_0("Changes (%#x) while associated\n", VAR_20);
  VAR_22 = FUNC_8(VAR_21);
  if (!VAR_22) {

   FUNC_13((void *)&VAR_21->active, &VAR_21->staging,
          sizeof(struct il_rxon_cmd));
  }
 }

 if (VAR_20 & VAR_3) {
  if (VAR_18->bss_conf.enable_beacon) {
   FUNC_13(VAR_21->staging.bssid_addr, VAR_19->bssid,
          VAR_10);
   FUNC_13(VAR_21->bssid, VAR_19->bssid, VAR_10);
   VAR_21->ops->config_ap(VAR_21);
  } else
   FUNC_9(VAR_21, VAR_18);
 }

 if (VAR_20 & VAR_8) {
  VAR_22 = VAR_21->ops->manage_ibss_station(VAR_21, VAR_18,
         VAR_19->ibss_joined);
  if (VAR_22)
   FUNC_1("failed to %s IBSS station %pM\n",
          VAR_19->ibss_joined ? "add" : "remove",
          VAR_19->bssid);
 }

 FUNC_0("leave\n");
 FUNC_15(&VAR_21->mutex);
}
