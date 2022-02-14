
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mic_driver {scalar_t__ num_dma_ch; int dev; struct dma_chan** dma_ch; } ;
struct dma_chan {int dummy; } ;
typedef int dma_cap_mask_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 struct dma_chan* FUNC_3 (int ,int *,int *) ;

__attribute__((used)) static int FUNC_4(struct mic_driver *VAR_2)
{
 dma_cap_mask_t VAR_3;
 struct dma_chan *VAR_4;

 FUNC_2(VAR_3);
 FUNC_1(VAR_0, VAR_3);

 do {
  VAR_4 = FUNC_3(VAR_3, ((void*)0), ((void*)0));
  if (VAR_4) {
   VAR_2->dma_ch[VAR_2->num_dma_ch++] = VAR_4;
   if (VAR_2->num_dma_ch >= VAR_1)
    break;
  }
 } while (VAR_4);
 FUNC_0(VAR_2->dev, "DMA channels # %d\n", VAR_2->num_dma_ch);
 return VAR_2->num_dma_ch;
}
