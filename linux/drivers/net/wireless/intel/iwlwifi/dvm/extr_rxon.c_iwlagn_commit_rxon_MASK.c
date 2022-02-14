
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int filter_flags; int flags; scalar_t__ channel; int bssid_addr; } ;
struct iwl_rxon_context {TYPE_4__ staging; int ctxid; TYPE_3__* vif; int is_active; int active; } ;
struct iwl_rxon_cmd {int dummy; } ;
struct TYPE_6__ {int use_rts_for_aggregation; } ;
struct iwl_priv {scalar_t__ switch_channel; int tx_power_next; int status; TYPE_1__ hw_params; int mutex; } ;
struct TYPE_10__ {int swcrypto; } ;
struct TYPE_7__ {scalar_t__ use_short_slot; } ;
struct TYPE_8__ {TYPE_2__ bss_conf; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct iwl_priv*,char*,int ) ;
 int FUNC_2 (struct iwl_priv*,char*,char*,int ,int ) ;
 int FUNC_3 (struct iwl_priv*,char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (struct iwl_priv*,struct iwl_rxon_context*) ;
 int FUNC_5 (struct iwl_priv*,struct iwl_rxon_context*) ;
 int FUNC_6 (struct iwl_priv*,int) ;
 int FUNC_7 (struct iwl_priv*,struct iwl_rxon_context*) ;
 int FUNC_8 (struct iwl_priv*) ;
 int FUNC_9 (struct iwl_priv*,int) ;
 int FUNC_10 (struct iwl_priv*,int ) ;
 int FUNC_11 (struct iwl_priv*,struct iwl_rxon_context*,int) ;
 int FUNC_12 (struct iwl_priv*,int ,int) ;
 int FUNC_13 (struct iwl_priv*,struct iwl_rxon_context*) ;
 int FUNC_14 (struct iwl_priv*,struct iwl_rxon_context*) ;
 int FUNC_15 (struct iwl_priv*,struct iwl_rxon_context*) ;
 int FUNC_16 (struct iwl_priv*) ;
 TYPE_5__ VAR_9 ;
 int FUNC_17 (scalar_t__) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (struct iwl_rxon_cmd*,TYPE_4__*,int) ;
 scalar_t__ FUNC_20 (int ,int *) ;

int FUNC_21(struct iwl_priv *VAR_10, struct iwl_rxon_context *VAR_11)
{

 struct iwl_rxon_cmd *VAR_12 = (void *)&VAR_11->active;
 bool VAR_13 = !!(VAR_11->staging.filter_flags & VAR_3);
 int VAR_14;

 FUNC_18(&VAR_10->mutex);

 if (!FUNC_8(VAR_10))
  return -VAR_0;


 FUNC_0(VAR_2 != 2);

 if (!VAR_11->is_active)
  return 0;


 VAR_11->staging.flags |= VAR_7;


 FUNC_4(VAR_10, VAR_11);





 if (!VAR_10->hw_params.use_rts_for_aggregation)
  VAR_11->staging.flags |= VAR_5;

 if ((VAR_11->vif && VAR_11->vif->bss_conf.use_short_slot) ||
     !(VAR_11->staging.flags & VAR_4))
  VAR_11->staging.flags |= VAR_6;
 else
  VAR_11->staging.flags &= ~VAR_6;

 FUNC_10(VAR_10, VAR_11->ctxid);
 VAR_14 = FUNC_5(VAR_10, VAR_11);
 if (VAR_14) {
  FUNC_3(VAR_10, "Invalid RXON configuration. Not committing.\n");
  return -VAR_1;
 }





 if (FUNC_20(VAR_8, &VAR_10->status) &&
     (VAR_10->switch_channel != VAR_11->staging.channel)) {
  FUNC_1(VAR_10, "abort channel switch on %d\n",
         FUNC_17(VAR_10->switch_channel));
  FUNC_6(VAR_10, 0);
 }






 if (!FUNC_7(VAR_10, VAR_11)) {
  VAR_14 = FUNC_15(VAR_10, VAR_11);
  if (VAR_14) {
   FUNC_3(VAR_10, "Error setting RXON_ASSOC (%d)\n", VAR_14);
   return VAR_14;
  }

  FUNC_19(VAR_12, &VAR_11->staging, sizeof(*VAR_12));




  FUNC_12(VAR_10, VAR_10->tx_power_next, 0);


  FUNC_9(VAR_10, 1);

  return 0;
 }

 FUNC_11(VAR_10, VAR_11, !VAR_9.swcrypto);

 FUNC_2(VAR_10,
         "Going to commit RXON\n"
         "  * with%s RXON_FILTER_ASSOC_MSK\n"
         "  * channel = %d\n"
         "  * bssid = %pM\n",
         (VAR_13 ? "" : "out"),
         FUNC_17(VAR_11->staging.channel),
         VAR_11->staging.bssid_addr);







 VAR_14 = FUNC_14(VAR_10, VAR_11);
 if (VAR_14)
  return VAR_14;

 VAR_14 = FUNC_16(VAR_10);
 if (VAR_14)
  return VAR_14;

 if (VAR_13)
  return FUNC_13(VAR_10, VAR_11);

 return 0;
}
