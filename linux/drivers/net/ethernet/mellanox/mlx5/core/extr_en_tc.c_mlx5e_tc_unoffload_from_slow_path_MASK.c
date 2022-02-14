
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_tc_flow {int esw_attr; } ;
struct mlx5_eswitch {int dummy; } ;
struct mlx5_esw_flow_attr {int dest_chain; scalar_t__ split_count; int action; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mlx5e_tc_flow*,int ) ;
 int FUNC_1 (struct mlx5_esw_flow_attr*,int ,int) ;
 int FUNC_2 (struct mlx5_eswitch*,struct mlx5e_tc_flow*,struct mlx5_esw_flow_attr*) ;

__attribute__((used)) static void
FUNC_3(struct mlx5_eswitch *VAR_3,
      struct mlx5e_tc_flow *VAR_4,
      struct mlx5_esw_flow_attr *VAR_5)
{
 FUNC_1(VAR_5, VAR_4->esw_attr, sizeof(*VAR_5));
 VAR_5->action = VAR_1;
 VAR_5->split_count = 0;
 VAR_5->dest_chain = VAR_0;
 FUNC_2(VAR_3, VAR_4, VAR_5);
 FUNC_0(VAR_4, VAR_2);
}
