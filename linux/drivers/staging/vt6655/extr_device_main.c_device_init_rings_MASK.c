
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vnt_tx_desc {int dummy; } ;
struct vnt_rx_desc {int dummy; } ;
struct TYPE_4__ {int rx_descs0; int rx_descs1; int* tx_descs; } ;
struct vnt_private {TYPE_2__ opts; scalar_t__ tx_bufs_dma1; scalar_t__ tx_beacon_dma; scalar_t__ tx_bufs_dma0; void* tx_beacon_bufs; void* pbyTmpBuff; void* tx1_bufs; void* tx0_bufs; void* apTD1Rings; void* apTD0Rings; scalar_t__ td0_pool_dma; scalar_t__ td1_pool_dma; scalar_t__ rd1_pool_dma; scalar_t__ pool_dma; TYPE_1__* pcid; scalar_t__ rd0_pool_dma; void* aRD1Ring; void* aRD0Ring; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 void* FUNC_1 (int *,int,scalar_t__*,int ) ;
 int FUNC_2 (int *,int,void*,scalar_t__) ;

__attribute__((used)) static bool FUNC_3(struct vnt_private *VAR_4)
{
 void *VAR_5;


 VAR_5 = FUNC_1(&VAR_4->pcid->dev,
          VAR_4->opts.rx_descs0 * sizeof(struct vnt_rx_desc) + VAR_4->opts.rx_descs1 * sizeof(struct vnt_rx_desc) + VAR_4->opts.tx_descs[0] * sizeof(struct vnt_tx_desc) + VAR_4->opts.tx_descs[1] * sizeof(struct vnt_tx_desc),
          &VAR_4->pool_dma, VAR_2);
 if (!VAR_5) {
  FUNC_0(&VAR_4->pcid->dev, "allocate desc dma memory failed\n");
  return 0;
 }

 VAR_4->aRD0Ring = VAR_5;
 VAR_4->aRD1Ring = VAR_5 +
  VAR_4->opts.rx_descs0 * sizeof(struct vnt_rx_desc);

 VAR_4->rd0_pool_dma = VAR_4->pool_dma;
 VAR_4->rd1_pool_dma = VAR_4->rd0_pool_dma +
  VAR_4->opts.rx_descs0 * sizeof(struct vnt_rx_desc);

 VAR_4->tx0_bufs = FUNC_1(&VAR_4->pcid->dev,
         VAR_4->opts.tx_descs[0] * VAR_3 + VAR_4->opts.tx_descs[1] * VAR_3 + VAR_0 + VAR_1,
         &VAR_4->tx_bufs_dma0, VAR_2);
 if (!VAR_4->tx0_bufs) {
  FUNC_0(&VAR_4->pcid->dev, "allocate buf dma memory failed\n");

  FUNC_2(&VAR_4->pcid->dev,
      VAR_4->opts.rx_descs0 * sizeof(struct vnt_rx_desc) +
      VAR_4->opts.rx_descs1 * sizeof(struct vnt_rx_desc) +
      VAR_4->opts.tx_descs[0] * sizeof(struct vnt_tx_desc) +
      VAR_4->opts.tx_descs[1] * sizeof(struct vnt_tx_desc),
      VAR_5, VAR_4->pool_dma);
  return 0;
 }

 VAR_4->td0_pool_dma = VAR_4->rd1_pool_dma +
  VAR_4->opts.rx_descs1 * sizeof(struct vnt_rx_desc);

 VAR_4->td1_pool_dma = VAR_4->td0_pool_dma +
  VAR_4->opts.tx_descs[0] * sizeof(struct vnt_tx_desc);


 VAR_4->apTD0Rings = VAR_5
  + VAR_4->opts.rx_descs0 * sizeof(struct vnt_rx_desc)
  + VAR_4->opts.rx_descs1 * sizeof(struct vnt_rx_desc);

 VAR_4->apTD1Rings = VAR_5
  + VAR_4->opts.rx_descs0 * sizeof(struct vnt_rx_desc)
  + VAR_4->opts.rx_descs1 * sizeof(struct vnt_rx_desc)
  + VAR_4->opts.tx_descs[0] * sizeof(struct vnt_tx_desc);

 VAR_4->tx1_bufs = VAR_4->tx0_bufs +
  VAR_4->opts.tx_descs[0] * VAR_3;

 VAR_4->tx_beacon_bufs = VAR_4->tx1_bufs +
  VAR_4->opts.tx_descs[1] * VAR_3;

 VAR_4->pbyTmpBuff = VAR_4->tx_beacon_bufs +
  VAR_0;

 VAR_4->tx_bufs_dma1 = VAR_4->tx_bufs_dma0 +
  VAR_4->opts.tx_descs[0] * VAR_3;

 VAR_4->tx_beacon_dma = VAR_4->tx_bufs_dma1 +
  VAR_4->opts.tx_descs[1] * VAR_3;

 return 1;
}
