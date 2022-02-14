
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_timer {void (* func ) (struct rtc_device*) ;struct rtc_device* rtc; scalar_t__ enabled; int node; } ;
struct rtc_device {int dummy; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct rtc_timer *VAR_0, void (*VAR_1)(struct rtc_device *VAR_2),
      struct rtc_device *VAR_3)
{
 FUNC_0(&VAR_0->node);
 VAR_0->enabled = 0;
 VAR_0->func = VAR_1;
 VAR_0->rtc = VAR_3;
}
