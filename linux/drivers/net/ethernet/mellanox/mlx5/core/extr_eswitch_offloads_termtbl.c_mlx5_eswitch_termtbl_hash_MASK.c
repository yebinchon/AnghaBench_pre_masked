
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int vhca_id; int num; } ;
struct mlx5_flow_destination {TYPE_1__ vport; } ;
struct mlx5_flow_act {int vlan; int action; } ;


 int FUNC_0 (void const*,int,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static u32
FUNC_2(struct mlx5_flow_act *VAR_0,
     struct mlx5_flow_destination *VAR_1)
{
 u32 VAR_2;

 VAR_2 = FUNC_1(VAR_0->action, 0);
 VAR_2 = FUNC_0((const void *)&VAR_0->vlan,
       sizeof(VAR_0->vlan), VAR_2);
 VAR_2 = FUNC_0((const void *)&VAR_1->vport.num,
       sizeof(VAR_1->vport.num), VAR_2);
 VAR_2 = FUNC_0((const void *)&VAR_1->vport.vhca_id,
       sizeof(VAR_1->vport.num), VAR_2);
 return VAR_2;
}
