
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {unsigned int channel_count; struct xgbe_channel** channel; } ;
struct xgbe_channel {int rx_ring; int tx_ring; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct xgbe_prv_data*,int ) ;

__attribute__((used)) static void FUNC_2(struct xgbe_prv_data *VAR_0)
{
 struct xgbe_channel *VAR_1;
 unsigned int VAR_2;

 FUNC_0("-->xgbe_free_ring_resources\n");

 for (VAR_2 = 0; VAR_2 < VAR_0->channel_count; VAR_2++) {
  VAR_1 = VAR_0->channel[VAR_2];
  FUNC_1(VAR_0, VAR_1->tx_ring);
  FUNC_1(VAR_0, VAR_1->rx_ring);
 }

 FUNC_0("<--xgbe_free_ring_resources\n");
}
