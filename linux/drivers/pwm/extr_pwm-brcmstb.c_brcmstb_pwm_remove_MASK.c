
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct brcmstb_pwm {int clk; int chip; } ;


 int FUNC_0 (int ) ;
 struct brcmstb_pwm* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct brcmstb_pwm *VAR_1 = FUNC_1(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_2(&VAR_1->chip);
 FUNC_0(VAR_1->clk);

 return VAR_2;
}
