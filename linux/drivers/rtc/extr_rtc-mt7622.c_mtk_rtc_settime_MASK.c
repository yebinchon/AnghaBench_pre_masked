
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int tm_year; } ;
struct mtk_rtc {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 struct mtk_rtc* FUNC_1 (struct device*) ;
 int FUNC_2 (struct mtk_rtc*,int ,int ) ;
 int FUNC_3 (struct mtk_rtc*,struct rtc_time*,int ) ;
 int FUNC_4 (struct mtk_rtc*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_4, struct rtc_time *VAR_5)
{
 struct mtk_rtc *VAR_6 = FUNC_1(VAR_4);

 if (!FUNC_0(VAR_5->tm_year))
  return -VAR_0;


 FUNC_4(VAR_6, VAR_1, VAR_3);

 FUNC_3(VAR_6, VAR_5, VAR_2);


 FUNC_2(VAR_6, VAR_1, VAR_3);

 return 0;
}
