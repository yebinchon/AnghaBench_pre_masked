
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct msm_pingroup {int oe_bit; } ;
struct msm_pinctrl {TYPE_1__* soc; } ;
struct gpio_chip {int dummy; } ;
struct TYPE_2__ {struct msm_pingroup* groups; } ;


 int FUNC_0 (int ) ;
 struct msm_pinctrl* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (struct msm_pinctrl*,struct msm_pingroup const*) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_0, unsigned int VAR_1)
{
 struct msm_pinctrl *VAR_2 = FUNC_1(VAR_0);
 const struct msm_pingroup *VAR_3;
 u32 VAR_4;

 VAR_3 = &VAR_2->soc->groups[VAR_1];

 VAR_4 = FUNC_2(VAR_2, VAR_3);


 return VAR_4 & FUNC_0(VAR_3->oe_bit) ? 0 : 1;
}
