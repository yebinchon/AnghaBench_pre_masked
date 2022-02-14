
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct pps_gpio_device_data {int echo_pin; } ;


 int VAR_0 ;
 struct pps_gpio_device_data* FUNC_0 (struct pps_gpio_device_data const*,struct timer_list*,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct timer_list *VAR_1)
{
 const struct pps_gpio_device_data *VAR_2;

 VAR_2 = FUNC_0(VAR_2, VAR_1, VAR_0);

 FUNC_1(VAR_2->echo_pin, 0);
}
