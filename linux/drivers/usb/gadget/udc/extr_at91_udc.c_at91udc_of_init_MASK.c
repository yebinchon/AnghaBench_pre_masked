
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct of_device_id {int data; } ;
struct device_node {int dummy; } ;
struct at91_udc_data {int vbus_polled; int vbus_active_low; int pullup_active_low; void* pullup_pin; void* vbus_pin; } ;
struct at91_udc {int caps; struct at91_udc_data board; } ;
typedef enum of_gpio_flags { ____Placeholder_of_gpio_flags } of_gpio_flags ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (struct device_node*,char*,int ,int*) ;
 struct of_device_id* FUNC_1 (int ,struct device_node*) ;
 scalar_t__ FUNC_2 (struct device_node*,char*,int *) ;

__attribute__((used)) static void FUNC_3(struct at91_udc *VAR_2, struct device_node *VAR_3)
{
 struct at91_udc_data *VAR_4 = &VAR_2->board;
 const struct of_device_id *VAR_5;
 enum of_gpio_flags VAR_6;
 u32 VAR_7;

 if (FUNC_2(VAR_3, "atmel,vbus-polled", &VAR_7) == 0)
  VAR_4->vbus_polled = 1;

 VAR_4->vbus_pin = FUNC_0(VAR_3, "atmel,vbus-gpio", 0,
        &VAR_6);
 VAR_4->vbus_active_low = (VAR_6 & VAR_0) ? 1 : 0;

 VAR_4->pullup_pin = FUNC_0(VAR_3, "atmel,pullup-gpio", 0,
        &VAR_6);

 VAR_4->pullup_active_low = (VAR_6 & VAR_0) ? 1 : 0;

 VAR_5 = FUNC_1(VAR_1, VAR_3);
 if (VAR_5)
  VAR_2->caps = VAR_5->data;
}
