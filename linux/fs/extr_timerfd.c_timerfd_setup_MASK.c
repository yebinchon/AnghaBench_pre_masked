
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int function; } ;
struct TYPE_5__ {TYPE_2__ tmr; int alarm; } ;
struct timerfd_ctx {int clockid; int settime_flags; TYPE_1__ t; void* tintv; scalar_t__ ticks; scalar_t__ expired; } ;
struct itimerspec64 {int it_interval; int it_value; } ;
typedef scalar_t__ ktime_t ;
typedef enum hrtimer_mode { ____Placeholder_hrtimer_mode } hrtimer_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (TYPE_2__*,int,int) ;
 int FUNC_4 (TYPE_2__*,scalar_t__) ;
 int FUNC_5 (TYPE_2__*,scalar_t__,int) ;
 scalar_t__ FUNC_6 (struct timerfd_ctx*) ;
 int VAR_8 ;
 scalar_t__ FUNC_7 (struct timerfd_ctx*) ;
 int VAR_9 ;
 void* FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct timerfd_ctx *VAR_10, int VAR_11,
    const struct itimerspec64 *VAR_12)
{
 enum hrtimer_mode VAR_13;
 ktime_t VAR_14;
 int VAR_15 = VAR_10->clockid;

 VAR_13 = (VAR_11 & VAR_7) ?
  VAR_4: VAR_5;

 VAR_14 = FUNC_8(VAR_12->it_value);
 VAR_10->expired = 0;
 VAR_10->ticks = 0;
 VAR_10->tintv = FUNC_8(VAR_12->it_interval);

 if (FUNC_6(VAR_10)) {
  FUNC_0(&VAR_10->t.alarm,
      VAR_10->clockid == VAR_2 ?
      VAR_1 : VAR_0,
      VAR_8);
 } else {
  FUNC_3(&VAR_10->t.tmr, VAR_15, VAR_13);
  FUNC_4(&VAR_10->t.tmr, VAR_14);
  VAR_10->t.tmr.function = VAR_9;
 }

 if (VAR_14 != 0) {
  if (FUNC_6(VAR_10)) {
   if (VAR_11 & VAR_7)
    FUNC_1(&VAR_10->t.alarm, VAR_14);
   else
    FUNC_2(&VAR_10->t.alarm, VAR_14);
  } else {
   FUNC_5(&VAR_10->t.tmr, VAR_14, VAR_13);
  }

  if (FUNC_7(VAR_10))
   return -VAR_3;
 }

 VAR_10->settime_flags = VAR_11 & VAR_6;
 return 0;
}
