
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tusb_omap_dma_ch {TYPE_1__* dma_data; int epnum; struct musb* musb; } ;
struct musb {int controller; } ;
struct dma_channel {int status; } ;
struct TYPE_2__ {int chan; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ) ;
 struct tusb_omap_dma_ch* FUNC_2 (struct dma_channel*) ;
 int FUNC_3 (struct tusb_omap_dma_ch*) ;

__attribute__((used)) static void FUNC_4(struct dma_channel *VAR_1)
{
 struct tusb_omap_dma_ch *VAR_2 = FUNC_2(VAR_1);
 struct musb *VAR_3 = VAR_2->musb;

 FUNC_0(VAR_3->controller, "Release for ep%i\n", VAR_2->epnum);

 VAR_1->status = VAR_0;

 FUNC_1(VAR_2->dma_data->chan);
 FUNC_3(VAR_2);

 VAR_1 = ((void*)0);
}
