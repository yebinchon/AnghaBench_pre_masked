
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pxa_pinctrl_function {int ngroups; void* groups; int name; } ;
struct pxa_pinctrl {int npins; int nfuncs; int dev; struct pxa_pinctrl_function* functions; TYPE_2__* ppins; } ;
struct pxa_desc_function {scalar_t__ name; } ;
struct TYPE_3__ {scalar_t__ name; } ;
struct TYPE_4__ {TYPE_1__ pin; struct pxa_desc_function* functions; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char**) ;
 void* FUNC_1 (int ,int,int,int ) ;
 int FUNC_2 (void*,char**,int) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct pxa_pinctrl *VAR_2)
{
 int VAR_3, VAR_4, VAR_5;
 struct pxa_pinctrl_function *VAR_6;
 struct pxa_desc_function *VAR_7;
 char **VAR_8;

 VAR_8 = FUNC_1(VAR_2->dev, VAR_2->npins, sizeof(*VAR_8),
      VAR_1);
 if (!VAR_8)
  return -VAR_0;

 for (VAR_3 = 0; VAR_3 < VAR_2->nfuncs; VAR_3++) {
  VAR_5 = 0;
  for (VAR_4 = 0; VAR_4 < VAR_2->npins; VAR_4++)
   for (VAR_7 = VAR_2->ppins[VAR_4].functions; VAR_7->name;
        VAR_7++)
    if (!FUNC_3(VAR_2->functions[VAR_3].name,
         VAR_7->name))
     VAR_8[VAR_5++] = (char *)
      VAR_2->ppins[VAR_4].pin.name;
  VAR_6 = VAR_2->functions + VAR_3;
  VAR_6->ngroups = VAR_5;
  VAR_6->groups =
   FUNC_1(VAR_2->dev, VAR_5,
        sizeof(char *), VAR_1);
  if (!VAR_6->groups)
   return -VAR_0;

  FUNC_2(VAR_6->groups, VAR_8, VAR_5 * sizeof(*VAR_8));
 }

 FUNC_0(VAR_2->dev, VAR_8);
 return 0;
}
