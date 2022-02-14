
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_desc_if {int (* alloc_ring_resources ) (struct xgbe_prv_data*) ;} ;
struct xgbe_prv_data {int rx_buf_size; scalar_t__ new_rx_ring_count; scalar_t__ rx_ring_count; scalar_t__ new_tx_ring_count; scalar_t__ tx_ring_count; scalar_t__ tx_q_count; struct net_device* netdev; struct xgbe_desc_if desc_if; } ;
struct net_device {int mtu; } ;


 int FUNC_0 (struct xgbe_prv_data*) ;
 int FUNC_1 (struct xgbe_prv_data*) ;
 int FUNC_2 (struct net_device*,int ) ;
 int FUNC_3 (struct xgbe_prv_data*) ;
 int FUNC_4 (struct xgbe_prv_data*) ;

__attribute__((used)) static int FUNC_5(struct xgbe_prv_data *VAR_0)
{
 struct xgbe_desc_if *VAR_1 = &VAR_0->desc_if;
 struct net_device *VAR_2 = VAR_0->netdev;
 int VAR_3;

 if (VAR_0->new_tx_ring_count) {
  VAR_0->tx_ring_count = VAR_0->new_tx_ring_count;
  VAR_0->tx_q_count = VAR_0->tx_ring_count;
  VAR_0->new_tx_ring_count = 0;
 }

 if (VAR_0->new_rx_ring_count) {
  VAR_0->rx_ring_count = VAR_0->new_rx_ring_count;
  VAR_0->new_rx_ring_count = 0;
 }


 VAR_0->rx_buf_size = FUNC_2(VAR_2, VAR_2->mtu);


 VAR_3 = FUNC_1(VAR_0);
 if (VAR_3)
  return VAR_3;


 VAR_3 = VAR_1->alloc_ring_resources(VAR_0);
 if (VAR_3)
  goto err_channels;


 FUNC_4(VAR_0);

 return 0;

err_channels:
 FUNC_3(VAR_0);

 return VAR_3;
}
