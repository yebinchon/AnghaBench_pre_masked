
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct mvebu_pinctrl_group {int num_settings; char* name; TYPE_2__* settings; } ;
struct mvebu_pinctrl_function {char** groups; int num_groups; } ;
struct TYPE_3__ {int npins; } ;
struct mvebu_pinctrl {int num_groups; int variant; int num_functions; struct mvebu_pinctrl_group* groups; struct mvebu_pinctrl_function* functions; TYPE_1__ desc; } ;
struct TYPE_4__ {int variant; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mvebu_pinctrl_function*,int*,int ) ;
 int FUNC_1 (int *,char*,int) ;
 void* FUNC_2 (int *,int,int,int ) ;
 struct mvebu_pinctrl_function* FUNC_3 (struct mvebu_pinctrl*,int ) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_3,
      struct mvebu_pinctrl *VAR_4)
{
 struct mvebu_pinctrl_function *VAR_5;
 int VAR_6 = 0, VAR_7 = VAR_4->desc.npins;
 int VAR_8, VAR_9;



 VAR_5 = FUNC_2(&VAR_3->dev,
        VAR_7, sizeof(struct mvebu_pinctrl_function),
        VAR_2);
 if (!VAR_5)
  return -VAR_0;

 for (VAR_8 = 0; VAR_8 < VAR_4->num_groups; VAR_8++) {
  struct mvebu_pinctrl_group *VAR_10 = &VAR_4->groups[VAR_8];
  for (VAR_9 = 0; VAR_9 < VAR_10->num_settings; VAR_9++) {
   int VAR_11;


   if (VAR_4->variant &&
       !(VAR_4->variant & VAR_10->settings[VAR_9].variant))
    continue;


   VAR_11 = FUNC_0(VAR_5, &VAR_7,
         VAR_10->settings[VAR_9].name);
   if (VAR_11 == -VAR_1)
    FUNC_1(&VAR_3->dev,
     "More functions than pins(%d)\n",
     VAR_4->desc.npins);
   if (VAR_11 < 0)
    continue;

   VAR_6++;
  }
 }

 VAR_4->num_functions = VAR_6;
 VAR_4->functions = VAR_5;

 for (VAR_8 = 0; VAR_8 < VAR_4->num_groups; VAR_8++) {
  struct mvebu_pinctrl_group *VAR_12 = &VAR_4->groups[VAR_8];
  for (VAR_9 = 0; VAR_9 < VAR_12->num_settings; VAR_9++) {
   struct mvebu_pinctrl_function *VAR_13;
   const char **VAR_14;


   if (VAR_4->variant &&
       !(VAR_4->variant & VAR_12->settings[VAR_9].variant))
    continue;

   VAR_13 = FUNC_3(VAR_4,
       VAR_12->settings[VAR_9].name);


   if (!VAR_13->groups) {
    VAR_13->groups = FUNC_2(&VAR_3->dev,
       VAR_13->num_groups,
       sizeof(char *),
       VAR_2);
    if (!VAR_13->groups)
     return -VAR_0;
   }


   VAR_14 = VAR_13->groups;
   while (*VAR_14)
    VAR_14++;
   *VAR_14 = VAR_12->name;
  }
 }

 return 0;
}
