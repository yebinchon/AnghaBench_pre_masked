
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_device {int irq_freq; scalar_t__ pie_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (struct rtc_device*,int) ;
 int FUNC_2 (int,int) ;

int FUNC_3(struct rtc_device *VAR_2, int VAR_3)
{
 int VAR_4 = 0;

 if (VAR_3 <= 0 || VAR_3 > VAR_1)
  return -VAR_0;

 VAR_2->irq_freq = VAR_3;
 while (VAR_2->pie_enabled && FUNC_1(VAR_2, 1) < 0)
  FUNC_0();

 FUNC_2(VAR_3, VAR_4);
 return VAR_4;
}
