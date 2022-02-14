
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct berlin_pinctrl_function {char const* name; int ngroups; } ;
struct berlin_pinctrl {int nfunctions; struct berlin_pinctrl_function* functions; } ;


 int VAR_0 ;
 int FUNC_0 (char const*,char const*) ;

__attribute__((used)) static int FUNC_1(struct berlin_pinctrl *VAR_1,
           const char *VAR_2)
{
 struct berlin_pinctrl_function *VAR_3 = VAR_1->functions;

 while (VAR_3->name) {
  if (!FUNC_0(VAR_3->name, VAR_2)) {
   VAR_3->ngroups++;
   return -VAR_0;
  }
  VAR_3++;
 }

 VAR_3->name = VAR_2;
 VAR_3->ngroups = 1;

 VAR_1->nfunctions++;

 return 0;
}
