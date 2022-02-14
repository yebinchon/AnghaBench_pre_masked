
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pxa_pinctrl_function {scalar_t__ name; } ;
struct pxa_pinctrl {int npins; int nfuncs; int dev; int functions; TYPE_1__* ppins; } ;
struct pxa_desc_function {scalar_t__ name; } ;
struct TYPE_2__ {struct pxa_desc_function* functions; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pxa_pinctrl_function* FUNC_0 (int ,int,int,int ) ;
 int FUNC_1 (int ,struct pxa_pinctrl_function*) ;
 int FUNC_2 (int ,struct pxa_pinctrl_function*,int,int ) ;
 int FUNC_3 (struct pxa_pinctrl*,scalar_t__,struct pxa_pinctrl_function*) ;

__attribute__((used)) static int FUNC_4(struct pxa_pinctrl *VAR_2)
{
 int VAR_3;
 struct pxa_pinctrl_function *VAR_4;
 struct pxa_desc_function *VAR_5;







 VAR_4 = FUNC_0(VAR_2->dev, VAR_2->npins * 6,
     sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 for (VAR_3 = 0; VAR_3 < VAR_2->npins; VAR_3++)
  for (VAR_5 = VAR_2->ppins[VAR_3].functions; VAR_5->name; VAR_5++)
   if (!FUNC_3(VAR_2, VAR_5->name, VAR_4))
    (VAR_4 + VAR_2->nfuncs++)->name = VAR_5->name;
 VAR_2->functions = FUNC_2(VAR_2->dev, VAR_4,
           VAR_2->nfuncs * sizeof(*VAR_4),
           VAR_1);
 if (!VAR_2->functions)
  return -VAR_0;

 FUNC_1(VAR_2->dev, VAR_4);
 return 0;
}
