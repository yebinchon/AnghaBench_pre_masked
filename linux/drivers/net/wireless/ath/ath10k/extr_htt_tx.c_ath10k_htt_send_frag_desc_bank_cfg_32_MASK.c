
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {scalar_t__ data; } ;
struct htt_msdu_ext_desc {int dummy; } ;
struct TYPE_16__ {int record_multiplier; int record_size; void* num_tids; void* num_peers; int paddr; } ;
struct htt_frag_desc_bank_cfg32 {int num_banks; int desc_size; TYPE_8__ q_state; TYPE_6__* bank_id; int * bank_base_addrs; int info; } ;
struct TYPE_10__ {int msg_type; } ;
struct htt_cmd {struct htt_frag_desc_bank_cfg32 frag_desc_bank_cfg32; TYPE_2__ hdr; } ;
struct TYPE_15__ {int num_tids; int num_peers; int paddr; int type; } ;
struct TYPE_13__ {int paddr; } ;
struct ath10k_htt {int eid; struct ath10k* ar; TYPE_7__ tx_q_state; scalar_t__ max_num_pending_tx; TYPE_5__ frag_desc; } ;
struct TYPE_9__ {int continuous_frag_desc; } ;
struct ath10k {int htc; TYPE_4__* running_fw; TYPE_1__ hw_params; } ;
struct TYPE_14__ {int bank_max_id; scalar_t__ bank_min_id; } ;
struct TYPE_11__ {int fw_features; } ;
struct TYPE_12__ {TYPE_3__ fw_file; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ath10k*,int ,char*) ;
 struct sk_buff* FUNC_4 (struct ath10k*,int) ;
 int FUNC_5 (int *,int ,struct sk_buff*) ;
 int FUNC_6 (struct ath10k*,char*,...) ;
 void* FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*,int) ;
 scalar_t__ FUNC_11 (int ,int ) ;

__attribute__((used)) static int FUNC_12(struct ath10k_htt *VAR_9)
{
 struct ath10k *VAR_10 = VAR_9->ar;
 struct sk_buff *VAR_11;
 struct htt_cmd *VAR_12;
 struct htt_frag_desc_bank_cfg32 *VAR_13;
 int VAR_14, VAR_15;
 u8 VAR_16;

 if (!VAR_10->hw_params.continuous_frag_desc)
  return 0;

 if (!VAR_9->frag_desc.paddr) {
  FUNC_6(VAR_10, "invalid frag desc memory\n");
  return -VAR_2;
 }

 VAR_15 = sizeof(VAR_12->hdr) + sizeof(VAR_12->frag_desc_bank_cfg32);
 VAR_11 = FUNC_4(VAR_10, VAR_15);
 if (!VAR_11)
  return -VAR_3;

 FUNC_10(VAR_11, VAR_15);
 VAR_12 = (struct htt_cmd *)VAR_11->data;
 VAR_12->hdr.msg_type = VAR_6;

 VAR_16 = 0;
 VAR_16 |= FUNC_0(VAR_9->tx_q_state.type,
     VAR_4);

 if (FUNC_11(VAR_1,
       VAR_10->running_fw->fw_file.fw_features))
  VAR_16 |= VAR_5;

 VAR_13 = &VAR_12->frag_desc_bank_cfg32;
 VAR_13->info = VAR_16;
 VAR_13->num_banks = 1;
 VAR_13->desc_size = sizeof(struct htt_msdu_ext_desc);
 VAR_13->bank_base_addrs[0] = FUNC_2(VAR_9->frag_desc.paddr);
 VAR_13->bank_id[0].bank_min_id = 0;
 VAR_13->bank_id[0].bank_max_id = FUNC_1(VAR_9->max_num_pending_tx -
          1);

 VAR_13->q_state.paddr = FUNC_8(VAR_9->tx_q_state.paddr);
 VAR_13->q_state.num_peers = FUNC_7(VAR_9->tx_q_state.num_peers);
 VAR_13->q_state.num_tids = FUNC_7(VAR_9->tx_q_state.num_tids);
 VAR_13->q_state.record_size = VAR_8;
 VAR_13->q_state.record_multiplier = VAR_7;

 FUNC_3(VAR_10, VAR_0, "htt frag desc bank cmd\n");

 VAR_14 = FUNC_5(&VAR_9->ar->htc, VAR_9->eid, VAR_11);
 if (VAR_14) {
  FUNC_6(VAR_10, "failed to send frag desc bank cfg request: %d\n",
       VAR_14);
  FUNC_9(VAR_11);
  return VAR_14;
 }

 return 0;
}
