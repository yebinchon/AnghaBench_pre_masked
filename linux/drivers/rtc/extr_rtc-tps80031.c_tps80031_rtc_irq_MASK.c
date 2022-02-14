
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tps80031_rtc {int rtc; } ;
struct device {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,struct tps80031_rtc*) ;
 struct tps80031_rtc* FUNC_1 (struct device*) ;
 int FUNC_2 (int ,int,int) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_3, void *VAR_4)
{
 struct device *VAR_5 = VAR_4;
 struct tps80031_rtc *VAR_6 = FUNC_1(VAR_5);
 int VAR_7;

 VAR_7 = FUNC_0(VAR_5, VAR_6);
 if (VAR_7 < 0)
  return VAR_7;

 FUNC_2(VAR_6->rtc, 1, VAR_2 | VAR_1);
 return VAR_0;
}
