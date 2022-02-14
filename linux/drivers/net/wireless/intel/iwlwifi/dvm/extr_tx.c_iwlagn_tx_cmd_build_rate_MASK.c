
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


typedef void* u8 ;
typedef int u32 ;
struct iwl_tx_cmd {int rate_n_flags; int tx_flags; scalar_t__ initial_rate_index; void* rts_retry_limit; void* data_retry_limit; } ;
struct iwl_priv {void* mgmt_tx_ant; TYPE_5__* nvm_data; scalar_t__ bt_full_concurrent; TYPE_4__* lib; scalar_t__ wowlan; } ;
struct TYPE_8__ {TYPE_1__* rates; } ;
struct ieee80211_tx_info {size_t band; TYPE_2__ control; } ;
struct ieee80211_sta {int dummy; } ;
typedef int __le16 ;
struct TYPE_12__ {void* plcp; } ;
struct TYPE_11__ {int valid_tx_ant; int * bands; } ;
struct TYPE_10__ {TYPE_3__* bt_params; } ;
struct TYPE_9__ {scalar_t__ advanced_bt_coexist; } ;
struct TYPE_7__ {int idx; int flags; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (void*,int ) ;
 TYPE_6__* VAR_13 ;
 void* FUNC_6 (struct iwl_priv*,void*,int ) ;
 void* FUNC_7 (void*,void*) ;
 int FUNC_8 (int *,struct ieee80211_sta*) ;

__attribute__((used)) static void FUNC_9(struct iwl_priv *VAR_14,
         struct iwl_tx_cmd *VAR_15,
         struct ieee80211_tx_info *VAR_16,
         struct ieee80211_sta *VAR_17,
         __le16 VAR_18)
{
 u32 VAR_19;
 int VAR_20;
 u8 VAR_21;
 u8 VAR_22;
 u8 VAR_23;

 if (VAR_14->wowlan) {
  VAR_21 = VAR_3;
  VAR_22 = VAR_3;
 } else {

  VAR_21 = VAR_5;


  if (FUNC_3(VAR_18)) {
   VAR_22 = VAR_4;
   VAR_21 =
    FUNC_7(VAR_22, VAR_21);
  } else if (FUNC_1(VAR_18))
   VAR_22 = VAR_1;
  else
   VAR_22 = VAR_2;
 }

 VAR_15->data_retry_limit = VAR_22;
 VAR_15->rts_retry_limit = VAR_21;



 if (FUNC_2(VAR_18)) {
  VAR_15->initial_rate_index = 0;
  VAR_15->tx_flags |= VAR_12;
  return;
 } else if (FUNC_1(VAR_18))
  VAR_15->tx_flags |= VAR_12;







 VAR_20 = VAR_16->control.rates[0].idx;
 if (VAR_16->control.rates[0].flags & VAR_0 ||
   (VAR_20 < 0) || (VAR_20 > VAR_9))
  VAR_20 = FUNC_8(
    &VAR_14->nvm_data->bands[VAR_16->band], VAR_17);

 if (VAR_16->band == VAR_10)
  VAR_20 += VAR_7;

 VAR_23 = VAR_13[VAR_20].plcp;

 VAR_19 = 0;


 if ((VAR_20 >= VAR_6) && (VAR_20 <= VAR_8))
  VAR_19 |= VAR_11;


 if (VAR_14->lib->bt_params &&
     VAR_14->lib->bt_params->advanced_bt_coexist &&
     VAR_14->bt_full_concurrent) {

  VAR_14->mgmt_tx_ant = FUNC_6(VAR_14, VAR_14->mgmt_tx_ant,
    FUNC_0(VAR_14->nvm_data->valid_tx_ant));
 } else
  VAR_14->mgmt_tx_ant = FUNC_6(
     VAR_14, VAR_14->mgmt_tx_ant,
     VAR_14->nvm_data->valid_tx_ant);
 VAR_19 |= FUNC_4(VAR_14->mgmt_tx_ant);


 VAR_15->rate_n_flags = FUNC_5(VAR_23, VAR_19);
}
