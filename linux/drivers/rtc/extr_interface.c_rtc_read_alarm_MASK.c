
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rtc_wkalrm {int time; int enabled; } ;
struct TYPE_4__ {int expires; } ;
struct TYPE_5__ {TYPE_1__ node; int enabled; } ;
struct rtc_device {int ops_lock; TYPE_2__ aie_timer; TYPE_3__* ops; } ;
struct TYPE_6__ {int read_alarm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtc_wkalrm*,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int) ;

int FUNC_6(struct rtc_device *VAR_2, struct rtc_wkalrm *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(&VAR_2->ops_lock);
 if (VAR_4)
  return VAR_4;
 if (!VAR_2->ops) {
  VAR_4 = -VAR_1;
 } else if (!VAR_2->ops->read_alarm) {
  VAR_4 = -VAR_0;
 } else {
  FUNC_0(VAR_3, 0, sizeof(struct rtc_wkalrm));
  VAR_3->enabled = VAR_2->aie_timer.enabled;
  VAR_3->time = FUNC_3(VAR_2->aie_timer.node.expires);
 }
 FUNC_2(&VAR_2->ops_lock);

 FUNC_5(FUNC_4(&VAR_3->time), VAR_4);
 return VAR_4;
}
