
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_device {int dev; scalar_t__ registered; } ;
struct device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct rtc_device*) ;
 int FUNC_2 (struct rtc_device*) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_0, void *VAR_1)
{
 struct rtc_device *VAR_2 = *(struct rtc_device **)VAR_1;

 FUNC_2(VAR_2);

 if (VAR_2->registered)
  FUNC_1(VAR_2);
 else
  FUNC_0(&VAR_2->dev);
}
