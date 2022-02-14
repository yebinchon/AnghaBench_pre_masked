
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct knav_range_info {int flags; unsigned int queue_base; TYPE_1__* irqs; } ;
struct knav_queue_inst {unsigned int id; } ;
struct TYPE_2__ {int irq; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct knav_range_info *VAR_1,
          struct knav_queue_inst *VAR_2,
          bool VAR_3)
{
 unsigned VAR_4;

 if (VAR_1->flags & VAR_0) {
  VAR_4 = VAR_2->id - VAR_1->queue_base;
  if (VAR_3)
   FUNC_1(VAR_1->irqs[VAR_4].irq);
  else
   FUNC_0(VAR_1->irqs[VAR_4].irq);
 }
 return 0;
}
