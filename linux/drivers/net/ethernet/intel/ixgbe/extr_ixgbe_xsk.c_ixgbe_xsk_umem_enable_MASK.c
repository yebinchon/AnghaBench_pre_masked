
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct xdp_umem_fq_reuse {int dummy; } ;
struct xdp_umem {int dummy; } ;
struct net_device {scalar_t__ real_num_rx_queues; scalar_t__ real_num_tx_queues; } ;
struct ixgbe_adapter {scalar_t__ num_rx_queues; struct net_device* netdev; int af_xdp_zc_qps; TYPE_1__** rx_ring; } ;
struct TYPE_2__ {int count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ixgbe_adapter*) ;
 int FUNC_1 (struct ixgbe_adapter*,scalar_t__) ;
 int FUNC_2 (struct ixgbe_adapter*,scalar_t__) ;
 int FUNC_3 (struct ixgbe_adapter*,struct xdp_umem*) ;
 int FUNC_4 (struct net_device*,scalar_t__,int ) ;
 scalar_t__ FUNC_5 (struct net_device*) ;
 int FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (int ) ;
 struct xdp_umem_fq_reuse* FUNC_8 (int ) ;
 int FUNC_9 (struct xdp_umem*,struct xdp_umem_fq_reuse*) ;

__attribute__((used)) static int FUNC_10(struct ixgbe_adapter *VAR_3,
     struct xdp_umem *VAR_4,
     u16 VAR_5)
{
 struct net_device *VAR_6 = VAR_3->netdev;
 struct xdp_umem_fq_reuse *VAR_7;
 bool VAR_8;
 int VAR_9;

 if (VAR_5 >= VAR_3->num_rx_queues)
  return -VAR_0;

 if (VAR_5 >= VAR_6->real_num_rx_queues ||
     VAR_5 >= VAR_6->real_num_tx_queues)
  return -VAR_0;

 VAR_7 = FUNC_8(VAR_3->rx_ring[0]->count);
 if (!VAR_7)
  return -VAR_1;

 FUNC_7(FUNC_9(VAR_4, VAR_7));

 VAR_9 = FUNC_3(VAR_3, VAR_4);
 if (VAR_9)
  return VAR_9;

 VAR_8 = FUNC_5(VAR_3->netdev) &&
       FUNC_0(VAR_3);

 if (VAR_8)
  FUNC_1(VAR_3, VAR_5);

 FUNC_6(VAR_5, VAR_3->af_xdp_zc_qps);

 if (VAR_8) {
  FUNC_2(VAR_3, VAR_5);


  VAR_9 = FUNC_4(VAR_3->netdev, VAR_5, VAR_2);
  if (VAR_9)
   return VAR_9;
 }

 return 0;
}
