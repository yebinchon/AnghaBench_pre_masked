
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned long long u64 ;
typedef int u32 ;
struct mlx4_update_qp_params {int flags; int rate_unit; int rate_val; int qos_vport; int smac_index; } ;
struct TYPE_4__ {int fl; int grh_mylmc; } ;
struct TYPE_6__ {int qos_vport; int rate_limit_params; int param3; TYPE_1__ pri_path; } ;
struct mlx4_update_qp_context {void* qp_mask; void* primary_addr_path_mask; TYPE_3__ qp_context; } ;
struct TYPE_5__ {int flags2; } ;
struct mlx4_dev {TYPE_2__ caps; } ;
struct mlx4_cmd_mailbox {int dma; scalar_t__ buf; } ;
typedef enum mlx4_update_qp_attr { ____Placeholder_mlx4_update_qp_attr } mlx4_update_qp_attr ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct mlx4_cmd_mailbox*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 unsigned long long VAR_17 ;
 unsigned long long VAR_18 ;
 unsigned long long VAR_19 ;
 unsigned long long VAR_20 ;
 unsigned long long VAR_21 ;
 int FUNC_1 (struct mlx4_cmd_mailbox*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (unsigned long long) ;
 struct mlx4_cmd_mailbox* FUNC_5 (struct mlx4_dev*) ;
 int FUNC_6 (struct mlx4_dev*,int ,int,int ,int ,int ,int ) ;
 int FUNC_7 (struct mlx4_dev*,struct mlx4_cmd_mailbox*) ;
 int FUNC_8 (struct mlx4_dev*,char*) ;

int FUNC_9(struct mlx4_dev *VAR_22, u32 VAR_23,
     enum mlx4_update_qp_attr VAR_24,
     struct mlx4_update_qp_params *VAR_25)
{
 struct mlx4_cmd_mailbox *VAR_26;
 struct mlx4_update_qp_context *VAR_27;
 u64 VAR_28 = 0;
 u64 VAR_29 = 0;
 int VAR_30 = 0;

 if (!VAR_24 || (VAR_24 & ~VAR_15))
  return -VAR_0;

 VAR_26 = FUNC_5(VAR_22);
 if (FUNC_0(VAR_26))
  return FUNC_1(VAR_26);

 VAR_27 = (struct mlx4_update_qp_context *)VAR_26->buf;

 if (VAR_24 & VAR_14) {
  VAR_28 |= 1ULL << VAR_21;
  VAR_27->qp_context.pri_path.grh_mylmc = VAR_25->smac_index;
 }

 if (VAR_24 & VAR_9) {
  if (!(VAR_22->caps.flags2
        & VAR_6)) {
   FUNC_8(VAR_22,
      "Trying to set src check LB, but it isn't supported\n");
   VAR_30 = -VAR_1;
   goto out;
  }
  VAR_28 |=
   1ULL << VAR_20;
  if (VAR_25->flags &
      VAR_10) {
   VAR_27->qp_context.pri_path.fl |=
    VAR_7;
  }
 }

 if (VAR_24 & VAR_16) {
  VAR_29 |= 1ULL << VAR_19;
  if (VAR_25->flags & VAR_11)
   VAR_27->qp_context.param3 |= FUNC_3(VAR_8);
 }

 if (VAR_24 & VAR_13) {
  VAR_29 |= 1ULL << VAR_18;
  VAR_27->qp_context.rate_limit_params = FUNC_2((VAR_25->rate_unit << 14) | VAR_25->rate_val);
 }

 if (VAR_24 & VAR_12) {
  if (!(VAR_22->caps.flags2 & VAR_5)) {
   FUNC_8(VAR_22, "Granular QoS per VF is not enabled\n");
   VAR_30 = -VAR_1;
   goto out;
  }

  VAR_29 |= 1ULL << VAR_17;
  VAR_27->qp_context.qos_vport = VAR_25->qos_vport;
 }

 VAR_27->primary_addr_path_mask = FUNC_4(VAR_28);
 VAR_27->qp_mask = FUNC_4(VAR_29);

 VAR_30 = FUNC_6(VAR_22, VAR_26->dma, VAR_23 & 0xffffff, 0,
         VAR_4, VAR_3,
         VAR_2);
out:
 FUNC_7(VAR_22, VAR_26);
 return VAR_30;
}
