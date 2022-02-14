
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct tmio_mmc_host {int lock; int sg_len; int sg_ptr; TYPE_5__* chan_tx; TYPE_3__* chan_rx; TYPE_1__* data; } ;
struct TYPE_12__ {int dma_dataend; } ;
struct renesas_sdhi {TYPE_6__ dma_priv; } ;
struct TYPE_11__ {TYPE_4__* device; } ;
struct TYPE_10__ {int dev; } ;
struct TYPE_9__ {TYPE_2__* device; } ;
struct TYPE_8__ {int dev; } ;
struct TYPE_7__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 struct renesas_sdhi* FUNC_1 (struct tmio_mmc_host*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct tmio_mmc_host*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(void *VAR_3)
{
 struct tmio_mmc_host *VAR_4 = VAR_3;
 struct renesas_sdhi *VAR_5 = FUNC_1(VAR_4);

 FUNC_2(&VAR_4->lock);

 if (!VAR_4->data)
  goto out;

 if (VAR_4->data->flags & VAR_2)
  FUNC_0(VAR_4->chan_rx->device->dev,
        VAR_4->sg_ptr, VAR_4->sg_len,
        VAR_0);
 else
  FUNC_0(VAR_4->chan_tx->device->dev,
        VAR_4->sg_ptr, VAR_4->sg_len,
        VAR_1);

 FUNC_3(&VAR_4->lock);

 FUNC_5(&VAR_5->dma_priv.dma_dataend);

 FUNC_2(&VAR_4->lock);
 FUNC_4(VAR_4);
out:
 FUNC_3(&VAR_4->lock);
}
