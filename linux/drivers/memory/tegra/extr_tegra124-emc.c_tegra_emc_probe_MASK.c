
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct tegra_emc {scalar_t__ num_timings; int mc; int regs; TYPE_1__* dev; } ;
struct resource {int dummy; } ;
struct TYPE_5__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,char*,...) ;
 int FUNC_4 (TYPE_1__*,struct resource*) ;
 struct tegra_emc* FUNC_5 (TYPE_1__*,int,int ) ;
 int FUNC_6 (TYPE_1__*,struct tegra_emc*) ;
 int FUNC_7 (struct tegra_emc*) ;
 struct platform_device* FUNC_8 (struct device_node*) ;
 int FUNC_9 (struct device_node*) ;
 struct device_node* FUNC_10 (int ,char*,int ) ;
 int FUNC_11 (struct platform_device*) ;
 struct resource* FUNC_12 (struct platform_device*,int ,int ) ;
 int FUNC_13 (struct platform_device*,struct tegra_emc*) ;
 struct device_node* FUNC_14 (int ,int) ;
 int FUNC_15 (struct tegra_emc*,struct device_node*) ;
 int FUNC_16 () ;

__attribute__((used)) static int FUNC_17(struct platform_device *VAR_6)
{
 struct platform_device *VAR_7;
 struct device_node *VAR_8;
 struct tegra_emc *VAR_9;
 struct resource *VAR_10;
 u32 VAR_11;
 int VAR_12;

 VAR_9 = FUNC_5(&VAR_6->dev, sizeof(*VAR_9), VAR_4);
 if (!VAR_9)
  return -VAR_2;

 VAR_9->dev = &VAR_6->dev;

 VAR_10 = FUNC_12(VAR_6, VAR_5, 0);
 VAR_9->regs = FUNC_4(&VAR_6->dev, VAR_10);
 if (FUNC_1(VAR_9->regs))
  return FUNC_2(VAR_9->regs);

 VAR_8 = FUNC_10(VAR_6->dev.of_node, "nvidia,memory-controller", 0);
 if (!VAR_8) {
  FUNC_3(&VAR_6->dev, "could not get memory controller\n");
  return -VAR_1;
 }

 VAR_7 = FUNC_8(VAR_8);
 FUNC_9(VAR_8);
 if (!VAR_7)
  return -VAR_1;

 VAR_9->mc = FUNC_11(VAR_7);
 if (!VAR_9->mc)
  return -VAR_3;

 VAR_11 = FUNC_16();

 VAR_8 = FUNC_14(VAR_6->dev.of_node, VAR_11);
 if (!VAR_8) {
  FUNC_3(&VAR_6->dev,
   "no memory timings for RAM code %u found in DT\n",
   VAR_11);
  return -VAR_1;
 }

 VAR_12 = FUNC_15(VAR_9, VAR_8);
 FUNC_9(VAR_8);
 if (VAR_12)
  return VAR_12;

 if (VAR_9->num_timings == 0) {
  FUNC_3(&VAR_6->dev,
   "no memory timings for RAM code %u registered\n",
   VAR_11);
  return -VAR_1;
 }

 VAR_12 = FUNC_7(VAR_9);
 if (VAR_12) {
  FUNC_3(&VAR_6->dev, "EMC initialization failed: %d\n", VAR_12);
  return VAR_12;
 }

 FUNC_13(VAR_6, VAR_9);

 if (FUNC_0(VAR_0))
  FUNC_6(&VAR_6->dev, VAR_9);

 return 0;
}
