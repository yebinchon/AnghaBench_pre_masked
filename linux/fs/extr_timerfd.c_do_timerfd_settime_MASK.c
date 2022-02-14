
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int lock; } ;
struct TYPE_9__ {int timer; } ;
struct TYPE_7__ {int tmr; TYPE_4__ alarm; } ;
struct timerfd_ctx {TYPE_3__ wqh; scalar_t__ tintv; TYPE_2__ t; scalar_t__ expired; } ;
struct itimerspec64 {void* it_interval; void* it_value; } ;
struct fd {TYPE_1__* file; } ;
struct TYPE_6__ {struct timerfd_ctx* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_4__*,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct fd) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,scalar_t__) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (struct timerfd_ctx*) ;
 int FUNC_8 (struct itimerspec64 const*) ;
 void* FUNC_9 (scalar_t__) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int,struct fd*) ;
 scalar_t__ FUNC_13 (struct timerfd_ctx*) ;
 int FUNC_14 (struct timerfd_ctx*,int,struct itimerspec64 const*) ;
 int FUNC_15 (struct timerfd_ctx*,int) ;

__attribute__((used)) static int FUNC_16(int VAR_4, int VAR_5,
  const struct itimerspec64 *VAR_6,
  struct itimerspec64 *VAR_7)
{
 struct fd VAR_8;
 struct timerfd_ctx *VAR_9;
 int VAR_10;

 if ((VAR_5 & ~VAR_3) ||
   !FUNC_8(VAR_6))
  return -VAR_1;

 VAR_10 = FUNC_12(VAR_4, &VAR_8);
 if (VAR_10)
  return VAR_10;
 VAR_9 = VAR_8.file->private_data;

 if (FUNC_7(VAR_9) && !FUNC_2(VAR_0)) {
  FUNC_3(VAR_8);
  return -VAR_2;
 }

 FUNC_15(VAR_9, VAR_5);





 for (;;) {
  FUNC_10(&VAR_9->wqh.lock);

  if (FUNC_7(VAR_9)) {
   if (FUNC_1(&VAR_9->t.alarm) >= 0)
    break;
  } else {
   if (FUNC_6(&VAR_9->t.tmr) >= 0)
    break;
  }
  FUNC_11(&VAR_9->wqh.lock);

  if (FUNC_7(VAR_9))
   FUNC_4(&VAR_9->t.alarm.timer);
  else
   FUNC_4(&VAR_9->t.tmr);
 }







 if (VAR_9->expired && VAR_9->tintv) {
  if (FUNC_7(VAR_9))
   FUNC_0(&VAR_9->t.alarm, VAR_9->tintv);
  else
   FUNC_5(&VAR_9->t.tmr, VAR_9->tintv);
 }

 VAR_7->it_value = FUNC_9(FUNC_13(VAR_9));
 VAR_7->it_interval = FUNC_9(VAR_9->tintv);




 VAR_10 = FUNC_14(VAR_9, VAR_5, VAR_6);

 FUNC_11(&VAR_9->wqh.lock);
 FUNC_3(VAR_8);
 return VAR_10;
}
