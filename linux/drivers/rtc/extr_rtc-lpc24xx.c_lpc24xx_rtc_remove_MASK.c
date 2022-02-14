
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct lpc24xx_rtc {int clk_reg; int clk_rtc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 struct lpc24xx_rtc* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct lpc24xx_rtc*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_5)
{
 struct lpc24xx_rtc *VAR_6 = FUNC_1(VAR_5);


 FUNC_2(VAR_6, VAR_2, VAR_1);
 FUNC_2(VAR_6, VAR_4, 0);

 FUNC_2(VAR_6, VAR_3, VAR_0);

 FUNC_0(VAR_6->clk_rtc);
 FUNC_0(VAR_6->clk_reg);

 return 0;
}
