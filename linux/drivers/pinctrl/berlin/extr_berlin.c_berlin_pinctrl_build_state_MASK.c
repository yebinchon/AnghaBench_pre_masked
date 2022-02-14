
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct berlin_pinctrl_function {char** groups; int ngroups; scalar_t__ name; } ;
struct berlin_pinctrl {int nfunctions; struct berlin_pinctrl_function* functions; TYPE_1__* desc; } ;
struct berlin_desc_group {int bit_width; char* name; struct berlin_desc_function* functions; } ;
struct berlin_desc_function {scalar_t__ name; } ;
struct TYPE_2__ {int ngroups; struct berlin_desc_group* groups; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct berlin_pinctrl*,scalar_t__) ;
 char** FUNC_1 (int *,int ,int,int ) ;
 struct berlin_pinctrl_function* FUNC_2 (int,int,int ) ;
 int FUNC_3 (struct berlin_pinctrl_function*) ;
 struct berlin_pinctrl_function* FUNC_4 (struct berlin_pinctrl_function*,int,int ) ;
 struct berlin_pinctrl* FUNC_5 (struct platform_device*) ;
 int FUNC_6 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_3)
{
 struct berlin_pinctrl *VAR_4 = FUNC_5(VAR_3);
 const struct berlin_desc_group *VAR_5;
 const struct berlin_desc_function *VAR_6;
 int VAR_7, VAR_8 = 0;

 VAR_4->nfunctions = 0;

 for (VAR_7 = 0; VAR_7 < VAR_4->desc->ngroups; VAR_7++) {
  VAR_5 = VAR_4->desc->groups + VAR_7;

  VAR_8 += 1 << (VAR_5->bit_width + 1);
 }


 VAR_4->functions = FUNC_2(VAR_8,
       sizeof(*VAR_4->functions), VAR_2);
 if (!VAR_4->functions)
  return -VAR_1;


 for (VAR_7 = 0; VAR_7 < VAR_4->desc->ngroups; VAR_7++) {
  VAR_5 = VAR_4->desc->groups + VAR_7;
  VAR_6 = VAR_5->functions;

  while (VAR_6->name) {
   FUNC_0(VAR_4, VAR_6->name);
   VAR_6++;
  }
 }

 VAR_4->functions = FUNC_4(VAR_4->functions,
        VAR_4->nfunctions * sizeof(*VAR_4->functions),
        VAR_2);


 for (VAR_7 = 0; VAR_7 < VAR_4->desc->ngroups; VAR_7++) {
  VAR_5 = VAR_4->desc->groups + VAR_7;
  VAR_6 = VAR_5->functions;

  while (VAR_6->name) {
   struct berlin_pinctrl_function
    *VAR_9 = VAR_4->functions;
   const char **VAR_10;
   bool VAR_11 = 0;

   while (VAR_9->name) {
    if (!FUNC_6(VAR_6->name, VAR_9->name)) {
     VAR_11 = 1;
     break;
    }
    VAR_9++;
   }

   if (!VAR_11) {
    FUNC_3(VAR_4->functions);
    return -VAR_0;
   }

   if (!VAR_9->groups) {
    VAR_9->groups =
     FUNC_1(&VAR_3->dev,
           VAR_9->ngroups,
           sizeof(char *),
           VAR_2);

    if (!VAR_9->groups) {
     FUNC_3(VAR_4->functions);
     return -VAR_1;
    }
   }

   VAR_10 = VAR_9->groups;
   while (*VAR_10)
    VAR_10++;

   *VAR_10 = VAR_5->name;

   VAR_6++;
  }
 }

 return 0;
}
