
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tegra_tsensor_group {scalar_t__ id; int pllx_hotspot_diff; int pllx_hotspot_mask; int pdiv; int pdiv_mask; } ;
struct tegra_soctherm {scalar_t__ regs; TYPE_1__* soc; } ;
struct platform_device {int dev; } ;
struct TYPE_2__ {int num_tsensors; int num_ttgs; struct tegra_tsensor_group** ttgs; } ;


 int FUNC_0 (int ,int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct tegra_soctherm*,int) ;
 struct tegra_soctherm* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct platform_device *VAR_3)
{
 struct tegra_soctherm *VAR_4 = FUNC_2(VAR_3);
 const struct tegra_tsensor_group **VAR_5 = VAR_4->soc->ttgs;
 int VAR_6;
 u32 VAR_7, VAR_8;


 for (VAR_6 = 0; VAR_6 < VAR_4->soc->num_tsensors; ++VAR_6)
  FUNC_1(VAR_4, VAR_6);


 VAR_7 = FUNC_3(VAR_4->regs + VAR_1);
 VAR_8 = FUNC_3(VAR_4->regs + VAR_0);
 for (VAR_6 = 0; VAR_6 < VAR_4->soc->num_ttgs; ++VAR_6) {
  VAR_7 = FUNC_0(VAR_7, VAR_5[VAR_6]->pdiv_mask,
        VAR_5[VAR_6]->pdiv);

  if (VAR_5[VAR_6]->id == VAR_2)
   continue;
  VAR_8 = FUNC_0(VAR_8,
     VAR_5[VAR_6]->pllx_hotspot_mask,
     VAR_5[VAR_6]->pllx_hotspot_diff);
 }
 FUNC_5(VAR_7, VAR_4->regs + VAR_1);
 FUNC_5(VAR_8, VAR_4->regs + VAR_0);


 FUNC_4(&VAR_3->dev);
}
