
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5dr_domain {int dummy; } ;
struct mlx5dr_action {int dummy; } ;
struct TYPE_2__ {int flags; int vhca_id; int num; } ;
struct mlx5_flow_destination {TYPE_1__ vport; } ;
struct mlx5_flow_rule {struct mlx5_flow_destination dest_attr; } ;


 int VAR_0 ;
 struct mlx5dr_action* FUNC_0 (struct mlx5dr_domain*,int ,int,int ) ;

__attribute__((used)) static struct mlx5dr_action *FUNC_1(struct mlx5dr_domain *VAR_1,
       struct mlx5_flow_rule *VAR_2)
{
 struct mlx5_flow_destination *VAR_3 = &VAR_2->dest_attr;

 return FUNC_0(VAR_1, VAR_3->vport.num,
            VAR_3->vport.flags &
            VAR_0,
            VAR_3->vport.vhca_id);
}
