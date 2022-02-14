
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct armada_37xx_pmx_func {char* name; char** groups; int ngroups; } ;
struct armada_37xx_pinctrl {int nfuncs; int ngroups; struct armada_37xx_pin_group* groups; int dev; struct armada_37xx_pmx_func* funcs; } ;
struct armada_37xx_pin_group {char* name; int funcs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char** FUNC_0 (int ,int ,int,int ) ;
 int FUNC_1 (int ,int ,char const*) ;

__attribute__((used)) static int FUNC_2(struct armada_37xx_pinctrl *VAR_3)
{
 struct armada_37xx_pmx_func *VAR_4 = VAR_3->funcs;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3->nfuncs; VAR_5++) {
  const char *VAR_6 = VAR_4[VAR_5].name;
  const char **VAR_7;
  int VAR_8;

  VAR_4[VAR_5].groups = FUNC_0(VAR_3->dev,
            VAR_4[VAR_5].ngroups,
            sizeof(*(VAR_4[VAR_5].groups)),
            VAR_1);
  if (!VAR_4[VAR_5].groups)
   return -VAR_0;

  VAR_7 = VAR_4[VAR_5].groups;

  for (VAR_8 = 0; VAR_8 < VAR_3->ngroups; VAR_8++) {
   struct armada_37xx_pin_group *VAR_9 = &VAR_3->groups[VAR_8];
   int VAR_10;

   VAR_10 = FUNC_1(VAR_9->funcs, VAR_2, VAR_6);
   if (VAR_10 < 0)
    continue;

   *VAR_7 = VAR_9->name;
   VAR_7++;
  }
 }
 return 0;
}
