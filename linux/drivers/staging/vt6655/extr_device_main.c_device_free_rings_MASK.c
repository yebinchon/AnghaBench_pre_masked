
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vnt_tx_desc {int dummy; } ;
struct vnt_rx_desc {int dummy; } ;
struct TYPE_4__ {int rx_descs0; int rx_descs1; int* tx_descs; } ;
struct vnt_private {int tx_bufs_dma0; scalar_t__ tx0_bufs; TYPE_2__ opts; TYPE_1__* pcid; int pool_dma; scalar_t__ aRD0Ring; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(struct vnt_private *VAR_3)
{
 FUNC_0(&VAR_3->pcid->dev,
     VAR_3->opts.rx_descs0 * sizeof(struct vnt_rx_desc) +
     VAR_3->opts.rx_descs1 * sizeof(struct vnt_rx_desc) +
     VAR_3->opts.tx_descs[0] * sizeof(struct vnt_tx_desc) +
     VAR_3->opts.tx_descs[1] * sizeof(struct vnt_tx_desc),
     VAR_3->aRD0Ring, VAR_3->pool_dma);

 if (VAR_3->tx0_bufs)
  FUNC_0(&VAR_3->pcid->dev,
      VAR_3->opts.tx_descs[0] * VAR_2 +
      VAR_3->opts.tx_descs[1] * VAR_2 +
      VAR_0 +
      VAR_1,
      VAR_3->tx0_bufs, VAR_3->tx_bufs_dma0);
}
