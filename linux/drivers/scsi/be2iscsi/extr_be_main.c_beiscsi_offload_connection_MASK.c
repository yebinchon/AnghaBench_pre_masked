
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct wrb_handle {int wrb_index; int pwrb; } ;
struct iscsi_task {TYPE_1__* conn; } ;
struct iscsi_target_context_update_wrb {int dummy; } ;
struct iscsi_session {int back_lock; } ;
struct hwi_wrb_context {int wrb_handles_available; int free_index; } ;
struct beiscsi_offload_params {int dummy; } ;
struct TYPE_4__ {int wrbs_per_cxn; } ;
struct beiscsi_hba {TYPE_2__ params; scalar_t__ db_va; int init_mem; } ;
struct beiscsi_conn {int beiscsi_conn_cid; scalar_t__ doorbell_offset; scalar_t__ login_in_progress; struct iscsi_task* task; struct beiscsi_hba* phba; } ;
struct TYPE_3__ {struct iscsi_session* session; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct wrb_handle* FUNC_0 (struct beiscsi_hba*,int,struct hwi_wrb_context**) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct iscsi_task*) ;
 int FUNC_3 (struct beiscsi_hba*,int ,int,char*,struct wrb_handle*,int ,int ) ;
 int FUNC_4 (struct beiscsi_offload_params*,struct wrb_handle*,int ,struct hwi_wrb_context*) ;
 int FUNC_5 (struct beiscsi_offload_params*,struct wrb_handle*,struct hwi_wrb_context*) ;
 int FUNC_6 (struct hwi_wrb_context*,struct wrb_handle*,int ) ;
 int FUNC_7 (int,scalar_t__) ;
 scalar_t__ FUNC_8 (struct beiscsi_hba*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

void
FUNC_11(struct beiscsi_conn *VAR_7,
      struct beiscsi_offload_params *VAR_8)
{
 struct wrb_handle *VAR_9;
 struct hwi_wrb_context *VAR_10 = ((void*)0);
 struct beiscsi_hba *VAR_11 = VAR_7->phba;
 struct iscsi_task *VAR_12 = VAR_7->task;
 struct iscsi_session *VAR_13 = VAR_12->conn->session;
 u32 VAR_14 = 0;





 VAR_7->login_in_progress = 0;
 FUNC_9(&VAR_13->back_lock);
 FUNC_2(VAR_12);
 FUNC_10(&VAR_13->back_lock);

 VAR_9 = FUNC_0(VAR_11, VAR_7->beiscsi_conn_cid,
           &VAR_10);


 if (FUNC_8(VAR_11))
  FUNC_4(VAR_8, VAR_9,
           VAR_11->init_mem,
           VAR_10);
 else
  FUNC_5(VAR_8, VAR_9,
           VAR_10);

 FUNC_1(VAR_9->pwrb,
    sizeof(struct iscsi_target_context_update_wrb));

 VAR_14 |= VAR_7->beiscsi_conn_cid & VAR_5;
 VAR_14 |= (VAR_9->wrb_index & VAR_3)
        << VAR_4;
 VAR_14 |= 1 << VAR_2;
 FUNC_7(VAR_14, VAR_11->db_va +
    VAR_7->doorbell_offset);







 FUNC_6(VAR_10, VAR_9,
          VAR_11->params.wrbs_per_cxn);
 FUNC_3(VAR_11, VAR_6,
      VAR_1 | VAR_0,
      "BM_%d : put CONTEXT_UPDATE pwrb_handle=%p free_index=0x%x wrb_handles_available=%d\n",
      VAR_9, VAR_10->free_index,
      VAR_10->wrb_handles_available);
}
