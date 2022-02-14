
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct res_srq {int ref_count; } ;
struct res_qp {int local_qpn; scalar_t__ param3; struct res_srq* srq; struct res_srq* scq; struct res_srq* rcq; struct res_srq* mtt; int qpc_flags; scalar_t__ feup; scalar_t__ vlan_index; scalar_t__ pri_path_fl; scalar_t__ fvl_rx; scalar_t__ vlan_control; scalar_t__ sched_queue; } ;
struct res_mtt {int ref_count; } ;
struct res_cq {int ref_count; } ;
struct mlx4_vhcr {int in_modifier; } ;
struct mlx4_qp_context {scalar_t__ param3; int flags; } ;
struct TYPE_2__ {int mtt_entry_sz; } ;
struct mlx4_dev {TYPE_1__ caps; } ;
struct mlx4_cmd_mailbox {struct mlx4_qp_context* buf; } ;
struct mlx4_cmd_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mlx4_dev*,struct mlx4_vhcr*,struct mlx4_qp_context*) ;
 int FUNC_1 (struct mlx4_dev*,int,struct mlx4_qp_context*,struct mlx4_cmd_mailbox*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct mlx4_dev*,int,int,int,struct res_srq*) ;
 int FUNC_5 (struct mlx4_dev*,int,int,int ,struct res_srq**) ;
 int FUNC_6 (struct mlx4_dev*,int,struct mlx4_vhcr*,struct mlx4_cmd_mailbox*,struct mlx4_cmd_mailbox*,struct mlx4_cmd_info*) ;
 int FUNC_7 (struct mlx4_dev*,int,int,int ) ;
 int FUNC_8 (struct mlx4_qp_context*) ;
 int FUNC_9 (struct mlx4_qp_context*) ;
 int FUNC_10 (struct mlx4_qp_context*) ;
 int FUNC_11 (struct mlx4_qp_context*) ;
 int FUNC_12 (struct mlx4_qp_context*) ;
 int FUNC_13 (struct mlx4_dev*,int,int,int ,struct res_qp**,int ) ;
 int FUNC_14 (struct mlx4_dev*,int,int ,int) ;
 int FUNC_15 (struct mlx4_dev*,int,int ,int) ;
 int FUNC_16 (struct mlx4_dev*,int,struct mlx4_cmd_mailbox*) ;

int FUNC_17(struct mlx4_dev *VAR_5, int VAR_6,
        struct mlx4_vhcr *VAR_7,
        struct mlx4_cmd_mailbox *VAR_8,
        struct mlx4_cmd_mailbox *VAR_9,
        struct mlx4_cmd_info *VAR_10)
{
 int VAR_11;
 int VAR_12 = VAR_7->in_modifier & 0x7fffff;
 struct res_mtt *VAR_13;
 struct res_qp *VAR_14;
 struct mlx4_qp_context *VAR_15 = VAR_8->buf + 8;
 int VAR_16 = FUNC_8(VAR_15) / VAR_5->caps.mtt_entry_sz;
 int VAR_17 = FUNC_9(VAR_15);
 struct res_cq *VAR_18;
 struct res_cq *VAR_19;
 int VAR_20 = FUNC_10(VAR_15);
 int VAR_21 = FUNC_11(VAR_15);
 u32 VAR_22 = FUNC_12(VAR_15) & 0xffffff;
 int VAR_23 = (FUNC_12(VAR_15) >> 24) & 1;
 struct res_srq *VAR_24;
 int VAR_25 = VAR_7->in_modifier & 0xffffff;

 VAR_11 = FUNC_1(VAR_5, VAR_6, VAR_15, VAR_8);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_13(VAR_5, VAR_6, VAR_12, VAR_3, &VAR_14, 0);
 if (VAR_11)
  return VAR_11;
 VAR_14->local_qpn = VAR_25;
 VAR_14->sched_queue = 0;
 VAR_14->param3 = 0;
 VAR_14->vlan_control = 0;
 VAR_14->fvl_rx = 0;
 VAR_14->pri_path_fl = 0;
 VAR_14->vlan_index = 0;
 VAR_14->feup = 0;
 VAR_14->qpc_flags = FUNC_3(VAR_15->flags);

 VAR_11 = FUNC_5(VAR_5, VAR_6, VAR_16, VAR_1, &VAR_13);
 if (VAR_11)
  goto ex_abort;

 VAR_11 = FUNC_4(VAR_5, VAR_6, VAR_16, VAR_17, VAR_13);
 if (VAR_11)
  goto ex_put_mtt;

 VAR_11 = FUNC_5(VAR_5, VAR_6, VAR_20, VAR_0, &VAR_18);
 if (VAR_11)
  goto ex_put_mtt;

 if (VAR_21 != VAR_20) {
  VAR_11 = FUNC_5(VAR_5, VAR_6, VAR_21, VAR_0, &VAR_19);
  if (VAR_11)
   goto ex_put_rcq;
 } else
  VAR_19 = VAR_18;

 if (VAR_23) {
  VAR_11 = FUNC_5(VAR_5, VAR_6, VAR_22, VAR_4, &VAR_24);
  if (VAR_11)
   goto ex_put_scq;
 }

 FUNC_0(VAR_5, VAR_7, VAR_15);
 FUNC_16(VAR_5, VAR_6, VAR_8);
 VAR_11 = FUNC_6(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);
 if (VAR_11)
  goto ex_put_srq;
 FUNC_2(&VAR_13->ref_count);
 VAR_14->mtt = VAR_13;
 FUNC_2(&VAR_18->ref_count);
 VAR_14->rcq = VAR_18;
 FUNC_2(&VAR_19->ref_count);
 VAR_14->scq = VAR_19;

 if (VAR_21 != VAR_20)
  FUNC_7(VAR_5, VAR_6, VAR_21, VAR_0);

 if (VAR_23) {
  FUNC_2(&VAR_24->ref_count);
  FUNC_7(VAR_5, VAR_6, VAR_22, VAR_4);
  VAR_14->srq = VAR_24;
 }


 VAR_14->param3 = VAR_15->param3;
 FUNC_7(VAR_5, VAR_6, VAR_20, VAR_0);
 FUNC_7(VAR_5, VAR_6, VAR_16, VAR_1);
 FUNC_15(VAR_5, VAR_6, VAR_2, VAR_12);

 return 0;

ex_put_srq:
 if (VAR_23)
  FUNC_7(VAR_5, VAR_6, VAR_22, VAR_4);
ex_put_scq:
 if (VAR_21 != VAR_20)
  FUNC_7(VAR_5, VAR_6, VAR_21, VAR_0);
ex_put_rcq:
 FUNC_7(VAR_5, VAR_6, VAR_20, VAR_0);
ex_put_mtt:
 FUNC_7(VAR_5, VAR_6, VAR_16, VAR_1);
ex_abort:
 FUNC_14(VAR_5, VAR_6, VAR_2, VAR_12);

 return VAR_11;
}
