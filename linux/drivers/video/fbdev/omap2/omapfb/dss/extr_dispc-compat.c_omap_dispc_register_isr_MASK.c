
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
 int VAR_2 ;
 int FUNC_0 () ;
 TYPE_1__ VAR_3 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

int FUNC_3(omap_dispc_isr_t VAR_4, void *VAR_5, u32 VAR_6)
{
 int VAR_7;
 int VAR_8;
 unsigned long VAR_9;
 struct omap_dispc_isr_data *VAR_10;

 if (VAR_4 == ((void*)0))
  return -VAR_2;

 FUNC_1(&VAR_3.irq_lock, VAR_9);


 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  VAR_10 = &VAR_3.registered_isr[VAR_7];
  if (VAR_10->isr == VAR_4 && VAR_10->arg == VAR_5 &&
    VAR_10->mask == VAR_6) {
   VAR_8 = -VAR_2;
   goto err;
  }
 }

 VAR_10 = ((void*)0);
 VAR_8 = -VAR_1;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  VAR_10 = &VAR_3.registered_isr[VAR_7];

  if (VAR_10->isr != ((void*)0))
   continue;

  VAR_10->isr = VAR_4;
  VAR_10->arg = VAR_5;
  VAR_10->mask = VAR_6;
  VAR_8 = 0;

  break;
 }

 if (VAR_8)
  goto err;

 FUNC_0();

 FUNC_2(&VAR_3.irq_lock, VAR_9);

 return 0;
err:
 FUNC_2(&VAR_3.irq_lock, VAR_9);

 return VAR_8;
}
