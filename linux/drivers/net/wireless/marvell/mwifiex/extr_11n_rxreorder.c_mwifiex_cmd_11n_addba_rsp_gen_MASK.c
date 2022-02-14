
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
typedef size_t u8 ;
typedef int u32 ;
struct mwifiex_sta_node {scalar_t__ is_11ac_enabled; } ;
struct TYPE_6__ {int rx_win_size; int rx_amsdu; } ;
struct mwifiex_private {TYPE_3__* aggr_prio_tbl; TYPE_2__ add_ba_param; int sta_list_spinlock; TYPE_4__* adapter; int cfg_bssid; } ;
struct host_cmd_ds_11n_addba_rsp {void* block_ack_param_set; void* status_code; void* ssn; int block_ack_tmo; int dialog_token; int peer_mac_addr; } ;
struct TYPE_5__ {struct host_cmd_ds_11n_addba_rsp add_ba_rsp; } ;
struct host_cmd_ds_command {void* size; void* command; TYPE_1__ params; } ;
struct host_cmd_ds_11n_addba_req {void* ssn; int peer_mac_addr; void* block_ack_param_set; int block_ack_tmo; int dialog_token; } ;
struct TYPE_8__ {scalar_t__ is_hw_11ac_capable; int fw_cap_info; } ;
struct TYPE_7__ {scalar_t__ amsdu; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct mwifiex_private*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 void* FUNC_2 (int) ;
 int FUNC_3 (void*) ;
 scalar_t__ FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (struct mwifiex_private*,int ,size_t,int,int) ;
 int FUNC_7 (TYPE_4__*,int ,char*,int ) ;
 struct mwifiex_sta_node* FUNC_8 (struct mwifiex_private*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

int FUNC_11(struct mwifiex_private *VAR_13,
      struct host_cmd_ds_command *VAR_14,
      struct host_cmd_ds_11n_addba_req
      *VAR_15)
{
 struct host_cmd_ds_11n_addba_rsp *VAR_16 = &VAR_14->params.add_ba_rsp;
 struct mwifiex_sta_node *VAR_17;
 u32 VAR_18 = VAR_13->add_ba_param.rx_win_size;
 u8 VAR_19;
 int VAR_20;
 uint16_t VAR_21;

 if ((FUNC_0(VAR_13) == VAR_11) &&
     FUNC_1(VAR_13->adapter->fw_cap_info) &&
     VAR_13->adapter->is_hw_11ac_capable &&
     FUNC_4(VAR_13->cfg_bssid, VAR_15->peer_mac_addr, VAR_6)) {
  FUNC_9(&VAR_13->sta_list_spinlock);
  VAR_17 = FUNC_8(VAR_13,
      VAR_15->peer_mac_addr);
  if (!VAR_17) {
   FUNC_10(&VAR_13->sta_list_spinlock);
   FUNC_7(VAR_13->adapter, VAR_5,
        "BA setup with unknown TDLS peer %pM!\n",
        VAR_15->peer_mac_addr);
   return -1;
  }
  if (VAR_17->is_11ac_enabled)
   VAR_18 = VAR_10;
  FUNC_10(&VAR_13->sta_list_spinlock);
 }

 VAR_14->command = FUNC_2(VAR_7);
 VAR_14->size = FUNC_2(sizeof(*VAR_16) + VAR_12);

 FUNC_5(VAR_16->peer_mac_addr, VAR_15->peer_mac_addr,
        VAR_6);
 VAR_16->dialog_token = VAR_15->dialog_token;
 VAR_16->block_ack_tmo = VAR_15->block_ack_tmo;
 VAR_16->ssn = VAR_15->ssn;

 VAR_21 = FUNC_3(VAR_15->block_ack_param_set);
 VAR_19 = (VAR_21 & VAR_9)
  >> VAR_3;
 VAR_16->status_code = FUNC_2(VAR_0);
 VAR_21 &= ~VAR_8;


 if (!VAR_13->add_ba_param.rx_amsdu ||
     (VAR_13->aggr_prio_tbl[VAR_19].amsdu == VAR_1))
  VAR_21 &= ~VAR_2;
 VAR_21 |= VAR_18 << VAR_4;
 VAR_16->block_ack_param_set = FUNC_2(VAR_21);
 VAR_20 = (FUNC_3(VAR_16->block_ack_param_set)
     & VAR_8)
     >> VAR_4;
 VAR_15->block_ack_param_set = FUNC_2(VAR_21);

 FUNC_6(VAR_13, VAR_15->peer_mac_addr,
       VAR_19, VAR_20,
       FUNC_3(VAR_15->ssn));
 return 0;
}
