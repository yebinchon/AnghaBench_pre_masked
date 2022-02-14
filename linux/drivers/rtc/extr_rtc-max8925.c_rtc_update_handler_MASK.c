
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max8925_rtc_info {int rtc_dev; int rtc; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int,int ) ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_4, void *VAR_5)
{
 struct max8925_rtc_info *VAR_6 = (struct max8925_rtc_info *)VAR_5;


 FUNC_0(VAR_6->rtc, VAR_1, 0x7f, 0);
 FUNC_1(VAR_6->rtc_dev, 1, VAR_3 | VAR_2);
 return VAR_0;
}
