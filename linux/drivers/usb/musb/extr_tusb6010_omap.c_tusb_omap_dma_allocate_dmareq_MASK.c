
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tusb_omap_dma_ch {int epnum; TYPE_1__* tusb_dma; int * dma_data; int tbase; scalar_t__ tx; } ;
struct TYPE_2__ {int * dma_pool; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static inline int FUNC_2(struct tusb_omap_dma_ch *VAR_3)
{
 u32 VAR_4 = FUNC_0(VAR_3->tbase, VAR_2);
 int VAR_5, VAR_6 = -1;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  int VAR_7 = (VAR_4 & (0xf << (VAR_5 * 5))) >> (VAR_5 * 5);
  if (VAR_7 == 0) {
   VAR_6 = VAR_5;
   break;
  }
 }

 if (VAR_6 == -1)
  return -VAR_0;

 VAR_4 |= (VAR_3->epnum << (VAR_6 * 5));
 if (VAR_3->tx)
  VAR_4 |= ((1 << 4) << (VAR_6 * 5));
 FUNC_1(VAR_3->tbase, VAR_2, VAR_4);

 VAR_3->dma_data = &VAR_3->tusb_dma->dma_pool[VAR_6];

 return 0;
}
