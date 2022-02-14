
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char ToPcInt; unsigned char volatile ToPcIntMetro; unsigned char volatile ToHyInt; } ;
typedef TYPE_1__ tErgDpram ;
typedef int irqreturn_t ;
struct TYPE_4__ {int hysdn_lock; int irq_queue; int hw_lock; TYPE_1__* dpram; scalar_t__ iobase; int irq_enabled; } ;
typedef TYPE_2__ hysdn_card ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t
FUNC_4(int VAR_4, void *VAR_5)
{
 hysdn_card *VAR_6 = VAR_5;
 tErgDpram *VAR_7;
 unsigned long VAR_8;
 unsigned char volatile VAR_9;

 if (!VAR_6)
  return VAR_1;
 if (!VAR_6->irq_enabled)
  return VAR_1;

 FUNC_2(&VAR_6->hysdn_lock, VAR_8);

 if (!(FUNC_0(VAR_6->iobase + VAR_2) & VAR_3)) {
  FUNC_3(&VAR_6->hysdn_lock, VAR_8);
  return VAR_1;
 }

 VAR_7 = VAR_6->dpram;
 VAR_9 = VAR_7->ToPcInt;
 VAR_9 |= VAR_7->ToPcIntMetro;
 VAR_9 |= VAR_7->ToHyInt;


 if (!VAR_6->hw_lock)
  FUNC_1(&VAR_6->irq_queue);
 FUNC_3(&VAR_6->hysdn_lock, VAR_8);
 return VAR_0;
}
