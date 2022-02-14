
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pinctrl_dev {int dummy; } ;
struct mvebu_pinctrl {TYPE_1__* functions; } ;
struct TYPE_2__ {char const* name; } ;


 struct mvebu_pinctrl* FUNC_0 (struct pinctrl_dev*) ;

__attribute__((used)) static const char *FUNC_1(struct pinctrl_dev *VAR_0,
     unsigned VAR_1)
{
 struct mvebu_pinctrl *VAR_2 = FUNC_0(VAR_0);

 return VAR_2->functions[VAR_1].name;
}
