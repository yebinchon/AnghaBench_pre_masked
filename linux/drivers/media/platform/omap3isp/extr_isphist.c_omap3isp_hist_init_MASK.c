
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap3isp_hist_config {int dummy; } ;
struct ispstat {int * dma_ch; int event_type; struct omap3isp_hist_config* priv; int * ops; struct isp_device* isp; } ;
struct isp_device {int dev; struct ispstat isp_hist; } ;
typedef int dma_cap_mask_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_5 ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_10 (struct omap3isp_hist_config*) ;
 struct omap3isp_hist_config* FUNC_11 (int,int ) ;
 int FUNC_12 (struct ispstat*,char*,int *) ;

int FUNC_13(struct isp_device *VAR_8)
{
 struct ispstat *VAR_9 = &VAR_8->isp_hist;
 struct omap3isp_hist_config *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_11(sizeof(*VAR_10), VAR_3);
 if (VAR_10 == ((void*)0))
  return -VAR_1;

 VAR_9->isp = VAR_8;

 if (VAR_4) {
  dma_cap_mask_t VAR_12;
  FUNC_6(VAR_12);
  FUNC_5(VAR_0, VAR_12);
  VAR_9->dma_ch = FUNC_9(&VAR_12);
  if (FUNC_0(VAR_9->dma_ch)) {
   VAR_11 = FUNC_2(VAR_9->dma_ch);
   if (VAR_11 == -VAR_2)
    goto err;

   VAR_9->dma_ch = ((void*)0);
   FUNC_4(VAR_8->dev,
     "hist: DMA channel request failed, using PIO\n");
  } else {
   FUNC_3(VAR_8->dev, "hist: using DMA channel %s\n",
    FUNC_7(VAR_9->dma_ch));
  }
 }

 VAR_9->ops = &VAR_6;
 VAR_9->priv = VAR_10;
 VAR_9->event_type = VAR_5;

 VAR_11 = FUNC_12(VAR_9, "histogram", &VAR_7);

err:
 if (VAR_11) {
  if (!FUNC_1(VAR_9->dma_ch))
   FUNC_8(VAR_9->dma_ch);
  FUNC_10(VAR_10);
 }

 return VAR_11;
}
