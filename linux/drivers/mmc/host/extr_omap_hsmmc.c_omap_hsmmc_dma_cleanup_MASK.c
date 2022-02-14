
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct omap_hsmmc_host {int dma_ch; TYPE_2__* data; scalar_t__ use_dma; int irq_lock; } ;
struct dma_chan {TYPE_1__* device; } ;
struct TYPE_5__ {int error; scalar_t__ host_cookie; int sg_len; int sg; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (struct dma_chan*) ;
 int FUNC_2 (TYPE_2__*) ;
 struct dma_chan* FUNC_3 (struct omap_hsmmc_host*,TYPE_2__*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct omap_hsmmc_host *VAR_0, int VAR_1)
{
 int VAR_2;
 unsigned long VAR_3;

 VAR_0->data->error = VAR_1;

 FUNC_4(&VAR_0->irq_lock, VAR_3);
 VAR_2 = VAR_0->dma_ch;
 VAR_0->dma_ch = -1;
 FUNC_5(&VAR_0->irq_lock, VAR_3);

 if (VAR_0->use_dma && VAR_2 != -1) {
  struct dma_chan *VAR_4 = FUNC_3(VAR_0, VAR_0->data);

  FUNC_1(VAR_4);
  FUNC_0(VAR_4->device->dev,
   VAR_0->data->sg, VAR_0->data->sg_len,
   FUNC_2(VAR_0->data));

  VAR_0->data->host_cookie = 0;
 }
 VAR_0->data = ((void*)0);
}
