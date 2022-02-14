
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_wkalrm {int pending; int time; int enabled; } ;
struct lpc32xx_rtc {int alarm_enabled; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct lpc32xx_rtc* FUNC_0 (struct device*) ;
 int FUNC_1 (struct lpc32xx_rtc*,int ) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_3,
 struct rtc_wkalrm *VAR_4)
{
 struct lpc32xx_rtc *VAR_5 = FUNC_0(VAR_3);

 FUNC_2(FUNC_1(VAR_5, VAR_2), &VAR_4->time);
 VAR_4->enabled = VAR_5->alarm_enabled;
 VAR_4->pending = !!(FUNC_1(VAR_5, VAR_0) &
  VAR_1);

 return FUNC_3(&VAR_4->time);
}
