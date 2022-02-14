
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct b43_wldev {int irq_mask; int* dma_reason; int irq_reason; } ;
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
 int FUNC_0 (struct b43_wldev*,int ) ;
 int FUNC_1 (struct b43_wldev*,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_2(struct b43_wldev *VAR_9)
{
 u32 VAR_10;




 VAR_10 = FUNC_0(VAR_9, VAR_6);
 if (VAR_10 == 0xffffffff)
  return VAR_7;
 VAR_10 &= VAR_9->irq_mask;
 if (!VAR_10)
  return VAR_7;

 VAR_9->dma_reason[0] = FUNC_0(VAR_9, VAR_0)
     & 0x0001FC00;
 VAR_9->dma_reason[1] = FUNC_0(VAR_9, VAR_1)
     & 0x0000DC00;
 VAR_9->dma_reason[2] = FUNC_0(VAR_9, VAR_2)
     & 0x0000DC00;
 VAR_9->dma_reason[3] = FUNC_0(VAR_9, VAR_3)
     & 0x0001DC00;
 VAR_9->dma_reason[4] = FUNC_0(VAR_9, VAR_4)
     & 0x0000DC00;






 FUNC_1(VAR_9, VAR_6, VAR_10);
 FUNC_1(VAR_9, VAR_0, VAR_9->dma_reason[0]);
 FUNC_1(VAR_9, VAR_1, VAR_9->dma_reason[1]);
 FUNC_1(VAR_9, VAR_2, VAR_9->dma_reason[2]);
 FUNC_1(VAR_9, VAR_3, VAR_9->dma_reason[3]);
 FUNC_1(VAR_9, VAR_4, VAR_9->dma_reason[4]);





 FUNC_1(VAR_9, VAR_5, 0);

 VAR_9->irq_reason = VAR_10;

 return VAR_8;
}
