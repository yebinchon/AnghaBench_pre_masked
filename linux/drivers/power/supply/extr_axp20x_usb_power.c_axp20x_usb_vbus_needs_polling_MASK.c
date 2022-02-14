
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct axp20x_usb_power {scalar_t__ axp20x_id; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct axp20x_usb_power *VAR_1)
{
 if (VAR_1->axp20x_id >= VAR_0)
  return 1;

 return 0;
}
