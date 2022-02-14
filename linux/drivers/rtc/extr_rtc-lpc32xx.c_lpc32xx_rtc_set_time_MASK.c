
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtc_time {int dummy; } ;
struct lpc32xx_rtc {int lock; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct lpc32xx_rtc* FUNC_0 (struct device*) ;
 int FUNC_1 (struct lpc32xx_rtc*,int ) ;
 int FUNC_2 (struct rtc_time*) ;
 int FUNC_3 (struct lpc32xx_rtc*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_4, struct rtc_time *VAR_5)
{
 struct lpc32xx_rtc *VAR_6 = FUNC_0(VAR_4);
 u32 VAR_7 = FUNC_2(VAR_5);
 u32 VAR_8;

 FUNC_4(&VAR_6->lock);


 VAR_8 = FUNC_1(VAR_6, VAR_0);
 FUNC_3(VAR_6, VAR_0, VAR_8 | VAR_1);
 FUNC_3(VAR_6, VAR_3, VAR_7);
 FUNC_3(VAR_6, VAR_2, 0xFFFFFFFF - VAR_7);
 FUNC_3(VAR_6, VAR_0, VAR_8 &= ~VAR_1);

 FUNC_5(&VAR_6->lock);

 return 0;
}
