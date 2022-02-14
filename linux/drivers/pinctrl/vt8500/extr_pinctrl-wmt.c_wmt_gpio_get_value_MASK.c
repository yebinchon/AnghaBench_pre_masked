
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct wmt_pinctrl_data {size_t base; int dev; TYPE_1__* banks; } ;
struct gpio_chip {int dummy; } ;
struct TYPE_2__ {size_t reg_data_in; } ;


 int FUNC_0 (size_t) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t FUNC_1 (unsigned int) ;
 size_t FUNC_2 (unsigned int) ;
 int FUNC_3 (int ,char*) ;
 struct wmt_pinctrl_data* FUNC_4 (struct gpio_chip*) ;
 int FUNC_5 (size_t) ;

__attribute__((used)) static int FUNC_6(struct gpio_chip *VAR_2, unsigned VAR_3)
{
 struct wmt_pinctrl_data *VAR_4 = FUNC_4(VAR_2);
 u32 VAR_5 = FUNC_1(VAR_3);
 u32 VAR_6 = FUNC_2(VAR_3);
 u32 VAR_7 = VAR_4->banks[VAR_5].reg_data_in;

 if (VAR_7 == VAR_1) {
  FUNC_3(VAR_4->dev, "no data in register defined\n");
  return -VAR_0;
 }

 return !!(FUNC_5(VAR_4->base + VAR_7) & FUNC_0(VAR_6));
}
