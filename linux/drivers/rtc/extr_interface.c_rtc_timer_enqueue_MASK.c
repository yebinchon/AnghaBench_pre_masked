
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timerqueue_node {scalar_t__ expires; } ;
struct rtc_wkalrm {int enabled; int time; } ;
struct TYPE_5__ {int expires; } ;
struct rtc_timer {int enabled; TYPE_2__ node; } ;
struct rtc_time {int dummy; } ;
struct TYPE_4__ {int parent; } ;
struct rtc_device {int timerqueue; int irqwork; TYPE_1__ dev; } ;
typedef scalar_t__ ktime_t ;


 int VAR_0 ;
 int FUNC_0 (struct rtc_device*,struct rtc_time*) ;
 int FUNC_1 (struct rtc_device*,struct rtc_wkalrm*) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct rtc_time) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,TYPE_2__*) ;
 int FUNC_8 (int *,TYPE_2__*) ;
 struct timerqueue_node* FUNC_9 (int *) ;
 struct timerqueue_node* FUNC_10 (struct timerqueue_node*) ;
 int FUNC_11 (struct rtc_timer*) ;
 int FUNC_12 (struct rtc_timer*) ;

__attribute__((used)) static int FUNC_13(struct rtc_device *VAR_1, struct rtc_timer *VAR_2)
{
 struct timerqueue_node *VAR_3 = FUNC_9(&VAR_1->timerqueue);
 struct rtc_time VAR_4;
 ktime_t VAR_5;

 VAR_2->enabled = 1;
 FUNC_0(VAR_1, &VAR_4);
 VAR_5 = FUNC_5(VAR_4);


 while (VAR_3) {
  if (VAR_3->expires >= VAR_5)
   break;
  VAR_3 = FUNC_10(VAR_3);
 }

 FUNC_7(&VAR_1->timerqueue, &VAR_2->node);
 FUNC_12(VAR_2);
 if (!VAR_3 || FUNC_2(VAR_2->node.expires, VAR_3->expires)) {
  struct rtc_wkalrm VAR_6;
  int VAR_7;

  VAR_6.time = FUNC_4(VAR_2->node.expires);
  VAR_6.enabled = 1;
  VAR_7 = FUNC_1(VAR_1, &VAR_6);
  if (VAR_7 == -VAR_0) {
   FUNC_3(VAR_1->dev.parent);
   FUNC_6(&VAR_1->irqwork);
  } else if (VAR_7) {
   FUNC_8(&VAR_1->timerqueue, &VAR_2->node);
   FUNC_11(VAR_2);
   VAR_2->enabled = 0;
   return VAR_7;
  }
 }
 return 0;
}
