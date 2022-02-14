
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_powergate_info {int name; int id; } ;
struct TYPE_2__ {int name; int power_off; int power_on; } ;
struct tegra_powergate {TYPE_1__ genpd; struct tegra_bpmp* bpmp; int id; } ;
struct tegra_bpmp {int dev; } ;


 int VAR_0 ;
 struct tegra_powergate* FUNC_0 (int) ;
 int VAR_1 ;
 struct tegra_powergate* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_1__*,int *,int) ;
 int FUNC_5 (struct tegra_bpmp*,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static struct tegra_powergate *
FUNC_6(struct tegra_bpmp *VAR_4,
      const struct tegra_powergate_info *VAR_5)
{
 struct tegra_powergate *VAR_6;
 bool VAR_7;
 int VAR_8;

 VAR_7 = !FUNC_5(VAR_4, VAR_5->id);

 VAR_6 = FUNC_1(VAR_4->dev, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return FUNC_0(-VAR_0);

 VAR_6->id = VAR_5->id;
 VAR_6->bpmp = VAR_4;

 VAR_6->genpd.name = FUNC_3(VAR_5->name, VAR_1);
 VAR_6->genpd.power_on = VAR_3;
 VAR_6->genpd.power_off = VAR_2;

 VAR_8 = FUNC_4(&VAR_6->genpd, ((void*)0), VAR_7);
 if (VAR_8 < 0) {
  FUNC_2(VAR_6->genpd.name);
  return FUNC_0(VAR_8);
 }

 return VAR_6;
}
