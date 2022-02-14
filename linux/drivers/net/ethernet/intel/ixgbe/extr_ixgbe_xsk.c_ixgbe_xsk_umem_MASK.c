
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdp_umem {int dummy; } ;
struct ixgbe_ring {int ring_idx; } ;
struct ixgbe_adapter {int netdev; int af_xdp_zc_qps; int xdp_prog; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 struct xdp_umem* FUNC_2 (int ,int) ;

struct xdp_umem *FUNC_3(struct ixgbe_adapter *VAR_0,
    struct ixgbe_ring *VAR_1)
{
 bool VAR_2 = FUNC_0(VAR_0->xdp_prog);
 int VAR_3 = VAR_1->ring_idx;

 if (!VAR_2 || !FUNC_1(VAR_3, VAR_0->af_xdp_zc_qps))
  return ((void*)0);

 return FUNC_2(VAR_0->netdev, VAR_3);
}
