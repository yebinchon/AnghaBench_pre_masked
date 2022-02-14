
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int tm_year; } ;
struct rtc_wkalrm {struct rtc_time time; } ;
struct mtk_rtc {int irq; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 struct mtk_rtc* FUNC_1 (struct device*) ;
 int FUNC_2 (struct mtk_rtc*,int ,int ) ;
 int FUNC_3 (struct mtk_rtc*,struct rtc_time*,int ) ;
 int FUNC_4 (struct mtk_rtc*,int ,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_5, struct rtc_wkalrm *VAR_6)
{
 struct mtk_rtc *VAR_7 = FUNC_1(VAR_5);
 struct rtc_time *VAR_8 = &VAR_6->time;

 if (!FUNC_0(VAR_8->tm_year))
  return -VAR_0;





 FUNC_2(VAR_7, VAR_2, VAR_4);






 FUNC_5(VAR_7->irq);

 FUNC_3(VAR_7, VAR_8, VAR_1);


 FUNC_4(VAR_7, VAR_2, VAR_3);

 return 0;
}
