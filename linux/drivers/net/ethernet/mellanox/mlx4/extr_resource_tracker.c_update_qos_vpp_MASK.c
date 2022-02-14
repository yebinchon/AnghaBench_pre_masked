
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_vf_immed_vlan_work {int qos_vport; } ;
struct TYPE_2__ {int qos_vport; } ;
struct mlx4_update_qp_context {TYPE_1__ qp_context; int qp_mask; } ;


 unsigned long long VAR_0 ;
 int FUNC_0 (unsigned long long) ;

__attribute__((used)) static void FUNC_1(struct mlx4_update_qp_context *VAR_1,
      struct mlx4_vf_immed_vlan_work *VAR_2)
{
 VAR_1->qp_mask |= FUNC_0(1ULL << VAR_0);
 VAR_1->qp_context.qos_vport = VAR_2->qos_vport;
}
