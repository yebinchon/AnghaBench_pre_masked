
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcf50633 {int lock; TYPE_1__* irq_handler; } ;
struct TYPE_2__ {void (* handler ) (int,void*) ;void* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void (*) (int,void*)) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct pcf50633 *VAR_3, int VAR_4,
   void (*VAR_5) (int, void *), void *VAR_6)
{
 if (VAR_4 < 0 || VAR_4 >= VAR_2 || !VAR_5)
  return -VAR_1;

 if (FUNC_0(VAR_3->irq_handler[VAR_4].handler))
  return -VAR_0;

 FUNC_1(&VAR_3->lock);
 VAR_3->irq_handler[VAR_4].handler = VAR_5;
 VAR_3->irq_handler[VAR_4].data = VAR_6;
 FUNC_2(&VAR_3->lock);

 return 0;
}
