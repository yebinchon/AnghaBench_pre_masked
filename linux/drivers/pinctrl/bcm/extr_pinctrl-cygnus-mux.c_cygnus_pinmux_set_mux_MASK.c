
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pinctrl_dev {int dev; } ;
struct cygnus_pinctrl {int mux_log; struct cygnus_pin_group* groups; struct cygnus_pin_function* functions; } ;
struct TYPE_2__ {int alt; int shift; int offset; } ;
struct cygnus_pin_group {TYPE_1__ mux; int name; } ;
struct cygnus_pin_function {int name; } ;


 int FUNC_0 (struct cygnus_pinctrl*,struct cygnus_pin_function const*,struct cygnus_pin_group const*,int ) ;
 int FUNC_1 (int ,char*,unsigned int,int ,unsigned int,...) ;
 struct cygnus_pinctrl* FUNC_2 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_3(struct pinctrl_dev *VAR_0,
     unsigned VAR_1, unsigned VAR_2)
{
 struct cygnus_pinctrl *VAR_3 = FUNC_2(VAR_0);
 const struct cygnus_pin_function *VAR_4 =
  &VAR_3->functions[VAR_1];
 const struct cygnus_pin_group *VAR_5 = &VAR_3->groups[VAR_2];

 FUNC_1(VAR_0->dev, "func:%u name:%s grp:%u name:%s\n",
  VAR_1, VAR_4->name, VAR_2, VAR_5->name);

 FUNC_1(VAR_0->dev, "offset:0x%08x shift:%u alt:%u\n",
  VAR_5->mux.offset, VAR_5->mux.shift, VAR_5->mux.alt);

 return FUNC_0(VAR_3, VAR_4, VAR_5, VAR_3->mux_log);
}
