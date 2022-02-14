
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5dr_rule_action_member {struct mlx5dr_action* action; int list; } ;
struct mlx5dr_rule {int rule_actions_list; } ;
struct mlx5dr_action {int refcount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct mlx5dr_rule*) ;
 struct mlx5dr_rule_action_member* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct mlx5dr_rule *VAR_2,
          size_t VAR_3,
          struct mlx5dr_action *VAR_4[])
{
 struct mlx5dr_rule_action_member *VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_1);
  if (!VAR_5)
   goto free_action_members;

  VAR_5->action = VAR_4[VAR_6];
  FUNC_0(&VAR_5->list);
  FUNC_3(&VAR_5->list, &VAR_2->rule_actions_list);
  FUNC_4(&VAR_5->action->refcount);
 }

 return 0;

free_action_members:
 FUNC_1(VAR_2);
 return -VAR_0;
}
