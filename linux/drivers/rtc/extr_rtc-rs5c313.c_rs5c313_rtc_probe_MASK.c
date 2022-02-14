
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_device {int dummy; } ;
struct platform_device {int dev; } ;


 scalar_t__ FUNC_0 (struct rtc_device*) ;
 int FUNC_1 (struct rtc_device*) ;
 int VAR_0 ;
 struct rtc_device* FUNC_2 (int *,char*,int *,int ) ;
 int FUNC_3 (struct platform_device*,struct rtc_device*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_2)
{
 struct rtc_device *VAR_3 = FUNC_2(&VAR_2->dev, "rs5c313",
    &VAR_1, VAR_0);

 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 FUNC_3(VAR_2, VAR_3);

 return 0;
}
