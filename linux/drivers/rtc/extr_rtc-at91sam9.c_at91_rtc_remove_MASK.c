
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sam9_rtc {int sclk; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct sam9_rtc* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct sam9_rtc*,int ) ;
 int FUNC_3 (struct sam9_rtc*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_3)
{
 struct sam9_rtc *VAR_4 = FUNC_1(VAR_3);
 u32 VAR_5 = FUNC_2(VAR_4, VAR_2);


 FUNC_3(VAR_4, VAR_2, VAR_5 & ~(VAR_0 | VAR_1));

 FUNC_0(VAR_4->sclk);

 return 0;
}
