
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct pinmux_ops {int (* get_function_groups ) (struct pinctrl_dev*,int,char const* const**,unsigned int*) ;} ;
struct TYPE_9__ {int func; int group; } ;
struct TYPE_10__ {TYPE_4__ mux; } ;
struct pinctrl_setting {TYPE_5__ data; struct pinctrl_dev* pctldev; } ;
struct TYPE_7__ {char* function; char* group; } ;
struct TYPE_8__ {TYPE_2__ mux; } ;
struct pinctrl_map {TYPE_3__ data; } ;
struct pinctrl_dev {int dev; TYPE_1__* desc; } ;
struct TYPE_6__ {struct pinmux_ops* pmxops; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (char const* const*,unsigned int,char const*) ;
 int FUNC_2 (struct pinctrl_dev*,char const*) ;
 int FUNC_3 (struct pinctrl_dev*,char*) ;
 int FUNC_4 (struct pinctrl_dev*,int,char const* const**,unsigned int*) ;

int FUNC_5(const struct pinctrl_map *VAR_1,
     struct pinctrl_setting *VAR_2)
{
 struct pinctrl_dev *VAR_3 = VAR_2->pctldev;
 const struct pinmux_ops *VAR_4 = VAR_3->desc->pmxops;
 char const * const *VAR_5;
 unsigned VAR_6;
 int VAR_7;
 const char *VAR_8;

 if (!VAR_4) {
  FUNC_0(VAR_3->dev, "does not support mux function\n");
  return -VAR_0;
 }

 VAR_7 = FUNC_3(VAR_3, VAR_1->data.mux.function);
 if (VAR_7 < 0) {
  FUNC_0(VAR_3->dev, "invalid function %s in map table\n",
   VAR_1->data.mux.function);
  return VAR_7;
 }
 VAR_2->data.mux.func = VAR_7;

 VAR_7 = VAR_4->get_function_groups(VAR_3, VAR_2->data.mux.func,
       &VAR_5, &VAR_6);
 if (VAR_7 < 0) {
  FUNC_0(VAR_3->dev, "can't query groups for function %s\n",
   VAR_1->data.mux.function);
  return VAR_7;
 }
 if (!VAR_6) {
  FUNC_0(VAR_3->dev,
   "function %s can't be selected on any group\n",
   VAR_1->data.mux.function);
  return -VAR_0;
 }
 if (VAR_1->data.mux.group) {
  VAR_8 = VAR_1->data.mux.group;
  VAR_7 = FUNC_1(VAR_5, VAR_6, VAR_8);
  if (VAR_7 < 0) {
   FUNC_0(VAR_3->dev,
    "invalid group \"%s\" for function \"%s\"\n",
    VAR_8, VAR_1->data.mux.function);
   return VAR_7;
  }
 } else {
  VAR_8 = VAR_5[0];
 }

 VAR_7 = FUNC_2(VAR_3, VAR_8);
 if (VAR_7 < 0) {
  FUNC_0(VAR_3->dev, "invalid group %s in map table\n",
   VAR_1->data.mux.group);
  return VAR_7;
 }
 VAR_2->data.mux.group = VAR_7;

 return 0;
}
