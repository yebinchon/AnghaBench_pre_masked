
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct cdns_rtc {int rtc_dev; scalar_t__ regs; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct cdns_rtc* FUNC_0 (struct device*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int,int) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_6, void *VAR_7)
{
 struct device *VAR_8 = VAR_7;
 struct cdns_rtc *VAR_9 = FUNC_0(VAR_8);


 if (!(FUNC_1(VAR_9->regs + VAR_1) & VAR_0))
  return VAR_3;

 FUNC_2(VAR_9->rtc_dev, 1, VAR_5 | VAR_4);
 return VAR_2;
}
