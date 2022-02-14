
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rtc_time {int dummy; } ;
struct TYPE_4__ {int expires; } ;
struct TYPE_5__ {unsigned int enabled; void* period; TYPE_1__ node; } ;
struct rtc_device {int ops_lock; TYPE_2__ uie_rtctimer; scalar_t__ uie_unsupported; scalar_t__ uie_irq_active; } ;
typedef void* ktime_t ;


 int VAR_0 ;
 int FUNC_0 (struct rtc_device*,struct rtc_time*) ;
 int FUNC_1 (void*,void*) ;
 void* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct rtc_device*,unsigned int) ;
 int FUNC_6 (struct rtc_device*,TYPE_2__*) ;
 int FUNC_7 (struct rtc_device*,TYPE_2__*) ;
 void* FUNC_8 (struct rtc_time) ;

int FUNC_9(struct rtc_device *VAR_1, unsigned int VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_3(&VAR_1->ops_lock);
 if (VAR_3)
  return VAR_3;
 if (VAR_1->uie_rtctimer.enabled == VAR_2)
  goto out;

 if (VAR_1->uie_unsupported) {
  VAR_3 = -VAR_0;
  goto out;
 }

 if (VAR_2) {
  struct rtc_time VAR_4;
  ktime_t VAR_5, VAR_6;

  FUNC_0(VAR_1, &VAR_4);
  VAR_6 = FUNC_2(1, 0);
  VAR_5 = FUNC_8(VAR_4);
  VAR_1->uie_rtctimer.node.expires = FUNC_1(VAR_5, VAR_6);
  VAR_1->uie_rtctimer.period = FUNC_2(1, 0);
  VAR_3 = FUNC_6(VAR_1, &VAR_1->uie_rtctimer);
 } else {
  FUNC_7(VAR_1, &VAR_1->uie_rtctimer);
 }

out:
 FUNC_4(&VAR_1->ops_lock);
 return VAR_3;
}
