
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct samsung_pmx_func {char const** groups; int num_groups; int name; int val; } ;
struct samsung_pinctrl_drv_data {int dummy; } ;
struct device_node {int full_name; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*,...) ;
 char const** FUNC_1 (struct device*,int,int,int ) ;
 int FUNC_2 (struct device_node*,char*) ;
 int FUNC_3 (struct device_node*,char*,int,char const**) ;
 scalar_t__ FUNC_4 (struct device_node*,char*,int *) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_3,
    struct samsung_pinctrl_drv_data *VAR_4,
    struct device_node *VAR_5,
    struct samsung_pmx_func *VAR_6)
{
 int VAR_7;
 int VAR_8;
 int VAR_9;

 if (FUNC_4(VAR_5, "samsung,pin-function", &VAR_6->val))
  return 0;

 VAR_7 = FUNC_2(VAR_5, "samsung,pins");
 if (VAR_7 < 1) {
  FUNC_0(VAR_3, "invalid pin list in %pOFn node", VAR_5);
  return -VAR_0;
 }

 VAR_6->name = VAR_5->full_name;

 VAR_6->groups = FUNC_1(VAR_3, VAR_7, sizeof(char *), VAR_2);
 if (!VAR_6->groups)
  return -VAR_1;

 for (VAR_9 = 0; VAR_9 < VAR_7; ++VAR_9) {
  const char *VAR_10;

  VAR_8 = FUNC_3(VAR_5, "samsung,pins",
       VAR_9, &VAR_10);
  if (VAR_8) {
   FUNC_0(VAR_3,
    "failed to read pin name %d from %pOFn node\n",
    VAR_9, VAR_5);
   return VAR_8;
  }

  VAR_6->groups[VAR_9] = VAR_10;
 }

 VAR_6->num_groups = VAR_7;
 return 1;
}
