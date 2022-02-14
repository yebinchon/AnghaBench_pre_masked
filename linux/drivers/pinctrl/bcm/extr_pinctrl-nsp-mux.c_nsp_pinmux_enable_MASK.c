
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pinctrl_dev {int dev; } ;
struct nsp_pinctrl {unsigned int num_groups; unsigned int num_functions; int mux_log; struct nsp_pin_group* groups; struct nsp_pin_function* functions; } ;
struct TYPE_2__ {int alt; int shift; } ;
struct nsp_pin_group {TYPE_1__ mux; int name; } ;
struct nsp_pin_function {int name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,unsigned int,int ,...) ;
 int FUNC_1 (struct nsp_pinctrl*,struct nsp_pin_function const*,struct nsp_pin_group const*,int ) ;
 struct nsp_pinctrl* FUNC_2 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_3(struct pinctrl_dev *VAR_1,
        unsigned int VAR_2, unsigned int VAR_3)
{
 struct nsp_pinctrl *VAR_4 = FUNC_2(VAR_1);
 const struct nsp_pin_function *VAR_5;
 const struct nsp_pin_group *VAR_6;

 if (VAR_3 >= VAR_4->num_groups ||
     VAR_2 >= VAR_4->num_functions)
  return -VAR_0;

 VAR_5 = &VAR_4->functions[VAR_2];
 VAR_6 = &VAR_4->groups[VAR_3];

 FUNC_0(VAR_1->dev, "func:%u name:%s grp:%u name:%s\n",
  VAR_2, VAR_5->name, VAR_3, VAR_6->name);

 FUNC_0(VAR_1->dev, "shift:%u alt:%u\n", VAR_6->mux.shift,
  VAR_6->mux.alt);

 return FUNC_1(VAR_4, VAR_5, VAR_6, VAR_4->mux_log);
}
