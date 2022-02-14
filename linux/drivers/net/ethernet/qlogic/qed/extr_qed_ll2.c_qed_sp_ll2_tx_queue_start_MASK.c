
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct core_tx_start_ramrod_data {int stats_en; int gsi_offload_flag; void* conn_type; void* qm_pq_id; void* pbl_size; int pbl_base_addr; int stats_id; void* mtu; int sb_index; void* sb_id; } ;
struct TYPE_4__ {struct core_tx_start_ramrod_data core_tx_queue_start; } ;
struct qed_spq_entry {TYPE_1__ ramrod; } ;
struct qed_sp_init_data {int comp_mode; int opaque_fid; int cid; } ;
struct qed_ll2_tx_queue {int db_msg; int doorbell_addr; int txq_chain; int tx_sb_index; } ;
struct TYPE_6__ {int conn_type; int tx_tc; int gsi_enable; int mtu; } ;
struct qed_ll2_info {int tx_stats_en; TYPE_3__ input; int tx_stats_id; int cid; struct qed_ll2_tx_queue tx_queue; } ;
struct TYPE_5__ {int personality; int opaque_fid; } ;
struct qed_hwfn {int cdev; TYPE_2__ hw_info; } ;
typedef int init_data ;
typedef enum qed_ll2_conn_type { ____Placeholder_qed_ll2_conn_type } qed_ll2_conn_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct qed_hwfn*,char*,int) ;
 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;

 int FUNC_2 (struct qed_ll2_info*) ;





 int VAR_13 ;
 int VAR_14 ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (struct qed_sp_init_data*,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ,int *,int ,int ) ;
 int FUNC_8 (struct qed_hwfn*,int ) ;
 int FUNC_9 (struct qed_hwfn*) ;
 int FUNC_10 (struct qed_hwfn*,struct qed_spq_entry**,int ,int ,struct qed_sp_init_data*) ;
 int FUNC_11 (struct qed_hwfn*,struct qed_spq_entry*,int *) ;

__attribute__((used)) static int FUNC_12(struct qed_hwfn *VAR_15,
         struct qed_ll2_info *VAR_16)
{
 enum qed_ll2_conn_type VAR_17 = VAR_16->input.conn_type;
 struct qed_ll2_tx_queue *VAR_18 = &VAR_16->tx_queue;
 struct core_tx_start_ramrod_data *VAR_19 = ((void*)0);
 struct qed_spq_entry *VAR_20 = ((void*)0);
 struct qed_sp_init_data VAR_21;
 u16 VAR_22 = 0, VAR_23;
 int VAR_24 = -VAR_3;

 if (!FUNC_2(VAR_16))
  return 0;

 if (VAR_16->input.conn_type == 129)
  VAR_16->tx_stats_en = 0;
 else
  VAR_16->tx_stats_en = 1;


 FUNC_4(&VAR_21, 0, sizeof(VAR_21));
 VAR_21.cid = VAR_16->cid;
 VAR_21.opaque_fid = VAR_15->hw_info.opaque_fid;
 VAR_21.comp_mode = VAR_14;

 VAR_24 = FUNC_10(VAR_15, &VAR_20,
     VAR_0,
     VAR_7, &VAR_21);
 if (VAR_24)
  return VAR_24;

 VAR_19 = &VAR_20->ramrod.core_tx_queue_start;

 VAR_19->sb_id = FUNC_3(FUNC_9(VAR_15));
 VAR_19->sb_index = VAR_18->tx_sb_index;
 VAR_19->mtu = FUNC_3(VAR_16->input.mtu);
 VAR_19->stats_en = VAR_16->tx_stats_en;
 VAR_19->stats_id = VAR_16->tx_stats_id;

 FUNC_0(VAR_19->pbl_base_addr,
         FUNC_6(&VAR_18->txq_chain));
 VAR_23 = FUNC_5(&VAR_18->txq_chain);
 VAR_19->pbl_size = FUNC_3(VAR_23);

 switch (VAR_16->input.tx_tc) {
 case 133:
  VAR_22 = FUNC_8(VAR_15, VAR_4);
  break;
 case 134:
  VAR_22 = FUNC_8(VAR_15, VAR_6);
  break;
 default:
  VAR_22 = FUNC_8(VAR_15, VAR_5);
  break;
 }

 VAR_19->qm_pq_id = FUNC_3(VAR_22);

 switch (VAR_17) {
 case 132:
  VAR_19->conn_type = VAR_9;
  break;
 case 131:
  VAR_19->conn_type = VAR_10;
  break;
 case 128:
  VAR_19->conn_type = VAR_12;
  break;
 case 130:
  VAR_19->conn_type = VAR_11;
  break;
 case 129:
  if (VAR_15->hw_info.personality == VAR_13)
   VAR_19->conn_type = VAR_10;
  else
   VAR_19->conn_type = VAR_11;
  break;
 default:
  VAR_19->conn_type = VAR_8;
  FUNC_1(VAR_15, "Unknown connection type: %d\n", VAR_17);
 }

 VAR_19->gsi_offload_flag = VAR_16->input.gsi_enable;

 VAR_24 = FUNC_11(VAR_15, VAR_20, ((void*)0));
 if (VAR_24)
  return VAR_24;

 VAR_24 = FUNC_7(VAR_15->cdev, VAR_18->doorbell_addr,
     &VAR_18->db_msg, VAR_2,
     VAR_1);
 return VAR_24;
}
