
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pic32_rtc_dev {int clk; int rtc; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct pic32_rtc_dev*,int) ;
 int FUNC_3 (int ,int,int) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_3, void *VAR_4)
{
 struct pic32_rtc_dev *VAR_5 = (struct pic32_rtc_dev *)VAR_4;

 FUNC_1(VAR_5->clk);
 FUNC_3(VAR_5->rtc, 1, VAR_1 | VAR_2);
 FUNC_0(VAR_5->clk);

 FUNC_2(VAR_5, 0);

 return VAR_0;
}
