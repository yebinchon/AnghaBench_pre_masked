
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pinctrl_dev {int dummy; } ;
struct byt_gpio {TYPE_1__* soc_data; } ;
struct TYPE_2__ {int nfunctions; } ;


 struct byt_gpio* FUNC_0 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_1(struct pinctrl_dev *VAR_0)
{
 struct byt_gpio *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->soc_data->nfunctions;
}
