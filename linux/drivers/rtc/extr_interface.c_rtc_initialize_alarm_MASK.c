
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rtc_time {int dummy; } ;
struct rtc_wkalrm {scalar_t__ enabled; struct rtc_time time; } ;
struct TYPE_4__ {scalar_t__ expires; } ;
struct TYPE_3__ {int enabled; TYPE_2__ node; scalar_t__ period; } ;
struct rtc_device {int ops_lock; TYPE_1__ aie_timer; int timerqueue; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rtc_device*,struct rtc_time*) ;
 scalar_t__ FUNC_3 (struct rtc_time) ;
 int FUNC_4 (struct rtc_time*) ;
 int FUNC_5 (int *,TYPE_2__*) ;
 int FUNC_6 (TYPE_1__*) ;

int FUNC_7(struct rtc_device *VAR_0, struct rtc_wkalrm *VAR_1)
{
 int VAR_2;
 struct rtc_time VAR_3;

 VAR_2 = FUNC_4(&VAR_1->time);
 if (VAR_2 != 0)
  return VAR_2;

 VAR_2 = FUNC_2(VAR_0, &VAR_3);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_0(&VAR_0->ops_lock);
 if (VAR_2)
  return VAR_2;

 VAR_0->aie_timer.node.expires = FUNC_3(VAR_1->time);
 VAR_0->aie_timer.period = 0;


 if (VAR_1->enabled && (FUNC_3(VAR_3) <
    VAR_0->aie_timer.node.expires)) {
  VAR_0->aie_timer.enabled = 1;
  FUNC_5(&VAR_0->timerqueue, &VAR_0->aie_timer.node);
  FUNC_6(&VAR_0->aie_timer);
 }
 FUNC_1(&VAR_0->ops_lock);
 return VAR_2;
}
