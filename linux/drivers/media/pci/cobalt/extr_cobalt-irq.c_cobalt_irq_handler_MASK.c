
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cobalt_stream {unsigned int dma_fifo_mask; int dma_channel; int adv_irq_mask; int q; int flags; scalar_t__ is_audio; } ;
struct cobalt {int irq_none; int irq_dma_tot; int irq_advout; int irq_adv2; int irq_adv1; int irq_work_queue; int irq_work_queues; int irq_full_fifo; int * irq_dma; struct cobalt_stream* streams; } ;
typedef int irqreturn_t ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (struct cobalt_stream*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct cobalt*,int ) ;
 int FUNC_3 (struct cobalt*,int ) ;
 int FUNC_4 (struct cobalt*,int ,int) ;
 int FUNC_5 (struct cobalt*,int ,int) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (int *) ;

irqreturn_t FUNC_9(int VAR_17, void *VAR_18)
{
 struct cobalt *VAR_19 = (struct cobalt *)VAR_18;
 u32 VAR_20 =
  FUNC_2(VAR_19, VAR_15) & 0xffff;
 u32 VAR_21 = FUNC_3(VAR_19, VAR_14);
 u32 VAR_22 = FUNC_3(VAR_19, VAR_13);
 int VAR_23;


 FUNC_4(VAR_19, VAR_15, VAR_20);
 FUNC_5(VAR_19, VAR_14, VAR_21 & ~VAR_22);
 FUNC_5(VAR_19, VAR_13, VAR_22);

 for (VAR_23 = 0; VAR_23 < VAR_0; VAR_23++) {
  struct cobalt_stream *VAR_24 = &VAR_19->streams[VAR_23];
  unsigned VAR_25 = VAR_24->dma_fifo_mask;

  if (VAR_20 & (1 << VAR_24->dma_channel)) {
   VAR_19->irq_dma[VAR_23]++;


   FUNC_0(VAR_24);
   if (!VAR_24->is_audio) {
    VAR_22 &= ~VAR_25;
    FUNC_5(VAR_19, VAR_14,
        VAR_21 & ~VAR_22);
   }
  }
  if (VAR_24->is_audio)
   continue;
  if (VAR_22 & VAR_24->adv_irq_mask)
   FUNC_7(VAR_1, &VAR_24->flags);
  if ((VAR_22 & VAR_21 & VAR_25) && FUNC_8(&VAR_24->q)) {
   FUNC_1("full rx FIFO %d\n", VAR_23);
   VAR_19->irq_full_fifo++;
  }
 }

 FUNC_6(VAR_19->irq_work_queues, &VAR_19->irq_work_queue);

 if (VAR_22 & VAR_21 & (VAR_2 |
      VAR_4 |
      VAR_6 |
      VAR_8 |
      VAR_10 |
      VAR_12))
  VAR_19->irq_adv1++;
 if (VAR_22 & VAR_21 & (VAR_3 |
      VAR_5 |
      VAR_7 |
      VAR_9 |
      VAR_11))
  VAR_19->irq_adv2++;
 if (VAR_22 & VAR_21 & VAR_12)
  VAR_19->irq_advout++;
 if (VAR_20)
  VAR_19->irq_dma_tot++;
 if (!(VAR_22 & VAR_21) && !VAR_20)
  VAR_19->irq_none++;
 VAR_20 = FUNC_2(VAR_19, VAR_15);

 return VAR_16;
}
