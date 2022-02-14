
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int flags; int op_code; } ;
struct iscsi_spe_conn_termination {int queue_cnts_addr; int query_params_addr; int abortive; int fw_cid; int conn_id; TYPE_3__ hdr; } ;
struct TYPE_5__ {struct iscsi_spe_conn_termination iscsi_conn_terminate; } ;
struct qed_spq_entry {TYPE_2__ ramrod; } ;
struct qed_spq_comp_cb {int dummy; } ;
struct qed_sp_init_data {int comp_mode; struct qed_spq_comp_cb* p_comp_data; int opaque_fid; int cid; } ;
struct qed_iscsi_conn {int queue_cnts_phys_addr; int tcp_upload_params_phys_addr; int abortive_dsconnect; int icid; int conn_id; int layer_code; } ;
struct TYPE_4__ {int opaque_fid; } ;
struct qed_hwfn {TYPE_1__ hw_info; } ;
typedef int init_data ;
typedef enum spq_mode { ____Placeholder_spq_mode } spq_mode ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct qed_sp_init_data*,int ,int) ;
 int FUNC_5 (struct qed_hwfn*,struct qed_spq_entry**,int ,int ,struct qed_sp_init_data*) ;
 int FUNC_6 (struct qed_hwfn*,struct qed_spq_entry*,int *) ;

__attribute__((used)) static int FUNC_7(struct qed_hwfn *VAR_4,
           struct qed_iscsi_conn *VAR_5,
           enum spq_mode VAR_6,
           struct qed_spq_comp_cb *VAR_7)
{
 struct iscsi_spe_conn_termination *VAR_8 = ((void*)0);
 struct qed_spq_entry *VAR_9 = ((void*)0);
 struct qed_sp_init_data VAR_10;
 int VAR_11 = -VAR_0;


 FUNC_4(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.cid = VAR_5->icid;
 VAR_10.opaque_fid = VAR_4->hw_info.opaque_fid;
 VAR_10.comp_mode = VAR_6;
 VAR_10.p_comp_data = VAR_7;

 VAR_11 = FUNC_5(VAR_4, &VAR_9,
     VAR_1,
     VAR_3, &VAR_10);
 if (VAR_11)
  return VAR_11;

 VAR_8 = &VAR_9->ramrod.iscsi_conn_terminate;
 VAR_8->hdr.op_code = VAR_1;
 FUNC_1(VAR_8->hdr.flags,
    VAR_2, VAR_5->layer_code);

 VAR_8->conn_id = FUNC_2(VAR_5->conn_id);
 VAR_8->fw_cid = FUNC_3(VAR_5->icid);
 VAR_8->abortive = VAR_5->abortive_dsconnect;

 FUNC_0(VAR_8->query_params_addr,
         VAR_5->tcp_upload_params_phys_addr);
 FUNC_0(VAR_8->queue_cnts_addr, VAR_5->queue_cnts_phys_addr);

 return FUNC_6(VAR_4, VAR_9, ((void*)0));
}
