
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sh_pfc_window {int dummy; } ;
struct TYPE_2__ {scalar_t__ ngpio; scalar_t__ base; int label; } ;
struct sh_pfc_chip {TYPE_1__ gpio_chip; struct sh_pfc* pfc; struct sh_pfc_window* mem; } ;
struct sh_pfc {int dev; } ;


 int VAR_0 ;
 struct sh_pfc_chip* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int ,scalar_t__,scalar_t__) ;
 int FUNC_2 (int ,TYPE_1__*,struct sh_pfc_chip*) ;
 struct sh_pfc_chip* FUNC_3 (int ,int,int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static struct sh_pfc_chip *
FUNC_5(struct sh_pfc *VAR_2, int(*VAR_3)(struct sh_pfc_chip *),
      struct sh_pfc_window *VAR_4)
{
 struct sh_pfc_chip *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_3(VAR_2->dev, sizeof(*VAR_5), VAR_1);
 if (FUNC_4(!VAR_5))
  return FUNC_0(-VAR_0);

 VAR_5->mem = VAR_4;
 VAR_5->pfc = VAR_2;

 VAR_6 = VAR_3(VAR_5);
 if (VAR_6 < 0)
  return FUNC_0(VAR_6);

 VAR_6 = FUNC_2(VAR_2->dev, &VAR_5->gpio_chip, VAR_5);
 if (FUNC_4(VAR_6 < 0))
  return FUNC_0(VAR_6);

 FUNC_1(VAR_2->dev, "%s handling gpio %u -> %u\n",
   VAR_5->gpio_chip.label, VAR_5->gpio_chip.base,
   VAR_5->gpio_chip.base + VAR_5->gpio_chip.ngpio - 1);

 return VAR_5;
}
