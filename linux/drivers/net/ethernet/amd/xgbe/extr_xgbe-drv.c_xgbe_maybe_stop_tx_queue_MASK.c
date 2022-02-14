
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int queue_stopped; scalar_t__ xmit_more; } ;
struct xgbe_ring {TYPE_2__ tx; } ;
struct TYPE_3__ {int (* tx_start_xmit ) (struct xgbe_channel*,struct xgbe_ring*) ;} ;
struct xgbe_prv_data {TYPE_1__ hw_if; int netdev; } ;
struct xgbe_channel {int queue_index; struct xgbe_prv_data* pdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xgbe_prv_data*,int ,int ,char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct xgbe_channel*,struct xgbe_ring*) ;
 unsigned int FUNC_3 (struct xgbe_ring*) ;

__attribute__((used)) static int FUNC_4(struct xgbe_channel *VAR_2,
        struct xgbe_ring *VAR_3, unsigned int VAR_4)
{
 struct xgbe_prv_data *VAR_5 = VAR_2->pdata;

 if (VAR_4 > FUNC_3(VAR_3)) {
  FUNC_0(VAR_5, VAR_1, VAR_5->netdev,
      "Tx queue stopped, not enough descriptors available\n");
  FUNC_1(VAR_5->netdev, VAR_2->queue_index);
  VAR_3->tx.queue_stopped = 1;




  if (VAR_3->tx.xmit_more)
   VAR_5->hw_if.tx_start_xmit(VAR_2, VAR_3);

  return VAR_0;
 }

 return 0;
}
