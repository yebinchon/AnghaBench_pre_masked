
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
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_2)
{
 struct rtd119x_rtc *VAR_3 = FUNC_0(VAR_2);
 u32 VAR_4;

 VAR_4 = FUNC_1(VAR_3->base + VAR_0);
 VAR_4 |= VAR_1;
 FUNC_3(VAR_4, VAR_3->base + VAR_0);

 VAR_4 &= ~VAR_1;
 FUNC_2(VAR_4, VAR_3->base + VAR_0);
}
