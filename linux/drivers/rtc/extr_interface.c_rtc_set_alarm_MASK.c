
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct rtc_wkalrm {scalar_t__ enabled; int time; } ;
struct TYPE_6__ {int expires; } ;
struct TYPE_7__ {scalar_t__ period; TYPE_2__ node; scalar_t__ enabled; } ;
struct rtc_device {int ops_lock; TYPE_3__ aie_timer; TYPE_1__* ops; } ;
struct TYPE_5__ {int set_alarm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rtc_device*,TYPE_3__*) ;
 int FUNC_3 (struct rtc_device*,TYPE_3__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct rtc_device*,int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct rtc_device *VAR_2, struct rtc_wkalrm *VAR_3)
{
 int VAR_4;

 if (!VAR_2->ops)
  return -VAR_1;
 else if (!VAR_2->ops->set_alarm)
  return -VAR_0;

 VAR_4 = FUNC_6(&VAR_3->time);
 if (VAR_4 != 0)
  return VAR_4;

 VAR_4 = FUNC_5(VAR_2, &VAR_3->time);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_0(&VAR_2->ops_lock);
 if (VAR_4)
  return VAR_4;
 if (VAR_2->aie_timer.enabled)
  FUNC_3(VAR_2, &VAR_2->aie_timer);

 VAR_2->aie_timer.node.expires = FUNC_4(VAR_3->time);
 VAR_2->aie_timer.period = 0;
 if (VAR_3->enabled)
  VAR_4 = FUNC_2(VAR_2, &VAR_2->aie_timer);

 FUNC_1(&VAR_2->ops_lock);

 return VAR_4;
}
