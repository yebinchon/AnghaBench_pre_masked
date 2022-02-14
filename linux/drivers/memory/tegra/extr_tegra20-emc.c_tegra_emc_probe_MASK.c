
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_12__ {int notifier_call; } ;
struct tegra_emc {int num_timings; void* pll_m; void* backup_clk; TYPE_10__ clk_nb; void* clk; TYPE_1__* timings; void* emc_mux; void* regs; TYPE_2__* dev; int clk_handshake_complete; } ;
struct resource {int dummy; } ;
struct TYPE_14__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct device_node {int dummy; } ;
struct TYPE_13__ {int rate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (void*) ;
 void* FUNC_3 (int *,char*) ;
 int FUNC_4 (void*,TYPE_10__*) ;
 int FUNC_5 (void*,TYPE_10__*) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (TYPE_2__*,char*,...) ;
 int FUNC_8 (TYPE_2__*,char*) ;
 int FUNC_9 (TYPE_2__*) ;
 void* FUNC_10 (TYPE_2__*,char*) ;
 void* FUNC_11 (TYPE_2__*,struct resource*) ;
 struct tegra_emc* FUNC_12 (TYPE_2__*,int,int ) ;
 int FUNC_13 (TYPE_2__*,int,int ,int ,int ,struct tegra_emc*) ;
 int FUNC_14 (struct tegra_emc*,int ) ;
 int FUNC_15 (struct tegra_emc*) ;
 int FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (int ) ;
 int FUNC_18 (struct device_node*) ;
 int FUNC_19 (struct platform_device*,int ) ;
 struct resource* FUNC_20 (struct platform_device*,int ,int ) ;
 int VAR_4 ;
 struct device_node* FUNC_21 (TYPE_2__*) ;
 int VAR_5 ;
 int FUNC_22 (struct tegra_emc*,struct device_node*) ;

__attribute__((used)) static int FUNC_23(struct platform_device *VAR_6)
{
 struct device_node *VAR_7;
 struct tegra_emc *VAR_8;
 struct resource *VAR_9;
 int VAR_10, VAR_11;


 if (FUNC_17(VAR_6->dev.of_node) == 0) {
  FUNC_8(&VAR_6->dev,
    "EMC device tree node doesn't have memory timings\n");
  return 0;
 }

 VAR_10 = FUNC_19(VAR_6, 0);
 if (VAR_10 < 0) {
  FUNC_7(&VAR_6->dev, "interrupt not specified\n");
  FUNC_7(&VAR_6->dev, "please update your device tree\n");
  return VAR_10;
 }

 VAR_7 = FUNC_21(&VAR_6->dev);
 if (!VAR_7)
  return -VAR_0;

 VAR_8 = FUNC_12(&VAR_6->dev, sizeof(*VAR_8), VAR_2);
 if (!VAR_8) {
  FUNC_18(VAR_7);
  return -VAR_1;
 }

 FUNC_16(&VAR_8->clk_handshake_complete);
 VAR_8->clk_nb.notifier_call = VAR_4;
 VAR_8->dev = &VAR_6->dev;

 VAR_11 = FUNC_22(VAR_8, VAR_7);
 FUNC_18(VAR_7);
 if (VAR_11)
  return VAR_11;

 VAR_9 = FUNC_20(VAR_6, VAR_3, 0);
 VAR_8->regs = FUNC_11(&VAR_6->dev, VAR_9);
 if (FUNC_0(VAR_8->regs))
  return FUNC_1(VAR_8->regs);

 VAR_11 = FUNC_15(VAR_8);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_13(&VAR_6->dev, VAR_10, VAR_5, 0,
          FUNC_9(&VAR_6->dev), VAR_8);
 if (VAR_11) {
  FUNC_7(&VAR_6->dev, "failed to request IRQ#%u: %d\n", VAR_10, VAR_11);
  return VAR_11;
 }

 VAR_8->clk = FUNC_10(&VAR_6->dev, "emc");
 if (FUNC_0(VAR_8->clk)) {
  VAR_11 = FUNC_1(VAR_8->clk);
  FUNC_7(&VAR_6->dev, "failed to get emc clock: %d\n", VAR_11);
  return VAR_11;
 }

 VAR_8->pll_m = FUNC_3(((void*)0), "pll_m");
 if (FUNC_0(VAR_8->pll_m)) {
  VAR_11 = FUNC_1(VAR_8->pll_m);
  FUNC_7(&VAR_6->dev, "failed to get pll_m clock: %d\n", VAR_11);
  return VAR_11;
 }

 VAR_8->backup_clk = FUNC_3(((void*)0), "pll_p");
 if (FUNC_0(VAR_8->backup_clk)) {
  VAR_11 = FUNC_1(VAR_8->backup_clk);
  FUNC_7(&VAR_6->dev, "failed to get pll_p clock: %d\n", VAR_11);
  goto put_pll_m;
 }

 VAR_8->emc_mux = FUNC_2(VAR_8->clk);
 if (FUNC_0(VAR_8->emc_mux)) {
  VAR_11 = FUNC_1(VAR_8->emc_mux);
  FUNC_7(&VAR_6->dev, "failed to get emc_mux clock: %d\n", VAR_11);
  goto put_backup;
 }

 VAR_11 = FUNC_4(VAR_8->clk, &VAR_8->clk_nb);
 if (VAR_11) {
  FUNC_7(&VAR_6->dev, "failed to register clk notifier: %d\n",
   VAR_11);
  goto put_backup;
 }


 VAR_11 = FUNC_14(VAR_8, VAR_8->timings[VAR_8->num_timings - 1].rate);
 if (VAR_11) {
  FUNC_7(&VAR_6->dev, "failed to initialize EMC clock rate: %d\n",
   VAR_11);
  goto unreg_notifier;
 }

 return 0;

unreg_notifier:
 FUNC_5(VAR_8->clk, &VAR_8->clk_nb);
put_backup:
 FUNC_6(VAR_8->backup_clk);
put_pll_m:
 FUNC_6(VAR_8->pll_m);

 return VAR_11;
}
