
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sx150x_pinctrl {TYPE_1__* data; int regmap; } ;
struct TYPE_2__ {int reg_data; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct sx150x_pinctrl *VAR_0, unsigned int VAR_1,
        int VAR_2)
{
 return FUNC_1(VAR_0->regmap, VAR_0->data->reg_data,
     FUNC_0(VAR_1), VAR_2 ? FUNC_0(VAR_1) : 0);
}
