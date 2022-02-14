
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tmr; int alarm; } ;
struct timerfd_ctx {TYPE_1__ t; } ;
typedef scalar_t__ ktime_t ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct timerfd_ctx*) ;

__attribute__((used)) static ktime_t FUNC_3(struct timerfd_ctx *VAR_0)
{
 ktime_t VAR_1;

 if (FUNC_2(VAR_0))
  VAR_1 = FUNC_0(&VAR_0->t.alarm);
 else
  VAR_1 = FUNC_1(&VAR_0->t.tmr);

 return VAR_1 < 0 ? 0: VAR_1;
}
