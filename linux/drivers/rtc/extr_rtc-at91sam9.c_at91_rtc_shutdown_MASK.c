
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sam9_rtc {int imr; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sam9_rtc* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (struct sam9_rtc*,int ) ;
 int FUNC_2 (struct sam9_rtc*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct platform_device *VAR_3)
{
 struct sam9_rtc *VAR_4 = FUNC_0(VAR_3);
 u32 VAR_5 = FUNC_1(VAR_4, VAR_2);

 VAR_4->imr = VAR_5 & (VAR_0 | VAR_1);
 FUNC_2(VAR_4, VAR_2, VAR_5 & ~VAR_4->imr);
}
