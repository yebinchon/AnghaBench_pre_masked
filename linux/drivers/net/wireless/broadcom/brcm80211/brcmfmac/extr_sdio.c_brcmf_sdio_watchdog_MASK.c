
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct brcmf_sdio {int timer; scalar_t__ wd_active; int watchdog_wait; scalar_t__ watchdog_tsk; } ;


 scalar_t__ VAR_0 ;
 struct brcmf_sdio* VAR_1 ;
 int FUNC_0 (int *) ;
 struct brcmf_sdio* FUNC_1 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *,scalar_t__) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_3(struct timer_list *VAR_4)
{
 struct brcmf_sdio *VAR_5 = FUNC_1(VAR_5, VAR_4, VAR_3);

 if (VAR_5->watchdog_tsk) {
  FUNC_0(&VAR_5->watchdog_wait);

  if (VAR_5->wd_active)
   FUNC_2(&VAR_5->timer,
      VAR_2 + VAR_0);
 }
}
