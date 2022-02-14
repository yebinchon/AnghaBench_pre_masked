
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_tc_flow {int esw_attr; } ;
struct mlx5_flow_spec {int dummy; } ;
struct mlx5_flow_handle {int dummy; } ;
struct mlx5_eswitch {int dummy; } ;
struct mlx5_esw_flow_attr {int dest_chain; scalar_t__ split_count; int action; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5_flow_handle*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct mlx5e_tc_flow*,int ) ;
 int FUNC_2 (struct mlx5_esw_flow_attr*,int ,int) ;
 struct mlx5_flow_handle* FUNC_3 (struct mlx5_eswitch*,struct mlx5e_tc_flow*,struct mlx5_flow_spec*,struct mlx5_esw_flow_attr*) ;

__attribute__((used)) static struct mlx5_flow_handle *
FUNC_4(struct mlx5_eswitch *VAR_3,
         struct mlx5e_tc_flow *VAR_4,
         struct mlx5_flow_spec *VAR_5,
         struct mlx5_esw_flow_attr *VAR_6)
{
 struct mlx5_flow_handle *VAR_7;

 FUNC_2(VAR_6, VAR_4->esw_attr, sizeof(*VAR_6));
 VAR_6->action = VAR_1;
 VAR_6->split_count = 0;
 VAR_6->dest_chain = VAR_0;

 VAR_7 = FUNC_3(VAR_3, VAR_4, VAR_5, VAR_6);
 if (!FUNC_0(VAR_7))
  FUNC_1(VAR_4, VAR_2);

 return VAR_7;
}
