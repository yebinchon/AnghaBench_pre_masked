
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct img_pwm_chip {int sys_clk; int pwm_clk; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*) ;
 struct img_pwm_chip* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0)
{
 struct img_pwm_chip *VAR_1 = FUNC_3(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1->sys_clk);
 if (VAR_2 < 0) {
  FUNC_2(VAR_0, "could not prepare or enable sys clock\n");
  return VAR_2;
 }

 VAR_2 = FUNC_1(VAR_1->pwm_clk);
 if (VAR_2 < 0) {
  FUNC_2(VAR_0, "could not prepare or enable pwm clock\n");
  FUNC_0(VAR_1->sys_clk);
  return VAR_2;
 }

 return 0;
}
