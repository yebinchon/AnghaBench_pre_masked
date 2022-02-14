
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct omap_dispc_isr_data {int mask; int arg; int (* isr ) (int ,int) ;} ;
typedef int registered_isr ;
typedef int irqreturn_t ;
struct TYPE_3__ {int irqs; int irq_count; } ;
struct TYPE_4__ {int irq_error_mask; int error_irqs; int irq_lock; int error_work; int registered_isr; int irq_stats_lock; TYPE_1__ irq_stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 TYPE_2__ VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (struct omap_dispc_isr_data*,int ,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_11(int VAR_4, void *VAR_5)
{
 int VAR_6;
 u32 VAR_7, VAR_8;
 u32 VAR_9 = 0;
 u32 VAR_10;
 struct omap_dispc_isr_data *VAR_11;
 struct omap_dispc_isr_data VAR_12[VAR_0];

 FUNC_8(&VAR_3.irq_lock);

 VAR_7 = FUNC_3();
 VAR_8 = FUNC_2();


 if (!(VAR_7 & VAR_8)) {
  FUNC_9(&VAR_3.irq_lock);
  return VAR_2;
 }
 FUNC_6(VAR_7);



 FUNC_1(VAR_7);

 FUNC_3();



 FUNC_5(VAR_12, VAR_3.registered_isr,
   sizeof(VAR_12));

 FUNC_9(&VAR_3.irq_lock);

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_11 = &VAR_12[VAR_6];

  if (!VAR_11->isr)
   continue;

  if (VAR_11->mask & VAR_7) {
   VAR_11->isr(VAR_11->arg, VAR_7);
   VAR_9 |= VAR_11->mask;
  }
 }

 FUNC_8(&VAR_3.irq_lock);

 VAR_10 = VAR_7 & ~VAR_9 & VAR_3.irq_error_mask;

 if (VAR_10) {
  VAR_3.error_irqs |= VAR_10;

  VAR_3.irq_error_mask &= ~VAR_10;
  FUNC_0();

  FUNC_7(&VAR_3.error_work);
 }

 FUNC_9(&VAR_3.irq_lock);

 return VAR_1;
}
