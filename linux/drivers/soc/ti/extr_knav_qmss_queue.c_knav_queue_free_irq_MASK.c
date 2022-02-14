
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct knav_range_info {unsigned int queue_base; int flags; TYPE_1__* irqs; } ;
struct knav_queue_inst {unsigned int id; struct knav_range_info* range; } ;
struct TYPE_2__ {int irq; } ;


 int VAR_0 ;
 int FUNC_0 (int,struct knav_queue_inst*) ;
 int FUNC_1 (int,int *) ;

__attribute__((used)) static void FUNC_2(struct knav_queue_inst *VAR_1)
{
 struct knav_range_info *VAR_2 = VAR_1->range;
 unsigned VAR_3 = VAR_1->id - VAR_1->range->queue_base;
 int VAR_4;

 if (VAR_2->flags & VAR_0) {
  VAR_4 = VAR_2->irqs[VAR_3].irq;
  FUNC_1(VAR_4, ((void*)0));
  FUNC_0(VAR_4, VAR_1);
 }
}
