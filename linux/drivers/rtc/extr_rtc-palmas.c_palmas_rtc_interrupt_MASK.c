
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct palmas_rtc {int rtc; struct device* dev; } ;
struct device {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (int ,int,int) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_4, void *VAR_5)
{
 struct palmas_rtc *VAR_6 = VAR_5;
 struct device *VAR_7 = VAR_6->dev;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_7);
 if (VAR_8 < 0) {
  FUNC_0(VAR_7, "RTC interrupt clear failed, err = %d\n", VAR_8);
  return VAR_1;
 }

 FUNC_2(VAR_6->rtc, 1, VAR_3 | VAR_2);
 return VAR_0;
}
