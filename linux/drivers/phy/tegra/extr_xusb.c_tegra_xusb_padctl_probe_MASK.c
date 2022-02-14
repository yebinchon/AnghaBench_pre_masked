
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct tegra_xusb_padctl_soc {TYPE_2__* ops; } ;
struct tegra_xusb_padctl {struct tegra_xusb_padctl* rst; TYPE_4__* supplies; TYPE_1__* soc; struct tegra_xusb_padctl* regs; int lock; int pads; int lanes; int ports; } ;
struct resource {int dummy; } ;
struct TYPE_16__ {struct device_node* of_node; } ;
struct platform_device {TYPE_3__ dev; } ;
struct of_device_id {struct tegra_xusb_padctl_soc* data; } ;
struct device_node {int dummy; } ;
struct TYPE_17__ {int supply; } ;
struct TYPE_15__ {int (* remove ) (struct tegra_xusb_padctl*) ;struct tegra_xusb_padctl* (* probe ) (TYPE_3__*,struct tegra_xusb_padctl_soc const*) ;} ;
struct TYPE_14__ {unsigned int num_supplies; int * supply_names; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct tegra_xusb_padctl*) ;
 int FUNC_2 (struct tegra_xusb_padctl*) ;
 int FUNC_3 (TYPE_3__*,char*,int) ;
 int FUNC_4 (TYPE_3__*,char*) ;
 struct tegra_xusb_padctl* FUNC_5 (TYPE_3__*,struct resource*) ;
 TYPE_4__* FUNC_6 (TYPE_3__*,unsigned int,int,int ) ;
 int FUNC_7 (TYPE_3__*,unsigned int,TYPE_4__*) ;
 struct tegra_xusb_padctl* FUNC_8 (TYPE_3__*,int *) ;
 int FUNC_9 (int *) ;
 struct device_node* FUNC_10 (struct device_node*,char*) ;
 struct of_device_id* FUNC_11 (int ,struct device_node*) ;
 int FUNC_12 (struct device_node*) ;
 struct resource* FUNC_13 (struct platform_device*,int ,int ) ;
 int FUNC_14 (struct platform_device*,struct tegra_xusb_padctl*) ;
 int FUNC_15 (unsigned int,TYPE_4__*) ;
 int FUNC_16 (unsigned int,TYPE_4__*) ;
 int FUNC_17 (struct tegra_xusb_padctl*) ;
 int FUNC_18 (struct tegra_xusb_padctl*) ;
 struct tegra_xusb_padctl* FUNC_19 (TYPE_3__*,struct tegra_xusb_padctl_soc const*) ;
 int FUNC_20 (struct tegra_xusb_padctl*) ;
 int FUNC_21 (struct platform_device*) ;
 int VAR_3 ;
 int FUNC_22 (struct tegra_xusb_padctl*) ;
 int FUNC_23 (struct tegra_xusb_padctl*) ;
 int FUNC_24 (struct tegra_xusb_padctl*) ;

__attribute__((used)) static int FUNC_25(struct platform_device *VAR_4)
{
 struct device_node *VAR_5 = VAR_4->dev.of_node;
 const struct tegra_xusb_padctl_soc *VAR_6;
 struct tegra_xusb_padctl *VAR_7;
 const struct of_device_id *VAR_8;
 struct resource *VAR_9;
 unsigned int VAR_10;
 int VAR_11;


 VAR_5 = FUNC_10(VAR_5, "pads");
 if (!VAR_5) {
  FUNC_4(&VAR_4->dev, "deprecated DT, using legacy driver\n");
  return FUNC_21(VAR_4);
 }

 FUNC_12(VAR_5);

 VAR_8 = FUNC_11(VAR_3, VAR_4->dev.of_node);
 VAR_6 = VAR_8->data;

 VAR_7 = VAR_6->ops->probe(&VAR_4->dev, VAR_6);
 if (FUNC_1(VAR_7))
  return FUNC_2(VAR_7);

 FUNC_14(VAR_4, VAR_7);
 FUNC_0(&VAR_7->ports);
 FUNC_0(&VAR_7->lanes);
 FUNC_0(&VAR_7->pads);
 FUNC_9(&VAR_7->lock);

 VAR_9 = FUNC_13(VAR_4, VAR_2, 0);
 VAR_7->regs = FUNC_5(&VAR_4->dev, VAR_9);
 if (FUNC_1(VAR_7->regs)) {
  VAR_11 = FUNC_2(VAR_7->regs);
  goto remove;
 }

 VAR_7->rst = FUNC_8(&VAR_4->dev, ((void*)0));
 if (FUNC_1(VAR_7->rst)) {
  VAR_11 = FUNC_2(VAR_7->rst);
  goto remove;
 }

 VAR_7->supplies = FUNC_6(&VAR_4->dev, VAR_7->soc->num_supplies,
     sizeof(*VAR_7->supplies), VAR_1);
 if (!VAR_7->supplies) {
  VAR_11 = -VAR_0;
  goto remove;
 }

 for (VAR_10 = 0; VAR_10 < VAR_7->soc->num_supplies; VAR_10++)
  VAR_7->supplies[VAR_10].supply = VAR_7->soc->supply_names[VAR_10];

 VAR_11 = FUNC_7(&VAR_4->dev, VAR_7->soc->num_supplies,
          VAR_7->supplies);
 if (VAR_11 < 0) {
  FUNC_3(&VAR_4->dev, "failed to get regulators: %d\n", VAR_11);
  goto remove;
 }

 VAR_11 = FUNC_18(VAR_7->rst);
 if (VAR_11 < 0)
  goto remove;

 VAR_11 = FUNC_16(VAR_7->soc->num_supplies,
        VAR_7->supplies);
 if (VAR_11 < 0) {
  FUNC_3(&VAR_4->dev, "failed to enable supplies: %d\n", VAR_11);
  goto reset;
 }

 VAR_11 = FUNC_23(VAR_7);
 if (VAR_11 < 0) {
  FUNC_3(&VAR_4->dev, "failed to setup pads: %d\n", VAR_11);
  goto power_down;
 }

 VAR_11 = FUNC_24(VAR_7);
 if (VAR_11) {
  FUNC_3(&VAR_4->dev, "failed to setup XUSB ports: %d\n", VAR_11);
  goto remove_pads;
 }

 return 0;

remove_pads:
 FUNC_22(VAR_7);
power_down:
 FUNC_15(VAR_7->soc->num_supplies, VAR_7->supplies);
reset:
 FUNC_17(VAR_7->rst);
remove:
 VAR_6->ops->remove(VAR_7);
 return VAR_11;
}
