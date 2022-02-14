
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pps_gpio_device_data {scalar_t__ capture_clear; scalar_t__ assert_falling_edge; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;

__attribute__((used)) static unsigned long
FUNC_0(const struct pps_gpio_device_data *VAR_2)
{
 unsigned long VAR_3 = VAR_2->assert_falling_edge ?
  VAR_0 : VAR_1;

 if (VAR_2->capture_clear) {
  VAR_3 |= ((VAR_3 & VAR_1) ?
    VAR_0 : VAR_1);
 }

 return VAR_3;
}
