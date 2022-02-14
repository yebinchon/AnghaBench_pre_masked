
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; int tm_year; int tm_wday; int tm_yday; int tm_isdst; } ;
struct rtc_wkalrm {TYPE_3__ time; scalar_t__ pending; scalar_t__ enabled; } ;
struct TYPE_5__ {int parent; } ;
struct rtc_device {int ops_lock; TYPE_2__ dev; TYPE_1__* ops; } ;
struct TYPE_4__ {int (* read_alarm ) (int ,struct rtc_wkalrm*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ,struct rtc_wkalrm*) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static int FUNC_5(struct rtc_device *VAR_2,
       struct rtc_wkalrm *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(&VAR_2->ops_lock);
 if (VAR_4)
  return VAR_4;

 if (!VAR_2->ops) {
  VAR_4 = -VAR_1;
 } else if (!VAR_2->ops->read_alarm) {
  VAR_4 = -VAR_0;
 } else {
  VAR_3->enabled = 0;
  VAR_3->pending = 0;
  VAR_3->time.tm_sec = -1;
  VAR_3->time.tm_min = -1;
  VAR_3->time.tm_hour = -1;
  VAR_3->time.tm_mday = -1;
  VAR_3->time.tm_mon = -1;
  VAR_3->time.tm_year = -1;
  VAR_3->time.tm_wday = -1;
  VAR_3->time.tm_yday = -1;
  VAR_3->time.tm_isdst = -1;
  VAR_4 = VAR_2->ops->read_alarm(VAR_2->dev.parent, VAR_3);
 }

 FUNC_1(&VAR_2->ops_lock);

 FUNC_4(FUNC_2(&VAR_3->time), VAR_4);
 return VAR_4;
}
