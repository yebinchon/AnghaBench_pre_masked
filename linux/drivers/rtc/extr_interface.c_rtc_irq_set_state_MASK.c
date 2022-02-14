
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_device {int pie_enabled; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (struct rtc_device*,int) ;
 int FUNC_2 (int,int) ;

int FUNC_3(struct rtc_device *VAR_0, int VAR_1)
{
 int VAR_2 = 0;

 while (FUNC_1(VAR_0, VAR_1) < 0)
  FUNC_0();

 VAR_0->pie_enabled = VAR_1;

 FUNC_2(VAR_1, VAR_2);
 return VAR_2;
}
