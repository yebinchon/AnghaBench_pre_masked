
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct musb* musb; } ;
struct tusb_omap_dma {struct tusb_dma_data* dma_pool; scalar_t__ multichannel; TYPE_1__ controller; } ;
struct tusb_dma_data {int dmareq; int chan; } ;
struct musb {int controller; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (char*,char*,int) ;

__attribute__((used)) static int FUNC_6(struct tusb_omap_dma *VAR_1)
{
 struct musb *VAR_2 = VAR_1->controller.musb;
 int VAR_3;
 int VAR_4 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  struct tusb_dma_data *VAR_5 = &VAR_1->dma_pool[VAR_3];






  if (VAR_3 == 0 || VAR_1->multichannel) {
   char VAR_6[8];

   FUNC_5(VAR_6, "dmareq%d", VAR_3);
   VAR_5->chan = FUNC_4(VAR_2->controller,
         VAR_6);
   if (FUNC_0(VAR_5->chan)) {
    FUNC_2(VAR_2->controller,
     "Failed to request %s\n", VAR_6);
    VAR_4 = FUNC_1(VAR_5->chan);
    goto dma_error;
   }

   VAR_5->dmareq = VAR_3;
  } else {
   VAR_5->dmareq = -1;
  }
 }

 return 0;

dma_error:
 for (; VAR_3 >= 0; VAR_3--) {
  struct tusb_dma_data *VAR_7 = &VAR_1->dma_pool[VAR_3];

  if (VAR_7->dmareq >= 0)
   FUNC_3(VAR_7->chan);
 }

 return VAR_4;
}
