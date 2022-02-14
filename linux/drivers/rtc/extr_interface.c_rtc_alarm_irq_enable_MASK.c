
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int parent; } ;
struct TYPE_7__ {unsigned int enabled; } ;
struct rtc_device {int ops_lock; TYPE_2__ dev; TYPE_1__* ops; TYPE_3__ aie_timer; } ;
struct TYPE_5__ {int (* alarm_irq_enable ) (int ,unsigned int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rtc_device*,TYPE_3__*) ;
 int FUNC_3 (struct rtc_device*,TYPE_3__*) ;
 int FUNC_4 (int ,unsigned int) ;
 int FUNC_5 (unsigned int,int) ;

int FUNC_6(struct rtc_device *VAR_2, unsigned int VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(&VAR_2->ops_lock);
 if (VAR_4)
  return VAR_4;

 if (VAR_2->aie_timer.enabled != VAR_3) {
  if (VAR_3)
   VAR_4 = FUNC_2(VAR_2, &VAR_2->aie_timer);
  else
   FUNC_3(VAR_2, &VAR_2->aie_timer);
 }

 if (VAR_4)
               ;
 else if (!VAR_2->ops)
  VAR_4 = -VAR_1;
 else if (!VAR_2->ops->alarm_irq_enable)
  VAR_4 = -VAR_0;
 else
  VAR_4 = VAR_2->ops->alarm_irq_enable(VAR_2->dev.parent, VAR_3);

 FUNC_1(&VAR_2->ops_lock);

 FUNC_5(VAR_3, VAR_4);
 return VAR_4;
}
