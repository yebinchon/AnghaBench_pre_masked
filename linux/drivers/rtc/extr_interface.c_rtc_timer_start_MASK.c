
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* expires; } ;
struct rtc_timer {void* period; TYPE_1__ node; scalar_t__ enabled; } ;
struct rtc_device {int ops_lock; } ;
typedef void* ktime_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rtc_device*,struct rtc_timer*) ;
 int FUNC_3 (struct rtc_device*,struct rtc_timer*) ;

int FUNC_4(struct rtc_device *VAR_0, struct rtc_timer *VAR_1,
      ktime_t VAR_2, ktime_t VAR_3)
{
 int VAR_4 = 0;

 FUNC_0(&VAR_0->ops_lock);
 if (VAR_1->enabled)
  FUNC_3(VAR_0, VAR_1);

 VAR_1->node.expires = VAR_2;
 VAR_1->period = VAR_3;

 VAR_4 = FUNC_2(VAR_0, VAR_1);

 FUNC_1(&VAR_0->ops_lock);
 return VAR_4;
}
