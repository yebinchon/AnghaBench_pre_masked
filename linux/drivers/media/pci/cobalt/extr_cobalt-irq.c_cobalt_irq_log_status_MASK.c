
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cobalt {int * irq_dma; scalar_t__ irq_full_fifo; scalar_t__ irq_none; scalar_t__ irq_advout; scalar_t__ irq_adv2; scalar_t__ irq_adv1; scalar_t__ irq_dma_tot; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (char*,scalar_t__,...) ;
 int FUNC_1 (struct cobalt*,int ) ;
 int FUNC_2 (struct cobalt*,int ,int) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (char*,...) ;

void FUNC_5(struct cobalt *VAR_10)
{
 u32 VAR_11;
 int VAR_12;

 FUNC_0("irq: adv1=%u adv2=%u advout=%u none=%u full=%u\n",
      VAR_10->irq_adv1, VAR_10->irq_adv2, VAR_10->irq_advout,
      VAR_10->irq_none, VAR_10->irq_full_fifo);
 FUNC_0("irq: dma_tot=%u (", VAR_10->irq_dma_tot);
 for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++)
  FUNC_4("%s%u", VAR_12 ? "/" : "", VAR_10->irq_dma[VAR_12]);
 FUNC_4(")\n");
 VAR_10->irq_dma_tot = VAR_10->irq_adv1 = VAR_10->irq_adv2 = 0;
 VAR_10->irq_advout = VAR_10->irq_none = VAR_10->irq_full_fifo = 0;
 FUNC_3(VAR_10->irq_dma, 0, sizeof(VAR_10->irq_dma));

 VAR_11 = FUNC_1(VAR_10, VAR_9);
 FUNC_2(VAR_10, VAR_9,
   VAR_11 |
   VAR_3 |
   VAR_4 |
   VAR_5 |
   VAR_6 |
   VAR_7 |
   VAR_8 |
   VAR_1 |
   VAR_2);
}
