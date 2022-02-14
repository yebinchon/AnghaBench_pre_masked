
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int flags; int filter_flags; scalar_t__ assoc_id; } ;
struct TYPE_7__ {int valid_rx_ant; } ;
struct TYPE_6__ {int active_chains; } ;
struct il_priv {TYPE_5__ staging; TYPE_3__* ops; int current_ht_config; TYPE_2__ hw_params; TYPE_1__ chain_noise_data; int status; int mutex; struct ieee80211_vif* vif; } ;
struct TYPE_9__ {scalar_t__ use_short_slot; scalar_t__ use_short_preamble; } ;
struct ieee80211_vif {TYPE_4__ bss_conf; } ;
struct TYPE_8__ {int (* set_rxon_chain ) (struct il_priv*) ;} ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct il_priv*) ;
 int FUNC_2 (struct il_priv*) ;
 int FUNC_3 (struct il_priv*) ;
 int FUNC_4 (struct il_priv*) ;
 int FUNC_5 (struct il_priv*,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct il_priv*) ;
 scalar_t__ FUNC_8 (int ,int *) ;

__attribute__((used)) static void
FUNC_9(struct il_priv *VAR_5)
{
 struct ieee80211_vif *VAR_6 = VAR_5->vif;
 int VAR_7 = 0;

 FUNC_6(&VAR_5->mutex);

 if (FUNC_8(VAR_4, &VAR_5->status))
  return;


 if (!FUNC_3(VAR_5)) {


  VAR_5->staging.filter_flags &= ~VAR_0;
  FUNC_2(VAR_5);


  VAR_7 = FUNC_4(VAR_5);
  if (VAR_7)
   FUNC_0("RXON timing failed - "
    "Attempting to continue.\n");


  VAR_5->chain_noise_data.active_chains = VAR_5->hw_params.valid_rx_ant;
  FUNC_5(VAR_5, &VAR_5->current_ht_config);
  if (VAR_5->ops->set_rxon_chain)
   VAR_5->ops->set_rxon_chain(VAR_5);

  VAR_5->staging.assoc_id = 0;

  if (VAR_6->bss_conf.use_short_preamble)
   VAR_5->staging.flags |= VAR_2;
  else
   VAR_5->staging.flags &= ~VAR_2;

  if (VAR_5->staging.flags & VAR_1) {
   if (VAR_6->bss_conf.use_short_slot)
    VAR_5->staging.flags |= VAR_3;
   else
    VAR_5->staging.flags &= ~VAR_3;
  }

  FUNC_1(VAR_5);

  VAR_5->staging.filter_flags |= VAR_0;
  FUNC_2(VAR_5);
 }
 FUNC_1(VAR_5);
}
