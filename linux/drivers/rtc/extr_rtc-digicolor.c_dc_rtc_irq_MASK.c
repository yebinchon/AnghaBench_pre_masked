
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dc_rtc {int rtc_dev; scalar_t__ regs; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_4, void *VAR_5)
{
 struct dc_rtc *VAR_6 = VAR_5;

 FUNC_1(1, VAR_6->regs + VAR_0);
 FUNC_0(VAR_6->rtc_dev, 1, VAR_2 | VAR_3);

 return VAR_1;
}
