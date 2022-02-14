
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tusb_omap_dma_ch {TYPE_1__* dma_data; } ;
struct dma_channel {int status; } ;
struct TYPE_2__ {int chan; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct tusb_omap_dma_ch* FUNC_1 (struct dma_channel*) ;

__attribute__((used)) static int FUNC_2(struct dma_channel *VAR_1)
{
 struct tusb_omap_dma_ch *VAR_2 = FUNC_1(VAR_1);

 if (VAR_2->dma_data)
  FUNC_0(VAR_2->dma_data->chan);

 VAR_1->status = VAR_0;

 return 0;
}
