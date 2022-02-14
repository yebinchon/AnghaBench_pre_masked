
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef size_t u32 ;
struct net_device {int dummy; } ;
struct ixgbe_ring {TYPE_1__* q_vector; int xsk_umem; } ;
struct ixgbe_adapter {size_t num_xdp_queues; struct ixgbe_ring** xdp_ring; int xdp_prog; int state; } ;
struct TYPE_2__ {int v_idx; int napi; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (struct ixgbe_adapter*,int ) ;
 int FUNC_3 (int *) ;
 struct ixgbe_adapter* FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (int ,int *) ;

int FUNC_6(struct net_device *VAR_3, u32 VAR_4, u32 VAR_5)
{
 struct ixgbe_adapter *VAR_6 = FUNC_4(VAR_3);
 struct ixgbe_ring *VAR_7;

 if (FUNC_5(VAR_2, &VAR_6->state))
  return -VAR_0;

 if (!FUNC_1(VAR_6->xdp_prog))
  return -VAR_1;

 if (VAR_4 >= VAR_6->num_xdp_queues)
  return -VAR_1;

 if (!VAR_6->xdp_ring[VAR_4]->xsk_umem)
  return -VAR_1;

 VAR_7 = VAR_6->xdp_ring[VAR_4];
 if (!FUNC_3(&VAR_7->q_vector->napi)) {
  u64 VAR_8 = FUNC_0(VAR_7->q_vector->v_idx);

  FUNC_2(VAR_6, VAR_8);
 }

 return 0;
}
