
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int irq_lock; int irqmask; } ;
struct mt76_dev {TYPE_1__ mmio; } ;


 int FUNC_0 (struct mt76_dev*,int ,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct mt76_dev *VAR_0, u32 VAR_1,
         u32 VAR_2, u32 VAR_3)
{
 unsigned long VAR_4;

 FUNC_1(&VAR_0->mmio.irq_lock, VAR_4);
 VAR_0->mmio.irqmask &= ~VAR_2;
 VAR_0->mmio.irqmask |= VAR_3;
 FUNC_0(VAR_0, VAR_1, VAR_0->mmio.irqmask);
 FUNC_2(&VAR_0->mmio.irq_lock, VAR_4);
}
