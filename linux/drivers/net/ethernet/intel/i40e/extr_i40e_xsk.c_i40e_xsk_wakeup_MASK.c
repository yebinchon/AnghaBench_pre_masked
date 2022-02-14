
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct net_device {int dummy; } ;
struct i40e_vsi {size_t num_queue_pairs; struct i40e_ring** xdp_rings; int state; } ;
struct i40e_ring {TYPE_1__* q_vector; int xsk_umem; } ;
struct i40e_netdev_priv {struct i40e_vsi* vsi; } ;
struct TYPE_2__ {int napi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct i40e_vsi*) ;
 int FUNC_1 (struct i40e_vsi*,TYPE_1__*) ;
 int FUNC_2 (int *) ;
 struct i40e_netdev_priv* FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (int ,int ) ;

int FUNC_5(struct net_device *VAR_3, u32 VAR_4, u32 VAR_5)
{
 struct i40e_netdev_priv *VAR_6 = FUNC_3(VAR_3);
 struct i40e_vsi *VAR_7 = VAR_6->vsi;
 struct i40e_ring *VAR_8;

 if (FUNC_4(VAR_2, VAR_7->state))
  return -VAR_0;

 if (!FUNC_0(VAR_7))
  return -VAR_1;

 if (VAR_4 >= VAR_7->num_queue_pairs)
  return -VAR_1;

 if (!VAR_7->xdp_rings[VAR_4]->xsk_umem)
  return -VAR_1;

 VAR_8 = VAR_7->xdp_rings[VAR_4];







 if (!FUNC_2(&VAR_8->q_vector->napi))
  FUNC_1(VAR_7, VAR_8->q_vector);

 return 0;
}
