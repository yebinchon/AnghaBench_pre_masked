
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc2_hsotg {scalar_t__ vbus_supply; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct dwc2_hsotg *VAR_0)
{
 if (VAR_0->vbus_supply)
  return FUNC_0(VAR_0->vbus_supply);

 return 0;
}
