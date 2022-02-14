
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_8__ {TYPE_3__** domains; } ;
struct rockchip_pmu {TYPE_2__ genpd_data; int dev; TYPE_1__* info; } ;
struct TYPE_9__ {int flags; int detach_dev; int attach_dev; int power_on; int power_off; int name; } ;
struct rockchip_pm_domain {int num_clks; int num_qos; TYPE_4__* clks; TYPE_3__ genpd; int * qos_regmap; void** qos_save_regs; struct rockchip_pmu* pmu; struct rockchip_domain_info const* info; } ;
struct rockchip_domain_info {scalar_t__ active_wakeup; } ;
struct device_node {int name; } ;
struct TYPE_10__ {int clk; } ;
struct TYPE_7__ {size_t num_domains; struct rockchip_domain_info* domain_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,TYPE_4__*) ;
 int FUNC_3 (int,TYPE_4__*) ;
 int FUNC_4 (int,TYPE_4__*) ;
 int FUNC_5 (int ,char*,struct device_node*,int) ;
 int FUNC_6 (int ,char*,struct device_node*,int,...) ;
 void* FUNC_7 (int ,int,int,int ) ;
 struct rockchip_pm_domain* FUNC_8 (int ,int,int ) ;
 int FUNC_9 (struct device_node*,int) ;
 int FUNC_10 (struct device_node*) ;
 int FUNC_11 (struct device_node*,char*,int *) ;
 int FUNC_12 (struct device_node*) ;
 struct device_node* FUNC_13 (struct device_node*,char*,int) ;
 int FUNC_14 (struct device_node*,char*,size_t*) ;
 int FUNC_15 (TYPE_3__*,int *,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_16 (struct rockchip_pm_domain*,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_17 (struct device_node*) ;

__attribute__((used)) static int FUNC_18(struct rockchip_pmu *VAR_11,
          struct device_node *VAR_12)
{
 const struct rockchip_domain_info *VAR_13;
 struct rockchip_pm_domain *VAR_14;
 struct device_node *VAR_15;
 int VAR_16, VAR_17;
 u32 VAR_18;
 int VAR_19;

 VAR_19 = FUNC_14(VAR_12, "reg", &VAR_18);
 if (VAR_19) {
  FUNC_6(VAR_11->dev,
   "%pOFn: failed to retrieve domain id (reg): %d\n",
   VAR_12, VAR_19);
  return -VAR_0;
 }

 if (VAR_18 >= VAR_11->info->num_domains) {
  FUNC_6(VAR_11->dev, "%pOFn: invalid domain id %d\n",
   VAR_12, VAR_18);
  return -VAR_0;
 }

 VAR_13 = &VAR_11->info->domain_info[VAR_18];
 if (!VAR_13) {
  FUNC_6(VAR_11->dev, "%pOFn: undefined domain id %d\n",
   VAR_12, VAR_18);
  return -VAR_0;
 }

 VAR_14 = FUNC_8(VAR_11->dev, sizeof(*VAR_14), VAR_5);
 if (!VAR_14)
  return -VAR_2;

 VAR_14->info = VAR_13;
 VAR_14->pmu = VAR_11;

 VAR_14->num_clks = FUNC_10(VAR_12);
 if (VAR_14->num_clks > 0) {
  VAR_14->clks = FUNC_7(VAR_11->dev, VAR_14->num_clks,
     sizeof(*VAR_14->clks), VAR_5);
  if (!VAR_14->clks)
   return -VAR_2;
 } else {
  FUNC_5(VAR_11->dev, "%pOFn: doesn't have clocks: %d\n",
   VAR_12, VAR_14->num_clks);
  VAR_14->num_clks = 0;
 }

 for (VAR_16 = 0; VAR_16 < VAR_14->num_clks; VAR_16++) {
  VAR_14->clks[VAR_16].clk = FUNC_9(VAR_12, VAR_16);
  if (FUNC_0(VAR_14->clks[VAR_16].clk)) {
   VAR_19 = FUNC_1(VAR_14->clks[VAR_16].clk);
   FUNC_6(VAR_11->dev,
    "%pOFn: failed to get clk at index %d: %d\n",
    VAR_12, VAR_16, VAR_19);
   return VAR_19;
  }
 }

 VAR_19 = FUNC_2(VAR_14->num_clks, VAR_14->clks);
 if (VAR_19)
  goto err_put_clocks;

 VAR_14->num_qos = FUNC_11(VAR_12, "pm_qos",
       ((void*)0));

 if (VAR_14->num_qos > 0) {
  VAR_14->qos_regmap = FUNC_7(VAR_11->dev, VAR_14->num_qos,
           sizeof(*VAR_14->qos_regmap),
           VAR_5);
  if (!VAR_14->qos_regmap) {
   VAR_19 = -VAR_2;
   goto err_unprepare_clocks;
  }

  for (VAR_17 = 0; VAR_17 < VAR_6; VAR_17++) {
   VAR_14->qos_save_regs[VAR_17] = FUNC_7(VAR_11->dev,
           VAR_14->num_qos,
           sizeof(u32),
           VAR_5);
   if (!VAR_14->qos_save_regs[VAR_17]) {
    VAR_19 = -VAR_2;
    goto err_unprepare_clocks;
   }
  }

  for (VAR_17 = 0; VAR_17 < VAR_14->num_qos; VAR_17++) {
   VAR_15 = FUNC_13(VAR_12, "pm_qos", VAR_17);
   if (!VAR_15) {
    VAR_19 = -VAR_1;
    goto err_unprepare_clocks;
   }
   VAR_14->qos_regmap[VAR_17] = FUNC_17(VAR_15);
   if (FUNC_0(VAR_14->qos_regmap[VAR_17])) {
    VAR_19 = -VAR_1;
    FUNC_12(VAR_15);
    goto err_unprepare_clocks;
   }
   FUNC_12(VAR_15);
  }
 }

 VAR_19 = FUNC_16(VAR_14, 1);
 if (VAR_19) {
  FUNC_6(VAR_11->dev,
   "failed to power on domain '%pOFn': %d\n",
   VAR_12, VAR_19);
  goto err_unprepare_clocks;
 }

 VAR_14->genpd.name = VAR_12->name;
 VAR_14->genpd.power_off = VAR_9;
 VAR_14->genpd.power_on = VAR_10;
 VAR_14->genpd.attach_dev = VAR_7;
 VAR_14->genpd.detach_dev = VAR_8;
 VAR_14->genpd.flags = VAR_4;
 if (VAR_13->active_wakeup)
  VAR_14->genpd.flags |= VAR_3;
 FUNC_15(&VAR_14->genpd, ((void*)0), 0);

 VAR_11->genpd_data.domains[VAR_18] = &VAR_14->genpd;
 return 0;

err_unprepare_clocks:
 FUNC_4(VAR_14->num_clks, VAR_14->clks);
err_put_clocks:
 FUNC_3(VAR_14->num_clks, VAR_14->clks);
 return VAR_19;
}
