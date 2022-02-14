
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ num; int flags; scalar_t__ vhca_id; TYPE_1__* pkt_reformat; } ;
struct mlx5_flow_destination {scalar_t__ type; scalar_t__ ft; scalar_t__ tir_num; scalar_t__ ft_num; TYPE_2__ vport; } ;
struct TYPE_3__ {scalar_t__ id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static bool FUNC_0(struct mlx5_flow_destination *VAR_6,
    struct mlx5_flow_destination *VAR_7)
{
 if (VAR_6->type == VAR_7->type) {
  if ((VAR_6->type == VAR_3 &&
       VAR_6->vport.num == VAR_7->vport.num &&
       VAR_6->vport.flags == VAR_7->vport.flags &&
       ((VAR_6->vport.flags & VAR_5) ?
        (VAR_6->vport.vhca_id == VAR_7->vport.vhca_id) : 1) &&
       ((VAR_6->vport.flags & VAR_4) ?
        (VAR_6->vport.pkt_reformat->id ==
         VAR_7->vport.pkt_reformat->id) : 1)) ||
      (VAR_6->type == VAR_0 &&
       VAR_6->ft == VAR_7->ft) ||
      (VAR_6->type == VAR_2 &&
       VAR_6->tir_num == VAR_7->tir_num) ||
      (VAR_6->type == VAR_1 &&
       VAR_6->ft_num == VAR_7->ft_num))
   return 1;
 }

 return 0;
}
