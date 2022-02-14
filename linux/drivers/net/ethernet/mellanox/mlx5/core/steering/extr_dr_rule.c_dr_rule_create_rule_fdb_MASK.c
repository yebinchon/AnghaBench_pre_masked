
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5dr_rule {int rx; int tx; } ;
struct mlx5dr_match_param {int dummy; } ;
struct mlx5dr_action {int dummy; } ;


 int FUNC_0 (struct mlx5dr_rule*,int *,struct mlx5dr_match_param*,size_t,struct mlx5dr_action**) ;
 int FUNC_1 (struct mlx5dr_rule*,int *) ;
 int FUNC_2 (struct mlx5dr_match_param*,struct mlx5dr_match_param*,int) ;

__attribute__((used)) static int
FUNC_3(struct mlx5dr_rule *VAR_0,
   struct mlx5dr_match_param *VAR_1,
   size_t VAR_2,
   struct mlx5dr_action *VAR_3[])
{
 struct mlx5dr_match_param VAR_4 = {};
 int VAR_5;




 FUNC_2(&VAR_4, VAR_1, sizeof(struct mlx5dr_match_param));

 VAR_5 = FUNC_0(VAR_0, &VAR_0->rx, VAR_1,
          VAR_2, VAR_3);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_0(VAR_0, &VAR_0->tx, &VAR_4,
          VAR_2, VAR_3);
 if (VAR_5)
  goto destroy_rule_nic_rx;

 return 0;

destroy_rule_nic_rx:
 FUNC_1(VAR_0, &VAR_0->rx);
 return VAR_5;
}
