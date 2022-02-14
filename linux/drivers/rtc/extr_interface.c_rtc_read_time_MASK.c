
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int dummy; } ;
struct rtc_device {int ops_lock; } ;


 int FUNC_0 (struct rtc_device*,struct rtc_time*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct rtc_time*) ;
 int FUNC_4 (int ,int) ;

int FUNC_5(struct rtc_device *VAR_0, struct rtc_time *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(&VAR_0->ops_lock);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_0->ops_lock);

 FUNC_4(FUNC_3(VAR_1), VAR_2);
 return VAR_2;
}
