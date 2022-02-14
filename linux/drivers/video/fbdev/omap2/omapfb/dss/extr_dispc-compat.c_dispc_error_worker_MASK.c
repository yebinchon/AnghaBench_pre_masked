
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct work_struct {int dummy; } ;
struct omap_overlay_manager {int name; } ;
struct omap_overlay {scalar_t__ id; int (* disable ) (struct omap_overlay*) ;struct omap_overlay_manager* manager; int name; } ;
struct TYPE_2__ {unsigned int error_irqs; unsigned int irq_error_mask; int irq_lock; } ;



 unsigned int VAR_0 ;



 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 () ;
 TYPE_1__ VAR_2 ;
 unsigned int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct omap_overlay_manager*) ;
 int FUNC_6 (struct omap_overlay_manager*) ;
 int FUNC_7 (int) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 struct omap_overlay* FUNC_10 (int) ;
 struct omap_overlay_manager* FUNC_11 (int) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (struct omap_overlay*) ;
 int FUNC_15 (struct omap_overlay*) ;

__attribute__((used)) static void FUNC_16(struct work_struct *VAR_3)
{
 int VAR_4;
 u32 VAR_5;
 unsigned long VAR_6;
 static const unsigned VAR_7[] = {
  131,
  130,
  129,
  128,
 };

 FUNC_12(&VAR_2.irq_lock, VAR_6);
 VAR_5 = VAR_2.error_irqs;
 VAR_2.error_irqs = 0;
 FUNC_13(&VAR_2.irq_lock, VAR_6);

 FUNC_3();

 for (VAR_4 = 0; VAR_4 < FUNC_9(); ++VAR_4) {
  struct omap_overlay *VAR_8;
  unsigned VAR_9;

  VAR_8 = FUNC_10(VAR_4);
  VAR_9 = VAR_7[VAR_4];

  if (VAR_9 & VAR_5) {
   FUNC_0("FIFO UNDERFLOW on %s, disabling the overlay\n",
     VAR_8->name);
   VAR_8->disable(VAR_8);
   FUNC_7(50);
  }
 }

 for (VAR_4 = 0; VAR_4 < FUNC_8(); ++VAR_4) {
  struct omap_overlay_manager *VAR_10;
  unsigned VAR_11;

  VAR_10 = FUNC_11(VAR_4);
  VAR_11 = FUNC_2(VAR_4);

  if (VAR_11 & VAR_5) {
   int VAR_12;

   FUNC_0("SYNC_LOST on channel %s, restarting the output "
     "with video overlays disabled\n",
     VAR_10->name);

   FUNC_5(VAR_10);

   for (VAR_12 = 0; VAR_12 < FUNC_9(); ++VAR_12) {
    struct omap_overlay *VAR_13;
    VAR_13 = FUNC_10(VAR_12);

    if (VAR_13->id != VAR_1 &&
      VAR_13->manager == VAR_10)
     VAR_13->disable(VAR_13);
   }

   FUNC_6(VAR_10);
  }
 }

 if (VAR_5 & VAR_0) {
  FUNC_0("OCP_ERR\n");
  for (VAR_4 = 0; VAR_4 < FUNC_8(); ++VAR_4) {
   struct omap_overlay_manager *VAR_14;

   VAR_14 = FUNC_11(VAR_4);
   FUNC_5(VAR_14);
  }
 }

 FUNC_12(&VAR_2.irq_lock, VAR_6);
 VAR_2.irq_error_mask |= VAR_5;
 FUNC_1();
 FUNC_13(&VAR_2.irq_lock, VAR_6);

 FUNC_4();
}
