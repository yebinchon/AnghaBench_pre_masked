
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct dc_rtc {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 struct dc_rtc* FUNC_0 (struct device*) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_1, unsigned int VAR_2)
{
 struct dc_rtc *VAR_3 = FUNC_0(VAR_1);

 FUNC_1(!!VAR_2, VAR_3->regs + VAR_0);

 return 0;
}
