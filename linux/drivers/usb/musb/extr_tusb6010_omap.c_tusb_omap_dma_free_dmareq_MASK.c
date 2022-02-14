
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tusb_omap_dma_ch {TYPE_1__* dma_data; int tbase; } ;
struct TYPE_2__ {int dmareq; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static inline void FUNC_2(struct tusb_omap_dma_ch *VAR_1)
{
 u32 VAR_2;

 if (!VAR_1 || !VAR_1->dma_data || VAR_1->dma_data->dmareq < 0)
  return;

 VAR_2 = FUNC_0(VAR_1->tbase, VAR_0);
 VAR_2 &= ~(0x1f << (VAR_1->dma_data->dmareq * 5));
 FUNC_1(VAR_1->tbase, VAR_0, VAR_2);

 VAR_1->dma_data = ((void*)0);
}
