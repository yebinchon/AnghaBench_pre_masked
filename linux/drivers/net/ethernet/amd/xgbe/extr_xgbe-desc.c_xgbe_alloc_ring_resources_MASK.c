
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {unsigned int channel_count; int netdev; int rx_desc_count; int tx_desc_count; struct xgbe_channel** channel; } ;
struct xgbe_channel {int rx_ring; int name; int tx_ring; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct xgbe_prv_data*,int ,int ,char*,int ) ;
 int FUNC_2 (struct xgbe_prv_data*) ;
 int FUNC_3 (struct xgbe_prv_data*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct xgbe_prv_data *VAR_1)
{
 struct xgbe_channel *VAR_2;
 unsigned int VAR_3;
 int VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_1->channel_count; VAR_3++) {
  VAR_2 = VAR_1->channel[VAR_3];
  FUNC_1(VAR_1, VAR_0, VAR_1->netdev, "%s - Tx ring:\n",
     VAR_2->name);

  VAR_4 = FUNC_3(VAR_1, VAR_2->tx_ring,
         VAR_1->tx_desc_count);
  if (VAR_4) {
   FUNC_0(VAR_1->netdev,
         "error initializing Tx ring\n");
   goto err_ring;
  }

  FUNC_1(VAR_1, VAR_0, VAR_1->netdev, "%s - Rx ring:\n",
     VAR_2->name);

  VAR_4 = FUNC_3(VAR_1, VAR_2->rx_ring,
         VAR_1->rx_desc_count);
  if (VAR_4) {
   FUNC_0(VAR_1->netdev,
         "error initializing Rx ring\n");
   goto err_ring;
  }
 }

 return 0;

err_ring:
 FUNC_2(VAR_1);

 return VAR_4;
}
