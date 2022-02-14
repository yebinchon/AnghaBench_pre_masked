
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ispstat {int buf_size; int dma_ch; TYPE_2__* isp; TYPE_1__* active_buf; } ;
struct dma_slave_config {int src_maxburst; int src_addr_width; scalar_t__ src_addr; } ;
struct dma_async_tx_descriptor {int (* tx_submit ) (struct dma_async_tx_descriptor*) ;struct ispstat* callback_param; int callback; } ;
typedef int dma_cookie_t ;
typedef int dma_addr_t ;
typedef int cfg ;
struct TYPE_6__ {int dev; scalar_t__ mmio_hist_base_phys; } ;
struct TYPE_5__ {int dma_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 struct dma_async_tx_descriptor* FUNC_3 (int ,int ,int,int ,int ) ;
 int FUNC_4 (int ,struct dma_slave_config*) ;
 int VAR_10 ;
 int FUNC_5 (struct ispstat*) ;
 int FUNC_6 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_7 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_8 (struct dma_slave_config*,int ,int) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (struct dma_async_tx_descriptor*) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(struct ispstat *VAR_11)
{
 dma_addr_t VAR_12 = VAR_11->active_buf->dma_addr;
 struct dma_async_tx_descriptor *VAR_13;
 struct dma_slave_config VAR_14;
 dma_cookie_t VAR_15;
 int VAR_16;

 if (FUNC_11(!VAR_12)) {
  FUNC_0(VAR_11->isp->dev, "hist: invalid DMA buffer address\n");
  goto error;
 }

 FUNC_7(VAR_11->isp, 0, VAR_7, VAR_3);
 FUNC_6(VAR_11->isp, VAR_7, VAR_4,
      VAR_5);
 FUNC_9(VAR_11->isp);

 FUNC_8(&VAR_14, 0, sizeof(VAR_14));
 VAR_14.src_addr = VAR_11->isp->mmio_hist_base_phys + VAR_6;
 VAR_14.src_addr_width = VAR_2;
 VAR_14.src_maxburst = VAR_11->buf_size / 4;

 VAR_16 = FUNC_4(VAR_11->dma_ch, &VAR_14);
 if (VAR_16 < 0) {
  FUNC_0(VAR_11->isp->dev,
   "hist: DMA slave configuration failed\n");
  goto error;
 }

 VAR_13 = FUNC_3(VAR_11->dma_ch, VAR_12,
      VAR_11->buf_size, VAR_1,
      VAR_0);
 if (VAR_13 == ((void*)0)) {
  FUNC_0(VAR_11->isp->dev,
   "hist: DMA slave preparation failed\n");
  goto error;
 }

 VAR_13->callback = VAR_10;
 VAR_13->callback_param = VAR_11;
 VAR_15 = VAR_13->tx_submit(VAR_13);
 if (FUNC_2(VAR_15)) {
  FUNC_0(VAR_11->isp->dev, "hist: DMA submission failed\n");
  goto error;
 }

 FUNC_1(VAR_11->dma_ch);

 return VAR_8;

error:
 FUNC_5(VAR_11);
 return VAR_9;
}
