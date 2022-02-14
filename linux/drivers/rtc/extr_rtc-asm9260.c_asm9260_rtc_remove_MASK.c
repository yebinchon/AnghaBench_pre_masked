
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct asm9260_rtc_priv {int clk; scalar_t__ iobase; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 struct asm9260_rtc_priv* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_2)
{
 struct asm9260_rtc_priv *VAR_3 = FUNC_2(VAR_2);


 FUNC_1(VAR_0, VAR_3->iobase + VAR_1);
 FUNC_0(VAR_3->clk);
 return 0;
}
