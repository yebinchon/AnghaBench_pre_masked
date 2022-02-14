
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_flow_handle {int num_rules; TYPE_1__** rule; } ;
struct mlx5_flow_destination {int dummy; } ;
struct TYPE_2__ {int dest_attr; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,struct mlx5_flow_destination*) ;
 scalar_t__ FUNC_1 (struct mlx5_flow_destination*,int *) ;

int FUNC_2(struct mlx5_flow_handle *VAR_1,
     struct mlx5_flow_destination *VAR_2,
     struct mlx5_flow_destination *VAR_3)
{
 int VAR_4;

 if (!VAR_3) {
  if (VAR_1->num_rules != 1)
   return -VAR_0;
  return FUNC_0(VAR_1->rule[0],
           VAR_2);
 }

 for (VAR_4 = 0; VAR_4 < VAR_1->num_rules; VAR_4++) {
  if (FUNC_1(VAR_2, &VAR_1->rule[VAR_4]->dest_attr))
   return FUNC_0(VAR_1->rule[VAR_4],
            VAR_2);
 }

 return -VAR_0;
}
