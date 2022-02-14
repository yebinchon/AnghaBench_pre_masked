
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct mwifiex_tx_ba_stream_tbl {int amsdu; void* ba_status; } ;
struct mwifiex_ra_list_tbl {int amsdu_in_ampdu; void* ba_status; } ;
struct TYPE_5__ {scalar_t__ tx_amsdu; } ;
struct mwifiex_private {int adapter; TYPE_3__* aggr_prio_tbl; TYPE_2__ add_ba_param; } ;
struct host_cmd_ds_11n_addba_rsp {scalar_t__ add_rsp_result; int peer_mac_addr; int status_code; int ssn; int block_ack_param_set; } ;
struct TYPE_4__ {struct host_cmd_ds_11n_addba_rsp add_ba_rsp; } ;
struct host_cmd_ds_command {TYPE_1__ params; } ;
struct TYPE_6__ {scalar_t__ amsdu; scalar_t__ ampdu_ap; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (struct mwifiex_private*,int,int ,int ,int) ;
 struct mwifiex_tx_ba_stream_tbl* FUNC_4 (struct mwifiex_private*,int,int ) ;
 int FUNC_5 (struct mwifiex_private*,int) ;
 struct mwifiex_ra_list_tbl* FUNC_6 (struct mwifiex_private*,int,int ) ;

int FUNC_7(struct mwifiex_private *VAR_12,
         struct host_cmd_ds_command *VAR_13)
{
 int VAR_14, VAR_15;
 struct host_cmd_ds_11n_addba_rsp *VAR_16 = &VAR_13->params.add_ba_rsp;
 struct mwifiex_tx_ba_stream_tbl *VAR_17;
 struct mwifiex_ra_list_tbl *VAR_18;
 u16 VAR_19 = FUNC_1(VAR_16->block_ack_param_set);

 VAR_16->ssn = FUNC_0((FUNC_1(VAR_16->ssn))
   & VAR_10);

 VAR_14 = (VAR_19 & VAR_9)
        >> VAR_6;

 VAR_15 = FUNC_5(VAR_12, VAR_14);
 VAR_18 = FUNC_6(VAR_12, VAR_15, VAR_16->
  peer_mac_addr);
 if (FUNC_1(VAR_16->status_code) != VAR_0) {
  if (VAR_18) {
   VAR_18->ba_status = VAR_3;
   VAR_18->amsdu_in_ampdu = 0;
  }
  FUNC_3(VAR_12, VAR_14, VAR_16->peer_mac_addr,
       VAR_11, 1);
  if (VAR_16->add_rsp_result != VAR_1)
   VAR_12->aggr_prio_tbl[VAR_14].ampdu_ap =
    VAR_4;
  return 0;
 }

 VAR_17 = FUNC_4(VAR_12, VAR_14, VAR_16->peer_mac_addr);
 if (VAR_17) {
  FUNC_2(VAR_12->adapter, VAR_8, "info: BA stream complete\n");
  VAR_17->ba_status = VAR_2;
  if ((VAR_19 & VAR_5) &&
      VAR_12->add_ba_param.tx_amsdu &&
      (VAR_12->aggr_prio_tbl[VAR_14].amsdu != VAR_4))
   VAR_17->amsdu = 1;
  else
   VAR_17->amsdu = 0;
  if (VAR_18) {
   VAR_18->amsdu_in_ampdu = VAR_17->amsdu;
   VAR_18->ba_status = VAR_2;
  }
 } else {
  FUNC_2(VAR_12->adapter, VAR_7, "BA stream not created\n");
 }

 return 0;
}
