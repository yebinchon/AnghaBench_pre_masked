
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usdhi6_host {int pins_default; int pinctrl; int pins_uhs; } ;


 scalar_t__ FUNC_0 (int ) ;


 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct usdhi6_host *VAR_0, int VAR_1)
{
 if (FUNC_0(VAR_0->pins_uhs))
  return 0;

 switch (VAR_1) {
 case 128:
 case 129:
  return FUNC_1(VAR_0->pinctrl,
         VAR_0->pins_uhs);

 default:
  return FUNC_1(VAR_0->pinctrl,
         VAR_0->pins_default);
 }
}
