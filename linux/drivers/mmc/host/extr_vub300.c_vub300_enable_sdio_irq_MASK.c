
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vub300_mmc_host {int irq_enabled; int kref; int irq_mutex; scalar_t__ irq_disabled; int mmc; scalar_t__ irqs_queued; int interface; } ;
struct mmc_host {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 struct vub300_mmc_host* FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;
 int FUNC_6 (struct vub300_mmc_host*,int ) ;

__attribute__((used)) static void FUNC_7(struct mmc_host *VAR_1, int VAR_2)
{
 struct vub300_mmc_host *VAR_3 = FUNC_2(VAR_1);
 if (!VAR_3->interface)
  return;
 FUNC_0(&VAR_3->kref);
 if (VAR_2) {
  FUNC_4(&VAR_3->irq_mutex);
  if (VAR_3->irqs_queued) {
   VAR_3->irqs_queued -= 1;
   FUNC_3(VAR_3->mmc);
  } else if (VAR_3->irq_disabled) {
   VAR_3->irq_disabled = 0;
   VAR_3->irq_enabled = 1;
   FUNC_6(VAR_3, 0);
  } else if (VAR_3->irq_enabled) {

  } else {
   VAR_3->irq_enabled = 1;
   FUNC_6(VAR_3, 0);
  }
  FUNC_5(&VAR_3->irq_mutex);
 } else {
  VAR_3->irq_enabled = 0;
 }
 FUNC_1(&VAR_3->kref, VAR_0);
}
