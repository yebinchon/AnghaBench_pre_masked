
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_eswitch_rep {scalar_t__ vport; scalar_t__ vlan; scalar_t__ vlan_refcount; } ;
struct mlx5_esw_flow_attr {scalar_t__* vlan_vid; TYPE_1__* dests; struct mlx5_eswitch_rep* in_rep; } ;
struct TYPE_2__ {struct mlx5_eswitch_rep* rep; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_0(struct mlx5_esw_flow_attr *VAR_2,
         bool VAR_3, bool VAR_4, bool VAR_5)
{
 struct mlx5_eswitch_rep *VAR_6, *VAR_7;

 if ((VAR_3 || VAR_4) && !VAR_5)
  goto out_notsupp;

 VAR_6 = VAR_2->in_rep;
 VAR_7 = VAR_2->dests[0].rep;

 if (VAR_3 && VAR_6->vport == VAR_1)
  goto out_notsupp;

 if (VAR_4 && VAR_7->vport == VAR_1)
  goto out_notsupp;


 if (!VAR_3 && !VAR_4 && VAR_5)
  if (VAR_6->vlan && VAR_7->vport == VAR_1)
   goto out_notsupp;




 if (VAR_3 && VAR_6->vlan_refcount && (VAR_6->vlan != VAR_2->vlan_vid[0]))
  goto out_notsupp;

 return 0;

out_notsupp:
 return -VAR_0;
}
