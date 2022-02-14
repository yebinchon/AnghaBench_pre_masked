
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
struct mlx5_flow_rule {int dest_attr; TYPE_1__ node; int next_ft; } ;
struct mlx5_flow_destination {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct mlx5_flow_rule* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,struct mlx5_flow_destination*,int) ;

__attribute__((used)) static struct mlx5_flow_rule *FUNC_3(struct mlx5_flow_destination *VAR_2)
{
 struct mlx5_flow_rule *VAR_3;

 VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return ((void*)0);

 FUNC_0(&VAR_3->next_ft);
 VAR_3->node.type = VAR_0;
 if (VAR_2)
  FUNC_2(&VAR_3->dest_attr, VAR_2, sizeof(*VAR_2));

 return VAR_3;
}
