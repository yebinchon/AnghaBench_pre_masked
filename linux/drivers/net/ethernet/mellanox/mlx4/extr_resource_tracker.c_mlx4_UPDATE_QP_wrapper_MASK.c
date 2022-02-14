
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned long long u64 ;
typedef int u32 ;
struct res_qp {int sched_queue; } ;
struct mlx4_vhcr {int in_modifier; } ;
struct TYPE_5__ {int grh_mylmc; } ;
struct TYPE_6__ {TYPE_2__ pri_path; } ;
struct mlx4_update_qp_context {TYPE_3__ qp_context; scalar_t__ secondary_addr_path_mask; scalar_t__ qp_mask; int primary_addr_path_mask; } ;
struct TYPE_4__ {int flags2; } ;
struct mlx4_dev {TYPE_1__ caps; } ;
struct mlx4_cmd_mailbox {int dma; scalar_t__ buf; } ;
struct mlx4_cmd_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long long VAR_6 ;
 unsigned long long VAR_7 ;
 unsigned long long VAR_8 ;
 int VAR_9 ;
 unsigned long long FUNC_0 (int ) ;
 int FUNC_1 (struct mlx4_dev*,int,int,int ,struct res_qp**) ;
 int FUNC_2 (struct mlx4_dev*,int,unsigned int,int,unsigned long long*) ;
 int FUNC_3 (struct mlx4_dev*,int ,int,int ,int ,int ,int ) ;
 int FUNC_4 (struct mlx4_dev*,char*,int,...) ;
 int FUNC_5 (struct mlx4_dev*,char*,int) ;
 int FUNC_6 (struct mlx4_dev*,int,int,int ) ;

int FUNC_7(struct mlx4_dev *VAR_10, int VAR_11,
      struct mlx4_vhcr *VAR_12,
      struct mlx4_cmd_mailbox *VAR_13,
      struct mlx4_cmd_mailbox *VAR_14,
      struct mlx4_cmd_info *VAR_15)
{
 int VAR_16;
 u32 VAR_17 = VAR_12->in_modifier & 0xffffff;
 struct res_qp *VAR_18;
 u64 VAR_19;
 unsigned VAR_20;
 u64 VAR_21;
 struct mlx4_update_qp_context *VAR_22;
 int VAR_23;

 VAR_22 = (struct mlx4_update_qp_context *)VAR_13->buf;

 VAR_21 = FUNC_0(VAR_22->primary_addr_path_mask);
 if (VAR_22->qp_mask || VAR_22->secondary_addr_path_mask ||
     (VAR_21 & ~VAR_8))
  return -VAR_1;

 if ((VAR_21 &
      (1ULL << VAR_6)) &&
  !(VAR_10->caps.flags2 &
    VAR_5)) {
  FUNC_5(VAR_10, "Src check LB for slave %d isn't supported\n",
     VAR_11);
  return -VAR_0;
 }


 VAR_16 = FUNC_1(VAR_10, VAR_11, VAR_17, VAR_9, &VAR_18);
 if (VAR_16) {
  FUNC_4(VAR_10, "Updating qpn 0x%x for slave %d rejected\n", VAR_17, VAR_11);
  return VAR_16;
 }

 VAR_20 = (VAR_18->sched_queue >> 6 & 1) + 1;

 if (VAR_21 & (1ULL << VAR_7)) {
  VAR_23 = VAR_22->qp_context.pri_path.grh_mylmc;
  VAR_16 = FUNC_2(VAR_10, VAR_11, VAR_20,
      VAR_23, &VAR_19);

  if (VAR_16) {
   FUNC_4(VAR_10, "Failed to update qpn 0x%x, MAC is invalid. smac_ix: %d\n",
     VAR_17, VAR_23);
   goto err_mac;
  }
 }

 VAR_16 = FUNC_3(VAR_10, VAR_13->dma,
         VAR_12->in_modifier, 0,
         VAR_4, VAR_3,
         VAR_2);
 if (VAR_16) {
  FUNC_4(VAR_10, "Failed to update qpn on qpn 0x%x, command failed\n", VAR_17);
  goto err_mac;
 }

err_mac:
 FUNC_6(VAR_10, VAR_11, VAR_17, VAR_9);
 return VAR_16;
}
