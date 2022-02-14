
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wmt_pinctrl_data {TYPE_1__* pins; } ;
struct pinctrl_dev {int dummy; } ;
struct TYPE_2__ {unsigned int number; } ;


 struct wmt_pinctrl_data* FUNC_0 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_1(struct pinctrl_dev *VAR_0,
         unsigned VAR_1,
         const unsigned **VAR_2,
         unsigned *VAR_3)
{
 struct wmt_pinctrl_data *VAR_4 = FUNC_0(VAR_0);

 *VAR_2 = &VAR_4->pins[VAR_1].number;
 *VAR_3 = 1;

 return 0;
}
