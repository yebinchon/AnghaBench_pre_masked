
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union l5cm_specific_data {int dummy; } l5cm_specific_data ;
typedef int u32 ;
struct regpair {int dummy; } ;
struct kwqe {int dummy; } ;
struct kcqe {int dummy; } ;
struct fcoe_kwqe_conn_offload4 {int fcoe_conn_id; } ;
struct fcoe_kwqe_conn_offload3 {int fcoe_conn_id; } ;
struct fcoe_kwqe_conn_offload2 {int fcoe_conn_id; } ;
struct fcoe_kwqe_conn_offload1 {int fcoe_conn_id; } ;
struct fcoe_kcqe {int fcoe_conn_id; int completion_status; int op_code; int offload_kwqe4; int offload_kwqe3; int offload_kwqe2; int offload_kwqe1; } ;
struct TYPE_4__ {int cdu_usage; } ;
struct TYPE_3__ {int cdu_reserved; } ;
struct fcoe_context {TYPE_2__ ustorm_ag_context; TYPE_1__ xstorm_ag_context; } ;
struct fcoe_conn_offload_ramrod_params {int fcoe_conn_id; int completion_status; int op_code; int offload_kwqe4; int offload_kwqe3; int offload_kwqe2; int offload_kwqe1; } ;
struct cnic_local {struct cnic_context* ctx_tbl; } ;
struct cnic_dev {int max_fcoe_conn; int netdev; struct cnic_local* cnic_priv; } ;
struct cnic_context {int cid; int ctx_flags; } ;
struct bnx2x {int dummy; } ;
typedef int kcqe ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct bnx2x*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct cnic_dev*,int) ;
 int FUNC_3 (struct cnic_dev*,int) ;
 struct fcoe_context* FUNC_4 (struct cnic_dev*,int,int,struct regpair*) ;
 struct fcoe_kcqe* FUNC_5 (struct cnic_local*,int,union l5cm_specific_data*) ;
 int FUNC_6 (struct cnic_dev*,int ,struct kcqe**,int) ;
 int FUNC_7 (struct cnic_dev*,int ,int,int ,union l5cm_specific_data*) ;
 int FUNC_8 (int *,struct fcoe_kwqe_conn_offload4*,int) ;
 int FUNC_9 (struct fcoe_kcqe*,int ,int) ;
 int FUNC_10 (int ,char*) ;
 struct bnx2x* FUNC_11 (int ) ;
 int FUNC_12 (int ,int *) ;
 scalar_t__ FUNC_13 (int ,int *) ;

__attribute__((used)) static int FUNC_14(struct cnic_dev *VAR_11, struct kwqe *VAR_12[],
     u32 VAR_13, int *VAR_14)
{
 int VAR_15 = 0;
 u32 VAR_16 = -1, VAR_17;
 struct cnic_local *VAR_18 = VAR_11->cnic_priv;
 struct bnx2x *VAR_19 = FUNC_11(VAR_11->netdev);
 struct fcoe_kwqe_conn_offload1 *VAR_20;
 struct fcoe_kwqe_conn_offload2 *VAR_21;
 struct fcoe_kwqe_conn_offload3 *VAR_22;
 struct fcoe_kwqe_conn_offload4 *VAR_23;
 struct fcoe_conn_offload_ramrod_params *VAR_24;
 struct cnic_context *VAR_25;
 struct fcoe_context *VAR_26;
 struct regpair VAR_27;
 union l5cm_specific_data VAR_28;
 struct fcoe_kcqe VAR_29;
 struct kcqe *VAR_30[1];

 if (VAR_13 < 4) {
  *VAR_14 = VAR_13;
  return -VAR_6;
 }
 VAR_20 = (struct fcoe_kwqe_conn_offload1 *) VAR_12[0];
 VAR_21 = (struct fcoe_kwqe_conn_offload2 *) VAR_12[1];
 VAR_22 = (struct fcoe_kwqe_conn_offload3 *) VAR_12[2];
 VAR_23 = (struct fcoe_kwqe_conn_offload4 *) VAR_12[3];

 *VAR_14 = 4;

 VAR_17 = VAR_20->fcoe_conn_id;
 if (VAR_17 >= VAR_11->max_fcoe_conn)
  goto err_reply;

 VAR_17 += VAR_0;

 VAR_25 = &VAR_18->ctx_tbl[VAR_17];
 if (FUNC_13(VAR_5, &VAR_25->ctx_flags))
  goto err_reply;

 VAR_15 = FUNC_2(VAR_11, VAR_17);
 if (VAR_15) {
  VAR_15 = 0;
  goto err_reply;
 }
 VAR_16 = VAR_25->cid;

 VAR_26 = FUNC_4(VAR_11, VAR_16, 1, &VAR_27);
 if (VAR_26) {
  u32 VAR_31 = FUNC_0(VAR_19, VAR_16);
  u32 VAR_32;

  VAR_32 = FUNC_1(VAR_31, VAR_2,
          VAR_7);
  VAR_26->xstorm_ag_context.cdu_reserved = VAR_32;
  VAR_32 = FUNC_1(VAR_31, VAR_1,
          VAR_7);
  VAR_26->ustorm_ag_context.cdu_usage = VAR_32;
 }
 if (sizeof(*VAR_24) > VAR_3) {
  FUNC_10(VAR_11->netdev, "fcoe_offload size too big\n");
  goto err_reply;
 }
 VAR_24 = FUNC_5(VAR_18, VAR_17, &VAR_28);
 if (!VAR_24)
  goto err_reply;

 FUNC_9(VAR_24, 0, sizeof(*VAR_24));
 FUNC_8(&VAR_24->offload_kwqe1, VAR_20, sizeof(*VAR_20));
 FUNC_8(&VAR_24->offload_kwqe2, VAR_21, sizeof(*VAR_21));
 FUNC_8(&VAR_24->offload_kwqe3, VAR_22, sizeof(*VAR_22));
 FUNC_8(&VAR_24->offload_kwqe4, VAR_23, sizeof(*VAR_23));

 VAR_16 = FUNC_0(VAR_19, VAR_16);
 VAR_15 = FUNC_7(VAR_11, VAR_10, VAR_16,
      VAR_7, &VAR_28);
 if (!VAR_15)
  FUNC_12(VAR_5, &VAR_25->ctx_flags);

 return VAR_15;

err_reply:
 if (VAR_16 != -1)
  FUNC_3(VAR_11, VAR_17);

 FUNC_9(&VAR_29, 0, sizeof(VAR_29));
 VAR_29.op_code = VAR_9;
 VAR_29.fcoe_conn_id = VAR_20->fcoe_conn_id;
 VAR_29.completion_status = VAR_8;

 VAR_30[0] = (struct kcqe *) &VAR_29;
 FUNC_6(VAR_11, VAR_4, VAR_30, 1);
 return VAR_15;
}
