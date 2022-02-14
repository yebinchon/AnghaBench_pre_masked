
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtk_pinctrl {int dev; int pctrl; TYPE_1__* soc; } ;
struct group_desc {int name; int data; int num_pins; int pins; } ;
struct TYPE_2__ {int ngrps; struct group_desc* grps; } ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct mtk_pinctrl *VAR_0)
{
 int VAR_1, VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->soc->ngrps; VAR_2++) {
  const struct group_desc *VAR_3 = VAR_0->soc->grps + VAR_2;

  VAR_1 = FUNC_1(VAR_0->pctrl, VAR_3->name,
      VAR_3->pins, VAR_3->num_pins,
      VAR_3->data);
  if (VAR_1 < 0) {
   FUNC_0(VAR_0->dev, "Failed to register group %s\n",
    VAR_3->name);
   return VAR_1;
  }
 }

 return 0;
}
