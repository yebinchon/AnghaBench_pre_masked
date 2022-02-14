
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pinctrl_dev {int dummy; } ;
struct meson_pinctrl {TYPE_2__* data; } ;
struct TYPE_4__ {TYPE_1__* funcs; } ;
struct TYPE_3__ {char const* name; } ;


 struct meson_pinctrl* FUNC_0 (struct pinctrl_dev*) ;

const char *FUNC_1(struct pinctrl_dev *VAR_0,
        unsigned VAR_1)
{
 struct meson_pinctrl *VAR_2 = FUNC_0(VAR_0);

 return VAR_2->data->funcs[VAR_1].name;
}
