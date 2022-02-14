
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct offloads_fdb {scalar_t__ vlan_push_pop_refcount; } ;
struct mlx5_eswitch_rep {int vport; scalar_t__ vlan; scalar_t__ vlan_refcount; } ;
struct TYPE_4__ {struct offloads_fdb offloads; } ;
struct mlx5_eswitch {int state_lock; int dev; TYPE_1__ fdb_table; } ;
struct mlx5_esw_flow_attr {int action; TYPE_3__* dests; int vlan_handled; } ;
struct TYPE_6__ {TYPE_2__* rep; } ;
struct TYPE_5__ {scalar_t__ vport; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mlx5_eswitch*,int ,int ,int ,int ) ;
 int FUNC_1 (struct mlx5_eswitch*,int ) ;
 struct mlx5_eswitch_rep* FUNC_2 (struct mlx5_esw_flow_attr*,int,int) ;
 scalar_t__ FUNC_3 (int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct mlx5_eswitch *VAR_5,
     struct mlx5_esw_flow_attr *VAR_6)
{
 struct offloads_fdb *VAR_7 = &VAR_5->fdb_table.offloads;
 struct mlx5_eswitch_rep *VAR_8 = ((void*)0);
 bool VAR_9, VAR_10, VAR_11;
 int VAR_12 = 0;


 if (FUNC_3(VAR_5->dev, 1))
  return 0;

 if (!VAR_6->vlan_handled)
  return 0;

 VAR_9 = !!(VAR_6->action & VAR_2);
 VAR_10 = !!(VAR_6->action & VAR_1);
 VAR_11 = !!(VAR_6->action & VAR_0);

 FUNC_4(&VAR_5->state_lock);

 VAR_8 = FUNC_2(VAR_6, VAR_9, VAR_10);

 if (!VAR_9 && !VAR_10 && VAR_11) {

  if (VAR_6->dests[0].rep->vport == VAR_3)
   VAR_8->vlan_refcount--;

  goto out;
 }

 if (VAR_9) {
  VAR_8->vlan_refcount--;
  if (VAR_8->vlan_refcount)
   goto skip_unset_push;

  VAR_8->vlan = 0;
  VAR_12 = FUNC_0(VAR_5, VAR_8->vport,
          0, 0, VAR_4);
  if (VAR_12)
   goto out;
 }

skip_unset_push:
 VAR_7->vlan_push_pop_refcount--;
 if (VAR_7->vlan_push_pop_refcount)
  goto out;


 VAR_12 = FUNC_1(VAR_5, 0);

out:
 FUNC_5(&VAR_5->state_lock);
 return VAR_12;
}
