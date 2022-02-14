
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ num; scalar_t__ vhca_id; } ;
struct mlx5_flow_destination {TYPE_1__ vport; } ;
struct mlx5_flow_act {scalar_t__ action; int vlan; } ;


 scalar_t__ FUNC_0 (int *,int *,int) ;

__attribute__((used)) static int
FUNC_1(struct mlx5_flow_act *VAR_0,
    struct mlx5_flow_destination *VAR_1,
    struct mlx5_flow_act *VAR_2,
    struct mlx5_flow_destination *VAR_3)
{
 return VAR_0->action != VAR_2->action ||
        VAR_1->vport.num != VAR_3->vport.num ||
        VAR_1->vport.vhca_id != VAR_3->vport.vhca_id ||
        FUNC_0(&VAR_0->vlan, &VAR_2->vlan,
        sizeof(VAR_0->vlan));
}
