
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int npins; int pins; int * confops; int * pmxops; int * pctlops; int owner; int name; } ;
struct sh_pfc_pinctrl {int pctl; TYPE_2__ pctl_desc; int pins; struct sh_pfc* pfc; } ;
struct sh_pfc {int dev; TYPE_1__* info; } ;
struct TYPE_3__ {int nr_pins; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 struct sh_pfc_pinctrl* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int ,TYPE_2__*,struct sh_pfc_pinctrl*,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sh_pfc*,struct sh_pfc_pinctrl*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (int) ;

int FUNC_6(struct sh_pfc *VAR_7)
{
 struct sh_pfc_pinctrl *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_1(VAR_7->dev, sizeof(*VAR_8), VAR_2);
 if (FUNC_5(!VAR_8))
  return -VAR_1;

 VAR_8->pfc = VAR_7;

 VAR_9 = FUNC_4(VAR_7, VAR_8);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_8->pctl_desc.name = VAR_0;
 VAR_8->pctl_desc.owner = VAR_3;
 VAR_8->pctl_desc.pctlops = &VAR_5;
 VAR_8->pctl_desc.pmxops = &VAR_6;
 VAR_8->pctl_desc.confops = &VAR_4;
 VAR_8->pctl_desc.pins = VAR_8->pins;
 VAR_8->pctl_desc.npins = VAR_7->info->nr_pins;

 VAR_9 = FUNC_2(VAR_7->dev, &VAR_8->pctl_desc, VAR_8,
          &VAR_8->pctl);
 if (VAR_9) {
  FUNC_0(VAR_7->dev, "could not register: %i\n", VAR_9);

  return VAR_9;
 }

 return FUNC_3(VAR_8->pctl);
}
