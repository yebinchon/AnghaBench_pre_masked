
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max77686_rtc_info {int rtc_dev; int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_3, void *VAR_4)
{
 struct max77686_rtc_info *VAR_5 = VAR_4;

 FUNC_0(VAR_5->dev, "RTC alarm IRQ: %d\n", VAR_3);

 FUNC_1(VAR_5->rtc_dev, 1, VAR_2 | VAR_1);

 return VAR_0;
}
