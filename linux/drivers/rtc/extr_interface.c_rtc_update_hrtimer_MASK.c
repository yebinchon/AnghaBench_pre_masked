
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_device {int irq_freq; int pie_timer; } ;
typedef int ktime_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int ) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct rtc_device *VAR_2, int VAR_3)
{
 if (FUNC_1(&VAR_2->pie_timer) < 0)
  return -1;

 if (VAR_3) {
  ktime_t VAR_4 = VAR_1 / VAR_2->irq_freq;

  FUNC_0(&VAR_2->pie_timer, VAR_4, VAR_0);
 }
 return 0;
}
