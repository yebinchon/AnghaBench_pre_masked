
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pinctrl_dev {int dummy; } ;
struct ns_pinctrl {int offset; int regmap; TYPE_1__* groups; } ;
struct TYPE_2__ {int num_pins; int* pins; } ;


 int FUNC_0 (int) ;
 struct ns_pinctrl* FUNC_1 (struct pinctrl_dev*) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct pinctrl_dev *VAR_0,
         unsigned int VAR_1,
         unsigned int VAR_2)
{
 struct ns_pinctrl *VAR_3 = FUNC_1(VAR_0);
 u32 VAR_4 = 0;
 u32 VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_3->groups[VAR_2].num_pins; VAR_6++) {
  int VAR_7 = VAR_3->groups[VAR_2].pins[VAR_6];

  VAR_4 |= FUNC_0(VAR_7);
 }

 FUNC_2(VAR_3->regmap, VAR_3->offset, &VAR_5);
 VAR_5 &= ~VAR_4;
 FUNC_3(VAR_3->regmap, VAR_3->offset, VAR_5);

 return 0;
}
