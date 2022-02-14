
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timerqueue_node {int expires; } ;
struct rtc_wkalrm {int enabled; int time; } ;
struct rtc_timer {struct timerqueue_node node; scalar_t__ enabled; } ;
struct TYPE_2__ {int parent; } ;
struct rtc_device {int irqwork; TYPE_1__ dev; int timerqueue; } ;


 int VAR_0 ;
 int FUNC_0 (struct rtc_device*,struct rtc_wkalrm*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct rtc_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,struct timerqueue_node*) ;
 struct timerqueue_node* FUNC_6 (int *) ;
 int FUNC_7 (struct rtc_timer*) ;

__attribute__((used)) static void FUNC_8(struct rtc_device *VAR_1, struct rtc_timer *VAR_2)
{
 struct timerqueue_node *VAR_3 = FUNC_6(&VAR_1->timerqueue);

 FUNC_5(&VAR_1->timerqueue, &VAR_2->node);
 FUNC_7(VAR_2);
 VAR_2->enabled = 0;
 if (VAR_3 == &VAR_2->node) {
  struct rtc_wkalrm VAR_4;
  int VAR_5;

  VAR_3 = FUNC_6(&VAR_1->timerqueue);
  if (!VAR_3) {
   FUNC_2(VAR_1);
   return;
  }
  VAR_4.time = FUNC_3(VAR_3->expires);
  VAR_4.enabled = 1;
  VAR_5 = FUNC_0(VAR_1, &VAR_4);
  if (VAR_5 == -VAR_0) {
   FUNC_1(VAR_1->dev.parent);
   FUNC_4(&VAR_1->irqwork);
  }
 }
}
