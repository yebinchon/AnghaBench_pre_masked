
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tegra_pmc {int dev; int pctl_dev; TYPE_1__* soc; } ;
struct TYPE_5__ {scalar_t__ npins; int pins; int name; } ;
struct TYPE_4__ {scalar_t__ num_pin_descs; int pin_descs; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,TYPE_2__*,struct tegra_pmc*) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static int FUNC_5(struct tegra_pmc *VAR_1)
{
 int VAR_2;

 if (!VAR_1->soc->num_pin_descs)
  return 0;

 VAR_0.name = FUNC_3(VAR_1->dev);
 VAR_0.pins = VAR_1->soc->pin_descs;
 VAR_0.npins = VAR_1->soc->num_pin_descs;

 VAR_1->pctl_dev = FUNC_4(VAR_1->dev, &VAR_0,
           VAR_1);
 if (FUNC_0(VAR_1->pctl_dev)) {
  VAR_2 = FUNC_1(VAR_1->pctl_dev);
  FUNC_2(VAR_1->dev, "failed to register pin controller: %d\n",
   VAR_2);
  return VAR_2;
 }

 return 0;
}
