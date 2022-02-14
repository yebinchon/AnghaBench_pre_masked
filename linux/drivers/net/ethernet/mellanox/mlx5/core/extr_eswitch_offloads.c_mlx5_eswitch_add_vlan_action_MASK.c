
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct offloads_fdb {int vlan_push_pop_refcount; } ;
struct mlx5_eswitch_rep {scalar_t__ vlan_refcount; int vlan; int vport; } ;
struct TYPE_4__ {struct offloads_fdb offloads; } ;
struct mlx5_eswitch {int state_lock; int dev; TYPE_1__ fdb_table; } ;
struct mlx5_esw_flow_attr {int action; int vlan_handled; int * vlan_vid; TYPE_3__* dests; int dest_chain; } ;
struct TYPE_6__ {TYPE_2__* rep; } ;
struct TYPE_5__ {scalar_t__ vport; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct mlx5_eswitch*,int ,int ,int ,int) ;
 int FUNC_1 (struct mlx5_esw_flow_attr*,int,int,int) ;
 int FUNC_2 (struct mlx5_eswitch*,int) ;
 struct mlx5_eswitch_rep* FUNC_3 (struct mlx5_esw_flow_attr*,int,int) ;
 scalar_t__ FUNC_4 (int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct mlx5_eswitch *VAR_6,
     struct mlx5_esw_flow_attr *VAR_7)
{
 struct offloads_fdb *VAR_8 = &VAR_6->fdb_table.offloads;
 struct mlx5_eswitch_rep *VAR_9 = ((void*)0);
 bool VAR_10, VAR_11, VAR_12;
 int VAR_13 = 0;


 if (FUNC_4(VAR_6->dev, 1))
  return 0;

 VAR_10 = !!(VAR_7->action & VAR_2);
 VAR_11 = !!(VAR_7->action & VAR_1);
 VAR_12 = !!((VAR_7->action & VAR_0) &&
     !VAR_7->dest_chain);

 FUNC_5(&VAR_6->state_lock);

 VAR_13 = FUNC_1(VAR_7, VAR_10, VAR_11, VAR_12);
 if (VAR_13)
  goto unlock;

 VAR_7->vlan_handled = 0;

 VAR_9 = FUNC_3(VAR_7, VAR_10, VAR_11);

 if (!VAR_10 && !VAR_11 && VAR_12) {

  if (VAR_7->dests[0].rep->vport == VAR_3) {
   VAR_9->vlan_refcount++;
   VAR_7->vlan_handled = 1;
  }

  goto unlock;
 }

 if (!VAR_10 && !VAR_11)
  goto unlock;

 if (!(VAR_8->vlan_push_pop_refcount)) {

  VAR_13 = FUNC_2(VAR_6, VAR_5);
  if (VAR_13)
   goto out;
 }
 VAR_8->vlan_push_pop_refcount++;

 if (VAR_10) {
  if (VAR_9->vlan_refcount)
   goto skip_set_push;

  VAR_13 = FUNC_0(VAR_6, VAR_9->vport, VAR_7->vlan_vid[0], 0,
          VAR_4 | VAR_5);
  if (VAR_13)
   goto out;
  VAR_9->vlan = VAR_7->vlan_vid[0];
skip_set_push:
  VAR_9->vlan_refcount++;
 }
out:
 if (!VAR_13)
  VAR_7->vlan_handled = 1;
unlock:
 FUNC_6(&VAR_6->state_lock);
 return VAR_13;
}
