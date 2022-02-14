
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fotg210_hcd {scalar_t__ rh_state; int enabled_hrtimer_events; scalar_t__ isoc_count; scalar_t__ async_count; scalar_t__ intr_count; scalar_t__ need_io_watchdog; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct fotg210_hcd*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct fotg210_hcd *VAR_2)
{

 if (VAR_2->rh_state != VAR_1 ||
   (VAR_2->enabled_hrtimer_events &
   FUNC_0(VAR_0)))
  return;





 if (VAR_2->isoc_count > 0 || (VAR_2->need_io_watchdog &&
   VAR_2->async_count + VAR_2->intr_count > 0))
  FUNC_1(VAR_2, VAR_0,
    1);
}
