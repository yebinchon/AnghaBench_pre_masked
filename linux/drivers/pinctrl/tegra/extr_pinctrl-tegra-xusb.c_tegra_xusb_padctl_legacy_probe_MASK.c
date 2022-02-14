
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int owner; int * confops; int * pmxops; int * pctlops; int npins; int pins; int name; } ;
struct tegra_xusb_padctl {struct phy* rst; struct phy* provider; struct phy** phys; struct phy* pinctrl; TYPE_1__ desc; TYPE_2__* dev; struct phy* regs; int soc; int lock; } ;
struct resource {int dummy; } ;
struct TYPE_12__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct phy {int dummy; } ;
struct of_device_id {int data; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct phy*) ;
 int FUNC_2 (struct phy*) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (TYPE_2__*,char*,...) ;
 int FUNC_4 (TYPE_2__*) ;
 struct phy* FUNC_5 (TYPE_2__*,struct resource*) ;
 struct tegra_xusb_padctl* FUNC_6 (TYPE_2__*,int,int ) ;
 struct phy* FUNC_7 (TYPE_2__*,int ) ;
 struct phy* FUNC_8 (TYPE_2__*,int *,int *) ;
 struct phy* FUNC_9 (TYPE_2__*,TYPE_1__*,struct tegra_xusb_padctl*) ;
 struct phy* FUNC_10 (TYPE_2__*,int *) ;
 int FUNC_11 (TYPE_1__*,int ,int) ;
 int FUNC_12 (int *) ;
 struct of_device_id* FUNC_13 (int ,int ) ;
 int VAR_6 ;
 int FUNC_14 (struct phy*,struct tegra_xusb_padctl*) ;
 struct resource* FUNC_15 (struct platform_device*,int ,int ) ;
 int FUNC_16 (struct platform_device*,struct tegra_xusb_padctl*) ;
 int FUNC_17 (struct phy*) ;
 int FUNC_18 (struct phy*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

int FUNC_19(struct platform_device *VAR_14)
{
 struct tegra_xusb_padctl *VAR_15;
 const struct of_device_id *VAR_16;
 struct resource *VAR_17;
 struct phy *VAR_18;
 int VAR_19;

 VAR_15 = FUNC_6(&VAR_14->dev, sizeof(*VAR_15), VAR_1);
 if (!VAR_15)
  return -VAR_0;

 FUNC_16(VAR_14, VAR_15);
 FUNC_12(&VAR_15->lock);
 VAR_15->dev = &VAR_14->dev;

 VAR_16 = FUNC_13(VAR_9, VAR_14->dev.of_node);
 VAR_15->soc = VAR_16->data;

 VAR_17 = FUNC_15(VAR_14, VAR_2, 0);
 VAR_15->regs = FUNC_5(&VAR_14->dev, VAR_17);
 if (FUNC_1(VAR_15->regs))
  return FUNC_2(VAR_15->regs);

 VAR_15->rst = FUNC_10(&VAR_14->dev, ((void*)0));
 if (FUNC_1(VAR_15->rst))
  return FUNC_2(VAR_15->rst);

 VAR_19 = FUNC_18(VAR_15->rst);
 if (VAR_19 < 0)
  return VAR_19;

 FUNC_11(&VAR_15->desc, 0, sizeof(VAR_15->desc));
 VAR_15->desc.name = FUNC_4(VAR_15->dev);
 VAR_15->desc.pins = VAR_8;
 VAR_15->desc.npins = FUNC_0(VAR_8);
 VAR_15->desc.pctlops = &VAR_11;
 VAR_15->desc.pmxops = &VAR_12;
 VAR_15->desc.confops = &VAR_10;
 VAR_15->desc.owner = VAR_5;

 VAR_15->pinctrl = FUNC_9(&VAR_14->dev, &VAR_15->desc,
      VAR_15);
 if (FUNC_1(VAR_15->pinctrl)) {
  FUNC_3(&VAR_14->dev, "failed to register pincontrol\n");
  VAR_19 = FUNC_2(VAR_15->pinctrl);
  goto reset;
 }

 VAR_18 = FUNC_8(&VAR_14->dev, ((void*)0), &VAR_6);
 if (FUNC_1(VAR_18)) {
  VAR_19 = FUNC_2(VAR_18);
  goto reset;
 }

 VAR_15->phys[VAR_3] = VAR_18;
 FUNC_14(VAR_18, VAR_15);

 VAR_18 = FUNC_8(&VAR_14->dev, ((void*)0), &VAR_7);
 if (FUNC_1(VAR_18)) {
  VAR_19 = FUNC_2(VAR_18);
  goto reset;
 }

 VAR_15->phys[VAR_4] = VAR_18;
 FUNC_14(VAR_18, VAR_15);

 VAR_15->provider = FUNC_7(&VAR_14->dev,
        VAR_13);
 if (FUNC_1(VAR_15->provider)) {
  VAR_19 = FUNC_2(VAR_15->provider);
  FUNC_3(&VAR_14->dev, "failed to register PHYs: %d\n", VAR_19);
  goto reset;
 }

 return 0;

reset:
 FUNC_17(VAR_15->rst);
 return VAR_19;
}
