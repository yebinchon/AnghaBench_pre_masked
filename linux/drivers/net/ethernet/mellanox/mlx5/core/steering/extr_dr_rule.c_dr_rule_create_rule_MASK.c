
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * nic_matcher; } ;
struct mlx5dr_rule {TYPE_2__ tx; TYPE_2__ rx; int rule_actions_list; struct mlx5dr_matcher* matcher; } ;
struct mlx5dr_matcher {int tx; int rx; TYPE_1__* tbl; } ;
struct mlx5dr_match_parameters {int dummy; } ;
struct mlx5dr_match_param {int dummy; } ;
struct mlx5dr_domain {int type; } ;
struct mlx5dr_action {int dummy; } ;
struct TYPE_3__ {struct mlx5dr_domain* dmn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;



 int FUNC_1 (struct mlx5dr_rule*,size_t,struct mlx5dr_action**) ;
 int FUNC_2 (struct mlx5dr_rule*,struct mlx5dr_match_param*,size_t,struct mlx5dr_action**) ;
 int FUNC_3 (struct mlx5dr_rule*,TYPE_2__*,struct mlx5dr_match_param*,size_t,struct mlx5dr_action**) ;
 int FUNC_4 (struct mlx5dr_rule*) ;
 int FUNC_5 (struct mlx5dr_matcher*,struct mlx5dr_match_parameters*,struct mlx5dr_match_param*) ;
 int FUNC_6 (struct mlx5dr_rule*) ;
 struct mlx5dr_rule* FUNC_7 (int,int ) ;
 int FUNC_8 (struct mlx5dr_domain*,char*) ;

__attribute__((used)) static struct mlx5dr_rule *
FUNC_9(struct mlx5dr_matcher *VAR_2,
      struct mlx5dr_match_parameters *VAR_3,
      size_t VAR_4,
      struct mlx5dr_action *VAR_5[])
{
 struct mlx5dr_domain *VAR_6 = VAR_2->tbl->dmn;
 struct mlx5dr_match_param VAR_7 = {};
 struct mlx5dr_rule *VAR_8;
 int VAR_9;

 if (!FUNC_5(VAR_2, VAR_3, &VAR_7))
  return ((void*)0);

 VAR_8 = FUNC_7(sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return ((void*)0);

 VAR_8->matcher = VAR_2;
 FUNC_0(&VAR_8->rule_actions_list);

 VAR_9 = FUNC_1(VAR_8, VAR_4, VAR_5);
 if (VAR_9)
  goto free_rule;

 switch (VAR_6->type) {
 case 129:
  VAR_8->rx.nic_matcher = &VAR_2->rx;
  VAR_9 = FUNC_3(VAR_8, &VAR_8->rx, &VAR_7,
           VAR_4, VAR_5);
  break;
 case 128:
  VAR_8->tx.nic_matcher = &VAR_2->tx;
  VAR_9 = FUNC_3(VAR_8, &VAR_8->tx, &VAR_7,
           VAR_4, VAR_5);
  break;
 case 130:
  VAR_8->rx.nic_matcher = &VAR_2->rx;
  VAR_8->tx.nic_matcher = &VAR_2->tx;
  VAR_9 = FUNC_2(VAR_8, &VAR_7,
           VAR_4, VAR_5);
  break;
 default:
  VAR_9 = -VAR_0;
  break;
 }

 if (VAR_9)
  goto remove_action_members;

 return VAR_8;

remove_action_members:
 FUNC_4(VAR_8);
free_rule:
 FUNC_6(VAR_8);
 FUNC_8(VAR_6, "Failed creating rule\n");
 return ((void*)0);
}
