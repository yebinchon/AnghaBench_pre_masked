
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdp_umem {int dummy; } ;
struct i40e_ring {int queue_index; TYPE_1__* vsi; } ;
struct TYPE_2__ {int netdev; int af_xdp_zc_qps; scalar_t__ alloc_queue_pairs; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (struct i40e_ring*) ;
 int FUNC_2 (int,int ) ;
 struct xdp_umem* FUNC_3 (int ,int) ;

__attribute__((used)) static struct xdp_umem *FUNC_4(struct i40e_ring *VAR_0)
{
 bool VAR_1 = FUNC_0(VAR_0->vsi);
 int VAR_2 = VAR_0->queue_index;

 if (FUNC_1(VAR_0))
  VAR_2 -= VAR_0->vsi->alloc_queue_pairs;

 if (!VAR_1 || !FUNC_2(VAR_2, VAR_0->vsi->af_xdp_zc_qps))
  return ((void*)0);

 return FUNC_3(VAR_0->vsi->netdev, VAR_2);
}
