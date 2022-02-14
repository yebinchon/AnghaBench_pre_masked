
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct wmt_pinctrl_data {TYPE_1__* pins; } ;
struct pinctrl_dev {int dummy; } ;
struct TYPE_2__ {int number; } ;


 struct wmt_pinctrl_data* FUNC_0 (struct pinctrl_dev*) ;
 int FUNC_1 (struct wmt_pinctrl_data*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_2(struct pinctrl_dev *VAR_0,
      unsigned VAR_1,
      unsigned VAR_2)
{
 struct wmt_pinctrl_data *VAR_3 = FUNC_0(VAR_0);
 u32 VAR_4 = VAR_3->pins[VAR_2].number;

 return FUNC_1(VAR_3, VAR_1, VAR_4);
}
