
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtd119x_rtc {scalar_t__ base; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct rtd119x_rtc* FUNC_0 (struct device*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_2, bool VAR_3)
{
 struct rtd119x_rtc *VAR_4 = FUNC_0(VAR_2);
 u32 VAR_5;

 VAR_5 = FUNC_1(VAR_4->base + VAR_0);
 if (VAR_3) {
  if ((VAR_5 & VAR_1) == 0x5a)
   return;
  FUNC_2(0x5a, VAR_4->base + VAR_0);
 } else {
  FUNC_2(0, VAR_4->base + VAR_0);
 }
}
