
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mtk_rtc {int rtc; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct mtk_rtc*,int ) ;
 int FUNC_1 (struct mtk_rtc*,int ,int) ;
 int FUNC_2 (int ,int,int) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_7, void *VAR_8)
{
 struct mtk_rtc *VAR_9 = (struct mtk_rtc *)VAR_8;
 u32 VAR_10;

 VAR_10 = FUNC_0(VAR_9, VAR_3);
 if (VAR_10 & VAR_5) {

  FUNC_1(VAR_9, VAR_2, 0);
  FUNC_2(VAR_9->rtc, 1, VAR_6 | VAR_4);


  FUNC_1(VAR_9, VAR_3, VAR_5);
  return VAR_0;
 }

 return VAR_1;
}
