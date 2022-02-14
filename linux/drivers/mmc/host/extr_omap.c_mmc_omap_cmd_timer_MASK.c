
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct mmc_omap_host {int abort; int slot_lock; int cmd_abort_work; int mmc_omap_wq; int irq; int * cmd; } ;


 int VAR_0 ;
 int FUNC_0 (struct mmc_omap_host*,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 struct mmc_omap_host* FUNC_2 (int ,struct timer_list*,int ) ;
 struct mmc_omap_host* VAR_2 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_6(struct timer_list *VAR_3)
{
 struct mmc_omap_host *VAR_4 = FUNC_2(VAR_4, VAR_3, VAR_1);
 unsigned long VAR_5;

 FUNC_4(&VAR_4->slot_lock, VAR_5);
 if (VAR_4->cmd != ((void*)0) && !VAR_4->abort) {
  FUNC_0(VAR_4, VAR_0, 0);
  FUNC_1(VAR_4->irq);
  VAR_4->abort = 1;
  FUNC_3(VAR_4->mmc_omap_wq, &VAR_4->cmd_abort_work);
 }
 FUNC_5(&VAR_4->slot_lock, VAR_5);
}
