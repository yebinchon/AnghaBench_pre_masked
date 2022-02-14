
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct kwqe {int dummy; } ;
struct kcqe {int dummy; } ;
struct iscsi_kwqe_conn_destroy {size_t reserved0; int context_id; } ;
struct iscsi_kcqe {size_t iscsi_conn_id; int iscsi_conn_context_id; int completion_status; int op_code; } ;
struct cnic_local {int iscsi_conn; int delete_task; struct cnic_context* ctx_tbl; } ;
struct cnic_dev {struct cnic_local* cnic_priv; } ;
struct cnic_context {unsigned long timestamp; int ctx_flags; } ;
typedef int kcqe ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct cnic_dev*,size_t) ;
 int FUNC_3 (struct cnic_dev*,size_t) ;
 int FUNC_4 (struct cnic_dev*,int ,struct kcqe**,int) ;
 int VAR_6 ;
 unsigned long VAR_7 ;
 int FUNC_5 (struct iscsi_kcqe*,int ,int) ;
 int FUNC_6 (int ,int *,unsigned long) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_10(struct cnic_dev *VAR_8, struct kwqe *VAR_9)
{
 struct cnic_local *VAR_10 = VAR_8->cnic_priv;
 struct iscsi_kwqe_conn_destroy *VAR_11 =
  (struct iscsi_kwqe_conn_destroy *) VAR_9;
 u32 VAR_12 = VAR_11->reserved0;
 struct cnic_context *VAR_13 = &VAR_10->ctx_tbl[VAR_12];
 int VAR_14 = 0;
 struct iscsi_kcqe VAR_15;
 struct kcqe *VAR_16[1];

 if (!FUNC_8(VAR_2, &VAR_13->ctx_flags))
  goto skip_cfc_delete;

 if (!FUNC_9(VAR_7, VAR_13->timestamp + (2 * VAR_3))) {
  unsigned long VAR_17 = VAR_13->timestamp + (2 * VAR_3) - VAR_7;

  if (VAR_17 > (2 * VAR_3))
   VAR_17 = 0;

  FUNC_7(VAR_1, &VAR_13->ctx_flags);
  FUNC_6(VAR_6, &VAR_10->delete_task, VAR_17);
  goto destroy_reply;
 }

 VAR_14 = FUNC_2(VAR_8, VAR_12);

skip_cfc_delete:
 FUNC_3(VAR_8, VAR_12);

 if (!VAR_14) {
  FUNC_0(&VAR_10->iscsi_conn);
  FUNC_1(VAR_2, &VAR_13->ctx_flags);
 }

destroy_reply:
 FUNC_5(&VAR_15, 0, sizeof(VAR_15));
 VAR_15.op_code = VAR_5;
 VAR_15.iscsi_conn_id = VAR_12;
 VAR_15.completion_status = VAR_4;
 VAR_15.iscsi_conn_context_id = VAR_11->context_id;

 VAR_16[0] = (struct kcqe *) &VAR_15;
 FUNC_4(VAR_8, VAR_0, VAR_16, 1);

 return 0;
}
