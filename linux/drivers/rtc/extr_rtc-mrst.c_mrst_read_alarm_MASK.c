
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* tm_hour; void* tm_min; void* tm_sec; } ;
struct rtc_wkalrm {int enabled; scalar_t__ pending; TYPE_1__ time; } ;
struct mrst_rtc {scalar_t__ irq; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct mrst_rtc* FUNC_0 (struct device*) ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_7, struct rtc_wkalrm *VAR_8)
{
 struct mrst_rtc *VAR_9 = FUNC_0(VAR_7);
 unsigned char VAR_10;

 if (VAR_9->irq <= 0)
  return -VAR_0;


 FUNC_1(&VAR_6);
 VAR_8->time.tm_sec = FUNC_3(VAR_5);
 VAR_8->time.tm_min = FUNC_3(VAR_4);
 VAR_8->time.tm_hour = FUNC_3(VAR_3);

 VAR_10 = FUNC_3(VAR_2);
 FUNC_2(&VAR_6);

 VAR_8->enabled = !!(VAR_10 & VAR_1);
 VAR_8->pending = 0;

 return 0;
}
