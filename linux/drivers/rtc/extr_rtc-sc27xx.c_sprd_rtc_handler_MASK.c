
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sprd_rtc {int rtc; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (struct sprd_rtc*) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_3, void *VAR_4)
{
 struct sprd_rtc *VAR_5 = VAR_4;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_5);
 if (VAR_6)
  return FUNC_0(VAR_6);

 FUNC_1(VAR_5->rtc, 1, VAR_1 | VAR_2);
 return VAR_0;
}
