
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5e_tc_flow_parse_attr {int dummy; } ;
struct mlx5e_priv {struct mlx5_core_dev* mdev; } ;
struct mlx5_eswitch_rep {int dummy; } ;
struct mlx5_eswitch {int dev; } ;
struct mlx5_esw_flow_attr {struct mlx5_core_dev* counter_dev; struct mlx5_core_dev* in_mdev; struct mlx5_eswitch_rep* in_rep; int prio; int chain; struct mlx5e_tc_flow_parse_attr* parse_attr; } ;
struct TYPE_4__ {struct mlx5_eswitch* eswitch; } ;
struct mlx5_core_dev {TYPE_2__ priv; } ;
struct TYPE_3__ {int prio; int chain_index; } ;
struct flow_cls_offload {TYPE_1__ common; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_1(struct mlx5_esw_flow_attr *VAR_2,
    struct mlx5e_priv *VAR_3,
    struct mlx5e_tc_flow_parse_attr *VAR_4,
    struct flow_cls_offload *VAR_5,
    struct mlx5_eswitch_rep *VAR_6,
    struct mlx5_core_dev *VAR_7)
{
 struct mlx5_eswitch *VAR_8 = VAR_3->mdev->priv.eswitch;

 VAR_2->parse_attr = VAR_4;
 VAR_2->chain = VAR_5->common.chain_index;
 VAR_2->prio = VAR_5->common.prio;

 VAR_2->in_rep = VAR_6;
 VAR_2->in_mdev = VAR_7;

 if (FUNC_0(VAR_8->dev, VAR_1) ==
     VAR_0)
  VAR_2->counter_dev = VAR_7;
 else
  VAR_2->counter_dev = VAR_3->mdev;
}
