
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtk_pinctrl {int dev; int pctrl; TYPE_1__* soc; } ;
struct function_desc {int name; int data; int num_group_names; int group_names; } ;
struct TYPE_2__ {int nfuncs; struct function_desc* funcs; } ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct mtk_pinctrl *VAR_0)
{
 int VAR_1, VAR_2;

 for (VAR_1 = 0; VAR_1 < VAR_0->soc->nfuncs ; VAR_1++) {
  const struct function_desc *VAR_3 = VAR_0->soc->funcs + VAR_1;

  VAR_2 = FUNC_1(VAR_0->pctrl, VAR_3->name,
        VAR_3->group_names,
        VAR_3->num_group_names,
        VAR_3->data);
  if (VAR_2 < 0) {
   FUNC_0(VAR_0->dev, "Failed to register function %s\n",
    VAR_3->name);
   return VAR_2;
  }
 }

 return 0;
}
