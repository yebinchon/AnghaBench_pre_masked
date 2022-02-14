
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5dr_ste {int rule_list; } ;
struct mlx5dr_rule_rx_tx {int rule_members_list; } ;
struct mlx5dr_rule_member {int use_ste_list; int list; struct mlx5dr_ste* ste; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mlx5dr_rule_member* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static int FUNC_2(struct mlx5dr_rule_rx_tx *VAR_2,
         struct mlx5dr_ste *VAR_3)
{
 struct mlx5dr_rule_member *VAR_4;

 VAR_4 = FUNC_0(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->ste = VAR_3;
 FUNC_1(&VAR_4->list, &VAR_2->rule_members_list);

 FUNC_1(&VAR_4->use_ste_list, &VAR_3->rule_list);

 return 0;
}
