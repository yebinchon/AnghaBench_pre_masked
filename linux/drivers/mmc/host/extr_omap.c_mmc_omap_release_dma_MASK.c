
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_omap_host {int sg_len; struct dma_chan* dma_rx; struct dma_chan* dma_tx; int mmc; } ;
struct mmc_data {int flags; int sg; scalar_t__ bytes_xfered; scalar_t__ error; } ;
struct dma_chan {TYPE_1__* device; } ;
struct device {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_2__ {struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,int ,int ,int) ;
 int FUNC_1 (struct dma_chan*) ;
 struct device* FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct mmc_omap_host *VAR_3, struct mmc_data *VAR_4,
       int VAR_5)
{
 enum dma_data_direction VAR_6;
 struct device *VAR_7 = FUNC_2(VAR_3->mmc);
 struct dma_chan *VAR_8;

 if (VAR_4->flags & VAR_2) {
  VAR_6 = VAR_1;
  VAR_8 = VAR_3->dma_tx;
 } else {
  VAR_6 = VAR_0;
  VAR_8 = VAR_3->dma_rx;
 }
 if (VAR_8) {
  if (VAR_4->error) {
   FUNC_1(VAR_8);

   VAR_4->bytes_xfered = 0;
  }
  VAR_7 = VAR_8->device->dev;
 }
 FUNC_0(VAR_7, VAR_4->sg, VAR_3->sg_len, VAR_6);
}
