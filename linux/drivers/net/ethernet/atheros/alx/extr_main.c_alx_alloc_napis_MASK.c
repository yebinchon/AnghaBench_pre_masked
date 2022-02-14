
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct alx_tx_queue {int queue_idx; int * dev; int netdev; int count; int c_reg; int p_reg; } ;
struct alx_rx_queue {int * dev; int netdev; int count; scalar_t__ queue_idx; struct alx_napi* np; } ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct alx_priv {int num_napi; int num_txq; int dev; int int_mask; TYPE_2__ hw; int rx_ringsz; struct alx_napi** qnapi; int tx_ringsz; } ;
struct alx_napi {int vec_mask; struct alx_rx_queue* rxq; struct alx_tx_queue* txq; int napi; struct alx_priv* alx; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct alx_priv*) ;
 int VAR_3 ;
 void* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int *,int ,int) ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;

__attribute__((used)) static int FUNC_4(struct alx_priv *VAR_8)
{
 struct alx_napi *VAR_9;
 struct alx_rx_queue *VAR_10;
 struct alx_tx_queue *VAR_11;
 int VAR_12;

 VAR_8->int_mask &= ~VAR_0;


 for (VAR_12 = 0; VAR_12 < VAR_8->num_napi; VAR_12++) {
  VAR_9 = FUNC_1(sizeof(struct alx_napi), VAR_2);
  if (!VAR_9)
   goto err_out;

  VAR_9->alx = VAR_8;
  FUNC_3(VAR_8->dev, &VAR_9->napi, VAR_3, 64);
  VAR_8->qnapi[VAR_12] = VAR_9;
 }


 for (VAR_12 = 0; VAR_12 < VAR_8->num_txq; VAR_12++) {
  VAR_9 = VAR_8->qnapi[VAR_12];
  VAR_11 = FUNC_1(sizeof(*VAR_11), VAR_2);
  if (!VAR_11)
   goto err_out;

  VAR_9->txq = VAR_11;
  VAR_11->p_reg = VAR_6[VAR_12];
  VAR_11->c_reg = VAR_5[VAR_12];
  VAR_11->queue_idx = VAR_12;
  VAR_11->count = VAR_8->tx_ringsz;
  VAR_11->netdev = VAR_8->dev;
  VAR_11->dev = &VAR_8->hw.pdev->dev;
  VAR_9->vec_mask |= VAR_7[VAR_12];
  VAR_8->int_mask |= VAR_7[VAR_12];
 }


 VAR_9 = VAR_8->qnapi[0];
 VAR_10 = FUNC_1(sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  goto err_out;

 VAR_9->rxq = VAR_10;
 VAR_10->np = VAR_8->qnapi[0];
 VAR_10->queue_idx = 0;
 VAR_10->count = VAR_8->rx_ringsz;
 VAR_10->netdev = VAR_8->dev;
 VAR_10->dev = &VAR_8->hw.pdev->dev;
 VAR_9->vec_mask |= VAR_4[0];
 VAR_8->int_mask |= VAR_4[0];

 return 0;

err_out:
 FUNC_2(VAR_8->dev, "error allocating internal structures\n");
 FUNC_0(VAR_8);
 return -VAR_1;
}
