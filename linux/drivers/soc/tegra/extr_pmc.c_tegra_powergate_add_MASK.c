
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int name; int power_on; int power_off; } ;
struct tegra_powergate {int id; size_t num_clks; struct tegra_powergate* clks; int reset; TYPE_1__ genpd; struct tegra_pmc* pmc; } ;
struct tegra_pmc {int powergates_available; struct device* dev; } ;
struct device_node {int name; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (struct tegra_powergate) ;
 int FUNC_4 (struct device*,char*,int ) ;
 int FUNC_5 (struct device*,char*,struct device_node*,int) ;
 int FUNC_6 (struct tegra_powergate*) ;
 struct tegra_powergate* FUNC_7 (int,int ) ;
 int FUNC_8 (struct device_node*,TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,int *,int) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_13 (struct tegra_pmc*,int) ;
 int FUNC_14 (struct tegra_pmc*,int ) ;
 int FUNC_15 (struct tegra_powergate*,struct device_node*) ;
 int FUNC_16 (struct tegra_powergate*,struct device_node*,int) ;
 int FUNC_17 (struct tegra_powergate*,int) ;

__attribute__((used)) static int FUNC_18(struct tegra_pmc *VAR_6, struct device_node *VAR_7)
{
 struct device *VAR_8 = VAR_6->dev;
 struct tegra_powergate *VAR_9;
 int VAR_10, VAR_11 = 0;
 bool VAR_12;

 VAR_9 = FUNC_7(sizeof(*VAR_9), VAR_3);
 if (!VAR_9)
  return -VAR_2;

 VAR_10 = FUNC_14(VAR_6, VAR_7->name);
 if (VAR_10 < 0) {
  FUNC_5(VAR_8, "powergate lookup failed for %pOFn: %d\n", VAR_7, VAR_10);
  VAR_11 = -VAR_1;
  goto free_mem;
 }





 FUNC_2(VAR_10, VAR_6->powergates_available);

 VAR_9->id = VAR_10;
 VAR_9->genpd.name = VAR_7->name;
 VAR_9->genpd.power_off = VAR_4;
 VAR_9->genpd.power_on = VAR_5;
 VAR_9->pmc = VAR_6;

 VAR_12 = !FUNC_13(VAR_6, VAR_9->id);

 VAR_11 = FUNC_15(VAR_9, VAR_7);
 if (VAR_11 < 0) {
  FUNC_5(VAR_8, "failed to get clocks for %pOFn: %d\n", VAR_7, VAR_11);
  goto set_available;
 }

 VAR_11 = FUNC_16(VAR_9, VAR_7, VAR_12);
 if (VAR_11 < 0) {
  FUNC_5(VAR_8, "failed to get resets for %pOFn: %d\n", VAR_7, VAR_11);
  goto remove_clks;
 }

 if (!FUNC_0(VAR_0)) {
  if (VAR_12)
   FUNC_1(FUNC_17(VAR_9, 1));

  goto remove_resets;
 }

 VAR_11 = FUNC_9(&VAR_9->genpd, ((void*)0), VAR_12);
 if (VAR_11 < 0) {
  FUNC_5(VAR_8, "failed to initialise PM domain %pOFn: %d\n", VAR_7,
         VAR_11);
  goto remove_resets;
 }

 VAR_11 = FUNC_8(VAR_7, &VAR_9->genpd);
 if (VAR_11 < 0) {
  FUNC_5(VAR_8, "failed to add PM domain provider for %pOFn: %d\n",
   VAR_7, VAR_11);
  goto remove_genpd;
 }

 FUNC_4(VAR_8, "added PM domain %s\n", VAR_9->genpd.name);

 return 0;

remove_genpd:
 FUNC_10(&VAR_9->genpd);

remove_resets:
 FUNC_11(VAR_9->reset);

remove_clks:
 while (VAR_9->num_clks--)
  FUNC_3(VAR_9->clks[VAR_9->num_clks]);

 FUNC_6(VAR_9->clks);

set_available:
 FUNC_12(VAR_10, VAR_6->powergates_available);

free_mem:
 FUNC_6(VAR_9);

 return VAR_11;
}
