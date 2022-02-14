
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int lock; } ;
struct TYPE_5__ {int tmr; int alarm; } ;
struct timerfd_ctx {TYPE_3__ wqh; scalar_t__ tintv; TYPE_2__ t; int ticks; scalar_t__ expired; } ;
struct itimerspec64 {void* it_interval; void* it_value; } ;
struct fd {TYPE_1__* file; } ;
struct TYPE_4__ {struct timerfd_ctx* private_data; } ;


 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct fd) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct timerfd_ctx*) ;
 void* FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int,struct fd*) ;
 scalar_t__ FUNC_10 (struct timerfd_ctx*) ;

__attribute__((used)) static int FUNC_11(int VAR_0, struct itimerspec64 *VAR_1)
{
 struct fd VAR_2;
 struct timerfd_ctx *VAR_3;
 int VAR_4 = FUNC_9(VAR_0, &VAR_2);
 if (VAR_4)
  return VAR_4;
 VAR_3 = VAR_2.file->private_data;

 FUNC_7(&VAR_3->wqh.lock);
 if (VAR_3->expired && VAR_3->tintv) {
  VAR_3->expired = 0;

  if (FUNC_5(VAR_3)) {
   VAR_3->ticks +=
    FUNC_0(
     &VAR_3->t.alarm, VAR_3->tintv) - 1;
   FUNC_1(&VAR_3->t.alarm);
  } else {
   VAR_3->ticks +=
    FUNC_3(&VAR_3->t.tmr, VAR_3->tintv)
    - 1;
   FUNC_4(&VAR_3->t.tmr);
  }
 }
 VAR_1->it_value = FUNC_6(FUNC_10(VAR_3));
 VAR_1->it_interval = FUNC_6(VAR_3->tintv);
 FUNC_8(&VAR_3->wqh.lock);
 FUNC_2(VAR_2);
 return 0;
}
