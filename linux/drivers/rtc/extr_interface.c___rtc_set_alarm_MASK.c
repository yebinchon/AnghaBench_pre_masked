
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ time64_t ;
struct rtc_time {int dummy; } ;
struct rtc_wkalrm {struct rtc_time time; } ;
struct TYPE_4__ {int parent; } ;
struct rtc_device {TYPE_2__ dev; TYPE_1__* ops; } ;
struct TYPE_3__ {int (* set_alarm ) (int ,struct rtc_wkalrm*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtc_device*,struct rtc_time*) ;
 int FUNC_1 (struct rtc_device*,struct rtc_time*) ;
 scalar_t__ FUNC_2 (struct rtc_time*) ;
 int FUNC_3 (struct rtc_time*) ;
 int FUNC_4 (int ,struct rtc_wkalrm*) ;
 int FUNC_5 (scalar_t__,int) ;

__attribute__((used)) static int FUNC_6(struct rtc_device *VAR_3, struct rtc_wkalrm *VAR_4)
{
 struct rtc_time VAR_5;
 time64_t VAR_6, VAR_7;
 int VAR_8;

 VAR_8 = FUNC_3(&VAR_4->time);
 if (VAR_8)
  return VAR_8;

 VAR_7 = FUNC_2(&VAR_4->time);


 VAR_8 = FUNC_0(VAR_3, &VAR_5);
 if (VAR_8)
  return VAR_8;
 VAR_6 = FUNC_2(&VAR_5);
 if (VAR_7 <= VAR_6)
  return -VAR_2;







 FUNC_1(VAR_3, &VAR_4->time);

 if (!VAR_3->ops)
  VAR_8 = -VAR_1;
 else if (!VAR_3->ops->set_alarm)
  VAR_8 = -VAR_0;
 else
  VAR_8 = VAR_3->ops->set_alarm(VAR_3->dev.parent, VAR_4);

 FUNC_5(FUNC_2(&VAR_4->time), VAR_8);
 return VAR_8;
}
