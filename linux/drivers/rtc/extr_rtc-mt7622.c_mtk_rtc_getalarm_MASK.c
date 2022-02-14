
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int dummy; } ;
struct rtc_wkalrm {int enabled; int pending; struct rtc_time time; } ;
struct mtk_rtc {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct mtk_rtc* FUNC_0 (struct device*) ;
 int FUNC_1 (struct mtk_rtc*,int ) ;
 int FUNC_2 (struct mtk_rtc*,struct rtc_time*,int ) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_5, struct rtc_wkalrm *VAR_6)
{
 struct mtk_rtc *VAR_7 = FUNC_0(VAR_5);
 struct rtc_time *VAR_8 = &VAR_6->time;

 FUNC_2(VAR_7, VAR_8, VAR_0);

 VAR_6->enabled = !!(FUNC_1(VAR_7, VAR_1) & VAR_3);
 VAR_6->pending = !!(FUNC_1(VAR_7, VAR_2) & VAR_4);

 return 0;
}
