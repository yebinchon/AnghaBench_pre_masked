
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {void* tm_year; void* tm_mon; void* tm_mday; void* tm_hour; void* tm_min; void* tm_sec; } ;
struct rtc_wkalrm {int enabled; TYPE_1__ time; } ;
struct omap_rtc {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_1__*) ;
 struct omap_rtc* FUNC_1 (struct device*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 void* FUNC_4 (struct omap_rtc*,int ) ;
 int FUNC_5 (struct omap_rtc*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_8, struct rtc_wkalrm *VAR_9)
{
 struct omap_rtc *VAR_10 = FUNC_1(VAR_8);
 u8 VAR_11;

 FUNC_2();
 FUNC_5(VAR_10);

 VAR_9->time.tm_sec = FUNC_4(VAR_10, VAR_4);
 VAR_9->time.tm_min = FUNC_4(VAR_10, VAR_2);
 VAR_9->time.tm_hour = FUNC_4(VAR_10, VAR_1);
 VAR_9->time.tm_mday = FUNC_4(VAR_10, VAR_0);
 VAR_9->time.tm_mon = FUNC_4(VAR_10, VAR_3);
 VAR_9->time.tm_year = FUNC_4(VAR_10, VAR_5);

 FUNC_3();

 FUNC_0(&VAR_9->time);

 VAR_11 = FUNC_4(VAR_10, VAR_7);
 VAR_9->enabled = !!(VAR_11 & VAR_6);

 return 0;
}
