
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int function; } ;
struct TYPE_4__ {int release; int groups; int class; } ;
struct rtc_device {int set_offset_nsec; int irq_freq; int max_user_freq; scalar_t__ pie_enabled; TYPE_1__ pie_timer; int uie_rtctimer; int aie_timer; int irqwork; int timerqueue; int irq_queue; int irq_lock; int ops_lock; TYPE_2__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;
 int FUNC_3 (int *) ;
 struct rtc_device* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 () ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (int *,int ,struct rtc_device*) ;
 int VAR_9 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static struct rtc_device *FUNC_10(void)
{
 struct rtc_device *VAR_10;

 VAR_10 = FUNC_4(sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return ((void*)0);

 FUNC_1(&VAR_10->dev);


 VAR_10->set_offset_nsec = VAR_3 / 2;

 VAR_10->irq_freq = 1;
 VAR_10->max_user_freq = 64;
 VAR_10->dev.class = VAR_5;
 VAR_10->dev.groups = FUNC_6();
 VAR_10->dev.release = VAR_6;

 FUNC_5(&VAR_10->ops_lock);
 FUNC_8(&VAR_10->irq_lock);
 FUNC_3(&VAR_10->irq_queue);


 FUNC_9(&VAR_10->timerqueue);
 FUNC_0(&VAR_10->irqwork, VAR_8);

 FUNC_7(&VAR_10->aie_timer, VAR_4, VAR_10);

 FUNC_7(&VAR_10->uie_rtctimer, VAR_9, VAR_10);

 FUNC_2(&VAR_10->pie_timer, VAR_0, VAR_2);
 VAR_10->pie_timer.function = VAR_7;
 VAR_10->pie_enabled = 0;

 return VAR_10;
}
