
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_pinctrl_soc_data {int ncommunities; struct intel_community* communities; } ;
struct intel_community {int pad_regs; } ;
struct byt_gpio {TYPE_1__* pdev; struct intel_pinctrl_soc_data const* soc_data; struct intel_community* communities_copy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct intel_community* FUNC_2 (int *,int,int,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_4(struct byt_gpio *VAR_2,
       const struct intel_pinctrl_soc_data *VAR_3)
{
 int VAR_4;

 VAR_2->soc_data = VAR_3;
 VAR_2->communities_copy = FUNC_2(&VAR_2->pdev->dev,
         VAR_3->ncommunities,
         sizeof(*VAR_2->communities_copy),
         VAR_1);
 if (!VAR_2->communities_copy)
  return -VAR_0;

 for (VAR_4 = 0; VAR_4 < VAR_3->ncommunities; VAR_4++) {
  struct intel_community *VAR_5 = VAR_2->communities_copy + VAR_4;

  *VAR_5 = VAR_2->soc_data->communities[VAR_4];

  VAR_5->pad_regs = FUNC_3(VAR_2->pdev, 0);
  if (FUNC_0(VAR_5->pad_regs))
   return FUNC_1(VAR_5->pad_regs);
 }

 return 0;
}
