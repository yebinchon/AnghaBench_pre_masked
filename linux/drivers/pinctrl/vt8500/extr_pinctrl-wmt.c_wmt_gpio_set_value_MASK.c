
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct wmt_pinctrl_data {int dev; TYPE_1__* banks; } ;
struct gpio_chip {int dummy; } ;
struct TYPE_2__ {size_t reg_data_out; } ;


 int FUNC_0 (size_t) ;
 size_t VAR_0 ;
 size_t FUNC_1 (unsigned int) ;
 size_t FUNC_2 (unsigned int) ;
 int FUNC_3 (int ,char*) ;
 struct wmt_pinctrl_data* FUNC_4 (struct gpio_chip*) ;
 int FUNC_5 (struct wmt_pinctrl_data*,size_t,int ) ;
 int FUNC_6 (struct wmt_pinctrl_data*,size_t,int ) ;

__attribute__((used)) static void FUNC_7(struct gpio_chip *VAR_1, unsigned VAR_2,
          int VAR_3)
{
 struct wmt_pinctrl_data *VAR_4 = FUNC_4(VAR_1);
 u32 VAR_5 = FUNC_1(VAR_2);
 u32 VAR_6 = FUNC_2(VAR_2);
 u32 VAR_7 = VAR_4->banks[VAR_5].reg_data_out;

 if (VAR_7 == VAR_0) {
  FUNC_3(VAR_4->dev, "no data out register defined\n");
  return;
 }

 if (VAR_3)
  FUNC_6(VAR_4, VAR_7, FUNC_0(VAR_6));
 else
  FUNC_5(VAR_4, VAR_7, FUNC_0(VAR_6));
}
