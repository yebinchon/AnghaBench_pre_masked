
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct usdhi6_host {int dma_active; TYPE_4__* chan_tx; TYPE_2__* chan_rx; TYPE_5__* mrq; } ;
struct mmc_data {int flags; int sg_len; int sg; } ;
struct TYPE_10__ {struct mmc_data* data; } ;
struct TYPE_9__ {TYPE_3__* device; } ;
struct TYPE_8__ {int dev; } ;
struct TYPE_7__ {TYPE_1__* device; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (struct usdhi6_host*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct usdhi6_host *VAR_4)
{
 struct mmc_data *VAR_5 = VAR_4->mrq->data;

 if (!VAR_4->dma_active)
  return;

 FUNC_1(VAR_4, VAR_3, 0);
 VAR_4->dma_active = 0;

 if (VAR_5->flags & VAR_2)
  FUNC_0(VAR_4->chan_rx->device->dev, VAR_5->sg,
        VAR_5->sg_len, VAR_0);
 else
  FUNC_0(VAR_4->chan_tx->device->dev, VAR_5->sg,
        VAR_5->sg_len, VAR_1);
}
