
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_flow_act {int action; int * vlan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct mlx5_flow_act *VAR_2,
      struct mlx5_flow_act *VAR_3)
{
 if (!(VAR_2->action & VAR_0))
  return;

 VAR_2->action &= ~VAR_0;
 VAR_3->action |= VAR_0;
 FUNC_0(&VAR_3->vlan[0], &VAR_2->vlan[0], sizeof(VAR_2->vlan[0]));
 FUNC_1(&VAR_2->vlan[0], 0, sizeof(VAR_2->vlan[0]));

 if (!(VAR_2->action & VAR_1))
  return;

 VAR_2->action &= ~VAR_1;
 VAR_3->action |= VAR_1;
 FUNC_0(&VAR_3->vlan[1], &VAR_2->vlan[1], sizeof(VAR_2->vlan[1]));
 FUNC_1(&VAR_2->vlan[1], 0, sizeof(VAR_2->vlan[1]));
}
