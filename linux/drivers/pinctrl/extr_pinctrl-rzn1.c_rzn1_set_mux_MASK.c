
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rzn1_pinctrl {TYPE_1__* functions; int dev; struct rzn1_pin_group* groups; } ;
struct rzn1_pin_group {unsigned int npins; int * pin_ids; int * pins; int name; } ;
struct pinctrl_dev {int dummy; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,unsigned int,int ,unsigned int) ;
 struct rzn1_pinctrl* FUNC_1 (struct pinctrl_dev*) ;
 int FUNC_2 (struct rzn1_pinctrl*,int ,int ) ;
 int FUNC_3 (struct rzn1_pinctrl*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct pinctrl_dev *VAR_1, unsigned int VAR_2,
   unsigned int VAR_3)
{
 struct rzn1_pinctrl *VAR_4 = FUNC_1(VAR_1);
 struct rzn1_pin_group *VAR_5 = &VAR_4->groups[VAR_3];
 unsigned int VAR_6, VAR_7 = VAR_5->npins;

 FUNC_0(VAR_4->dev, "set mux %s(%d) group %s(%d)\n",
  VAR_4->functions[VAR_2].name, VAR_2, VAR_5->name, VAR_3);

 FUNC_2(VAR_4, VAR_0, VAR_0);
 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++)
  FUNC_3(VAR_4, VAR_5->pins[VAR_6], VAR_5->pin_ids[VAR_6], 0);
 FUNC_2(VAR_4, VAR_0, 0);

 return 0;
}
