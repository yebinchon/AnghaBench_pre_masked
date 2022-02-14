
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int dummy; } ;
struct mtk_rtc {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct mtk_rtc* FUNC_0 (struct device*) ;
 int FUNC_1 (struct mtk_rtc*,struct rtc_time*,int ) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_1, struct rtc_time *VAR_2)
{
 struct mtk_rtc *VAR_3 = FUNC_0(VAR_1);

 FUNC_1(VAR_3, VAR_2, VAR_0);

 return 0;
}
