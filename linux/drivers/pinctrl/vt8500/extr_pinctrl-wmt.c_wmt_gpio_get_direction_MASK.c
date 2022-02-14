
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct wmt_pinctrl_data {size_t base; TYPE_1__* banks; } ;
struct gpio_chip {int dummy; } ;
struct TYPE_2__ {size_t reg_dir; } ;


 size_t FUNC_0 (size_t) ;
 size_t FUNC_1 (unsigned int) ;
 size_t FUNC_2 (unsigned int) ;
 struct wmt_pinctrl_data* FUNC_3 (struct gpio_chip*) ;
 size_t FUNC_4 (size_t) ;

__attribute__((used)) static int FUNC_5(struct gpio_chip *VAR_0, unsigned VAR_1)
{
 struct wmt_pinctrl_data *VAR_2 = FUNC_3(VAR_0);
 u32 VAR_3 = FUNC_1(VAR_1);
 u32 VAR_4 = FUNC_2(VAR_1);
 u32 VAR_5 = VAR_2->banks[VAR_3].reg_dir;
 u32 VAR_6;

 VAR_6 = FUNC_4(VAR_2->base + VAR_5);

 return !(VAR_6 & FUNC_0(VAR_4));
}
