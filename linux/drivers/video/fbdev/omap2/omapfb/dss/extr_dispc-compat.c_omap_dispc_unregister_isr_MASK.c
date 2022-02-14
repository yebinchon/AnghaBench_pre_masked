
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct omap_dispc_isr_data {void* arg; scalar_t__ mask; int * isr; } ;
typedef int * omap_dispc_isr_t ;
struct TYPE_2__ {int irq_lock; struct omap_dispc_isr_data* registered_isr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

int FUNC_3(omap_dispc_isr_t VAR_3, void *VAR_4, u32 VAR_5)
{
 int VAR_6;
 unsigned long VAR_7;
 int VAR_8 = -VAR_1;
 struct omap_dispc_isr_data *VAR_9;

 FUNC_1(&VAR_2.irq_lock, VAR_7);

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_9 = &VAR_2.registered_isr[VAR_6];
  if (VAR_9->isr != VAR_3 || VAR_9->arg != VAR_4 ||
    VAR_9->mask != VAR_5)
   continue;



  VAR_9->isr = ((void*)0);
  VAR_9->arg = ((void*)0);
  VAR_9->mask = 0;

  VAR_8 = 0;
  break;
 }

 if (VAR_8 == 0)
  FUNC_0();

 FUNC_2(&VAR_2.irq_lock, VAR_7);

 return VAR_8;
}
