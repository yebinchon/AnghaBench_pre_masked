
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_pkt_reformat {int ns_type; } ;
struct mlx5_flow_root_namespace {TYPE_1__* cmds; } ;
struct mlx5_core_dev {int dummy; } ;
struct TYPE_2__ {int (* packet_reformat_dealloc ) (struct mlx5_flow_root_namespace*,struct mlx5_pkt_reformat*) ;} ;


 scalar_t__ FUNC_0 (int) ;
 struct mlx5_flow_root_namespace* FUNC_1 (struct mlx5_core_dev*,int ) ;
 int FUNC_2 (struct mlx5_pkt_reformat*) ;
 int FUNC_3 (struct mlx5_flow_root_namespace*,struct mlx5_pkt_reformat*) ;

void FUNC_4(struct mlx5_core_dev *VAR_0,
      struct mlx5_pkt_reformat *VAR_1)
{
 struct mlx5_flow_root_namespace *VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1->ns_type);
 if (FUNC_0(!VAR_2))
  return;
 VAR_2->cmds->packet_reformat_dealloc(VAR_2, VAR_1);
 FUNC_2(VAR_1);
}
