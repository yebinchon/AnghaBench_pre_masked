
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct cdns_rtc {scalar_t__ regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 struct cdns_rtc* FUNC_0 (struct device*) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_9, unsigned int VAR_10)
{
 struct cdns_rtc *VAR_11 = FUNC_0(VAR_9);

 if (VAR_10) {
  FUNC_1((VAR_5 | VAR_3 | VAR_2
   | VAR_1 | VAR_4),
         VAR_11->regs + VAR_6);
  FUNC_1(VAR_0, VAR_11->regs + VAR_8);
 } else {
  FUNC_1(0, VAR_11->regs + VAR_6);
  FUNC_1(VAR_0, VAR_11->regs + VAR_7);
 }

 return 0;
}
