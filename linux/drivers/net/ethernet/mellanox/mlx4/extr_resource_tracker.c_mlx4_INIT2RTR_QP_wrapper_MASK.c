
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u8 ;
struct TYPE_4__ {scalar_t__ from_state; } ;
struct res_qp {void* feup; void* vlan_index; void* pri_path_fl; void* fvl_rx; void* vlan_control; void* sched_queue; TYPE_2__ com; } ;
struct mlx4_vhcr {int in_modifier; } ;
struct TYPE_3__ {void* sched_queue; void* feup; void* vlan_index; void* fl; void* fvl_rx; void* vlan_control; } ;
struct mlx4_qp_context {TYPE_1__ pri_path; } ;
struct mlx4_dev {int dummy; } ;
struct mlx4_cmd_mailbox {struct mlx4_qp_context* buf; } ;
struct mlx4_cmd_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct mlx4_dev*,struct mlx4_vhcr*,struct mlx4_qp_context*) ;
 int FUNC_1 (struct mlx4_dev*,int,struct mlx4_qp_context*,struct mlx4_cmd_mailbox*) ;
 int FUNC_2 (struct mlx4_dev*,int,int,int ,struct res_qp**) ;
 int FUNC_3 (struct mlx4_dev*,int,struct mlx4_vhcr*,struct mlx4_cmd_mailbox*,struct mlx4_cmd_mailbox*,struct mlx4_cmd_info*) ;
 int FUNC_4 (struct mlx4_dev*,int,int,int ) ;
 scalar_t__ FUNC_5 (struct mlx4_dev*,int,struct mlx4_qp_context*,struct mlx4_cmd_mailbox*) ;
 int FUNC_6 (struct mlx4_dev*,struct mlx4_cmd_mailbox*,void*) ;
 int FUNC_7 (struct mlx4_dev*,int,struct mlx4_cmd_mailbox*) ;
 int FUNC_8 (struct mlx4_dev*,struct mlx4_cmd_mailbox*,int,int) ;
 int FUNC_9 (struct mlx4_dev*,struct mlx4_vhcr*,struct mlx4_cmd_mailbox*,int ,int) ;

int FUNC_10(struct mlx4_dev *VAR_5, int VAR_6,
        struct mlx4_vhcr *VAR_7,
        struct mlx4_cmd_mailbox *VAR_8,
        struct mlx4_cmd_mailbox *VAR_9,
        struct mlx4_cmd_info *VAR_10)
{
 int VAR_11;
 struct mlx4_qp_context *VAR_12 = VAR_8->buf + 8;
 int VAR_13 = VAR_7->in_modifier & 0x7fffff;
 struct res_qp *VAR_14;
 u8 VAR_15;
 u8 VAR_16 = VAR_12->pri_path.vlan_control;
 u8 VAR_17 = VAR_12->pri_path.fvl_rx;
 u8 VAR_18 = VAR_12->pri_path.fl;
 u8 VAR_19 = VAR_12->pri_path.vlan_index;
 u8 VAR_20 = VAR_12->pri_path.feup;

 VAR_11 = FUNC_1(VAR_5, VAR_6, VAR_12, VAR_8);
 if (VAR_11)
  return VAR_11;
 VAR_11 = FUNC_9(VAR_5, VAR_7, VAR_8, VAR_2, VAR_6);
 if (VAR_11)
  return VAR_11;

 if (FUNC_5(VAR_5, VAR_6, VAR_12, VAR_8))
  return -VAR_1;

 FUNC_7(VAR_5, VAR_6, VAR_8);
 FUNC_6(VAR_5, VAR_8, (u8)VAR_6);
 FUNC_0(VAR_5, VAR_7, VAR_12);
 VAR_15 = VAR_12->pri_path.sched_queue;

 VAR_11 = FUNC_2(VAR_5, VAR_6, VAR_13, VAR_3, &VAR_14);
 if (VAR_11)
  return VAR_11;
 if (VAR_14->com.from_state != VAR_4) {
  VAR_11 = -VAR_0;
  goto out;
 }

 VAR_11 = FUNC_8(VAR_5, VAR_8, VAR_6, VAR_13);
 if (VAR_11)
  goto out;

 VAR_11 = FUNC_3(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);
out:




 if (!VAR_11) {
  VAR_14->sched_queue = VAR_15;
  VAR_14->vlan_control = VAR_16;
  VAR_14->fvl_rx = VAR_17;
  VAR_14->pri_path_fl = VAR_18;
  VAR_14->vlan_index = VAR_19;
  VAR_14->feup = VAR_20;
 }
 FUNC_4(VAR_5, VAR_6, VAR_13, VAR_3);
 return VAR_11;
}
