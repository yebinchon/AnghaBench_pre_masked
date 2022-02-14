
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vub300_mmc_host {int inactivity_timer; scalar_t__ cmd; int kref; int interface; } ;
struct timer_list {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct vub300_mmc_host* FUNC_0 (int ,struct timer_list*,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,scalar_t__) ;
 struct vub300_mmc_host* VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct vub300_mmc_host*) ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_5)
{
 struct vub300_mmc_host *VAR_6 = FUNC_0(VAR_6, VAR_5,
          VAR_1);
 if (!VAR_6->interface) {
  FUNC_1(&VAR_6->kref, VAR_4);
 } else if (VAR_6->cmd) {
  FUNC_2(&VAR_6->inactivity_timer, VAR_2 + VAR_0);
 } else {
  FUNC_3(VAR_6);
  FUNC_2(&VAR_6->inactivity_timer, VAR_2 + VAR_0);
 }
}
