
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_device {int owner; int range_max; int range_min; int * ops; } ;
struct platform_device {int dev; } ;


 scalar_t__ FUNC_0 (struct rtc_device*) ;
 int FUNC_1 (struct rtc_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct rtc_device* FUNC_2 (int *) ;
 int FUNC_3 (struct rtc_device*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_4)
{
 struct rtc_device *VAR_5;

 VAR_5 = FUNC_2(&VAR_4->dev);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 VAR_5->ops = &VAR_3;

 VAR_5->range_min = VAR_0;
 VAR_5->range_max = VAR_1;
 VAR_5->owner = VAR_2;

 return FUNC_3(VAR_5);
}
