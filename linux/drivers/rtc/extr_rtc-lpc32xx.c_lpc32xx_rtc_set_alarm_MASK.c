
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct rtc_wkalrm {scalar_t__ enabled; int time; } ;
struct lpc32xx_rtc {int lock; scalar_t__ alarm_enabled; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 struct lpc32xx_rtc* FUNC_0 (struct device*) ;
 unsigned long FUNC_1 (struct lpc32xx_rtc*,int ) ;
 unsigned long FUNC_2 (int *) ;
 int FUNC_3 (struct lpc32xx_rtc*,int ,unsigned long) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_5,
 struct rtc_wkalrm *VAR_6)
{
 struct lpc32xx_rtc *VAR_7 = FUNC_0(VAR_5);
 unsigned long VAR_8;
 u32 VAR_9;

 VAR_8 = FUNC_2(&VAR_6->time);

 FUNC_4(&VAR_7->lock);


 VAR_9 = FUNC_1(VAR_7, VAR_0);
 FUNC_3(VAR_7, VAR_0, VAR_9 & ~VAR_1);

 FUNC_3(VAR_7, VAR_4, VAR_8);

 VAR_7->alarm_enabled = VAR_6->enabled;
 if (VAR_6->enabled) {
  FUNC_3(VAR_7, VAR_2,
      VAR_3);
  FUNC_3(VAR_7, VAR_0, VAR_9 |
      VAR_1);
 }

 FUNC_5(&VAR_7->lock);

 return 0;
}
