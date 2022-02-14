
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lpc32xx_rtc {int alarm_enabled; int lock; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct lpc32xx_rtc* FUNC_0 (struct device*) ;
 int FUNC_1 (struct lpc32xx_rtc*,int ) ;
 int FUNC_2 (struct lpc32xx_rtc*,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_2,
 unsigned int VAR_3)
{
 struct lpc32xx_rtc *VAR_4 = FUNC_0(VAR_2);
 u32 VAR_5;

 FUNC_3(&VAR_4->lock);
 VAR_5 = FUNC_1(VAR_4, VAR_0);

 if (VAR_3) {
  VAR_4->alarm_enabled = 1;
  VAR_5 |= VAR_1;
 } else {
  VAR_4->alarm_enabled = 0;
  VAR_5 &= ~VAR_1;
 }

 FUNC_2(VAR_4, VAR_0, VAR_5);
 FUNC_4(&VAR_4->lock);

 return 0;
}
