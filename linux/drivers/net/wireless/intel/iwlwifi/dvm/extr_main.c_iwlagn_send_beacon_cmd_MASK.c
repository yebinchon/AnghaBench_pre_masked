
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


typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_9__ {int life_time; } ;
struct TYPE_13__ {int tx_flags; int rate_n_flags; TYPE_2__ stop_time; int sta_id; int len; } ;
struct iwl_tx_beacon_cmd {TYPE_6__ tx; } ;
struct iwl_priv {TYPE_7__* beacon_skb; int mgmt_tx_ant; TYPE_5__* nvm_data; TYPE_1__* beacon_ctx; struct iwl_tx_beacon_cmd* beacon_cmd; int mutex; } ;
struct iwl_host_cmd {int* len; void** dataflags; struct iwl_tx_beacon_cmd** data; int id; } ;
struct TYPE_11__ {TYPE_3__* rates; } ;
struct ieee80211_tx_info {scalar_t__ band; TYPE_4__ control; } ;
struct TYPE_14__ {scalar_t__ len; struct iwl_tx_beacon_cmd* data; } ;
struct TYPE_12__ {int valid_tx_ant; } ;
struct TYPE_10__ {scalar_t__ idx; int flags; } ;
struct TYPE_8__ {int bcast_sta_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ieee80211_tx_info* FUNC_0 (TYPE_7__*) ;
 int VAR_3 ;
 int FUNC_1 (struct iwl_priv*,char*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 void* VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct iwl_priv*,struct iwl_host_cmd*) ;
 int FUNC_6 (scalar_t__,scalar_t__) ;
 int FUNC_7 (struct iwl_priv*,struct iwl_tx_beacon_cmd*,struct iwl_tx_beacon_cmd*,scalar_t__) ;
 int FUNC_8 (struct iwl_priv*,int ,int ) ;
 struct iwl_tx_beacon_cmd* FUNC_9 (int,int ) ;
 int FUNC_10 (int *) ;

int FUNC_11(struct iwl_priv *VAR_15)
{
 struct iwl_tx_beacon_cmd *VAR_16;
 struct iwl_host_cmd VAR_17 = {
  .id = VAR_10,
 };
 struct ieee80211_tx_info *VAR_18;
 u32 VAR_19;
 u32 VAR_20;
 u32 VAR_21;






 FUNC_10(&VAR_15->mutex);

 if (!VAR_15->beacon_ctx) {
  FUNC_1(VAR_15, "trying to build beacon w/o beacon context!\n");
  return 0;
 }

 if (FUNC_2(!VAR_15->beacon_skb))
  return -VAR_0;


 if (!VAR_15->beacon_cmd)
  VAR_15->beacon_cmd = FUNC_9(sizeof(*VAR_16), VAR_2);
 VAR_16 = VAR_15->beacon_cmd;
 if (!VAR_16)
  return -VAR_1;

 VAR_19 = VAR_15->beacon_skb->len;


 VAR_16->tx.len = FUNC_3((u16)VAR_19);
 VAR_16->tx.sta_id = VAR_15->beacon_ctx->bcast_sta_id;
 VAR_16->tx.stop_time.life_time = VAR_14;
 VAR_16->tx.tx_flags = VAR_11 |
  VAR_13 | VAR_12;


 FUNC_7(VAR_15, VAR_16, VAR_15->beacon_skb->data,
      VAR_19);


 VAR_18 = FUNC_0(VAR_15->beacon_skb);






 if (VAR_18->control.rates[0].idx < 0 ||
     VAR_18->control.rates[0].flags & VAR_3)
  VAR_21 = 0;
 else
  VAR_21 = VAR_18->control.rates[0].idx;

 VAR_15->mgmt_tx_ant = FUNC_8(VAR_15, VAR_15->mgmt_tx_ant,
           VAR_15->nvm_data->valid_tx_ant);
 VAR_20 = FUNC_4(VAR_15->mgmt_tx_ant);


 if (VAR_18->band == VAR_8)
  VAR_21 += VAR_5;
 else if (VAR_21 >= VAR_4 && VAR_21 <= VAR_7)
  VAR_20 |= VAR_9;

 VAR_16->tx.rate_n_flags =
   FUNC_6(VAR_21, VAR_20);


 VAR_17.len[0] = sizeof(*VAR_16);
 VAR_17.data[0] = VAR_16;
 VAR_17.dataflags[0] = VAR_6;
 VAR_17.len[1] = VAR_19;
 VAR_17.data[1] = VAR_15->beacon_skb->data;
 VAR_17.dataflags[1] = VAR_6;

 return FUNC_5(VAR_15, &VAR_17);
}
