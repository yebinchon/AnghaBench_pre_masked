
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct resource {int start; } ;
struct device {scalar_t__ of_node; } ;
struct platform_device {char* name; int id; struct device dev; } ;
struct TYPE_6__ {int addr; } ;
struct phy_device {TYPE_2__* drv; TYPE_1__ mdio; } ;
struct of_device_id {struct davinci_mdio_of_param* data; } ;
struct mdio_platform_data {int dummy; } ;
struct davinci_mdio_of_param {int autosuspend_delay_ms; } ;
struct davinci_mdio_data {int skip_scan; TYPE_3__* bus; int regs; struct device* dev; int clk; struct mdio_platform_data pdata; } ;
struct TYPE_8__ {struct davinci_mdio_data* priv; struct device* parent; int reset; int write; int read; int name; int id; } ;
struct TYPE_7__ {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct davinci_mdio_data*) ;
 int VAR_6 ;
 int FUNC_4 (struct mdio_platform_data*,struct platform_device*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct mdio_platform_data VAR_10 ;
 int FUNC_5 (struct device*,char*) ;
 struct mdio_platform_data* FUNC_6 (struct device*) ;
 int FUNC_7 (struct device*,char*,int ,int ,char*) ;
 int FUNC_8 (struct device*) ;
 int FUNC_9 (struct device*,struct davinci_mdio_data*) ;
 int FUNC_10 (struct device*,char*) ;
 int FUNC_11 (struct device*,int ,int ) ;
 struct davinci_mdio_data* FUNC_12 (struct device*,int,int ) ;
 TYPE_3__* FUNC_13 (struct device*) ;
 struct phy_device* FUNC_14 (TYPE_3__*,int) ;
 scalar_t__ FUNC_15 (scalar_t__) ;
 struct of_device_id* FUNC_16 (int ,struct device*) ;
 int FUNC_17 (TYPE_3__*,scalar_t__) ;
 int FUNC_18 (struct phy_device*) ;
 struct resource* FUNC_19 (struct platform_device*,int ,int ) ;
 int FUNC_20 (struct device*) ;
 int FUNC_21 (struct device*) ;
 int FUNC_22 (struct device*) ;
 int FUNC_23 (struct device*,int) ;
 int FUNC_24 (struct device*) ;
 int FUNC_25 (struct resource*) ;
 int FUNC_26 (int ,int ,char*,char*,...) ;

__attribute__((used)) static int FUNC_27(struct platform_device *VAR_11)
{
 struct mdio_platform_data *VAR_12 = FUNC_6(&VAR_11->dev);
 struct device *VAR_13 = &VAR_11->dev;
 struct davinci_mdio_data *VAR_14;
 struct resource *VAR_15;
 struct phy_device *VAR_16;
 int VAR_17, VAR_18;
 int VAR_19 = -1;

 VAR_14 = FUNC_12(VAR_13, sizeof(*VAR_14), VAR_2);
 if (!VAR_14)
  return -VAR_1;

 VAR_14->bus = FUNC_13(VAR_13);
 if (!VAR_14->bus) {
  FUNC_5(VAR_13, "failed to alloc mii bus\n");
  return -VAR_1;
 }

 if (FUNC_0(VAR_0) && VAR_13->of_node) {
  const struct of_device_id *VAR_20;

  VAR_17 = FUNC_4(&VAR_14->pdata, VAR_11);
  if (VAR_17)
   return VAR_17;
  FUNC_26(VAR_14->bus->id, VAR_4, "%s", VAR_11->name);

  VAR_20 = FUNC_16(VAR_6, &VAR_11->dev);
  if (VAR_20) {
   const struct davinci_mdio_of_param *VAR_21;

   VAR_21 = VAR_20->data;
   if (VAR_21)
    VAR_19 =
     VAR_21->autosuspend_delay_ms;
  }
 } else {
  VAR_14->pdata = VAR_12 ? (*VAR_12) : VAR_10;
  FUNC_26(VAR_14->bus->id, VAR_4, "%s-%x",
    VAR_11->name, VAR_11->id);
 }

 VAR_14->bus->name = FUNC_8(VAR_13);
 VAR_14->bus->read = VAR_7,
 VAR_14->bus->write = VAR_9,
 VAR_14->bus->reset = VAR_8,
 VAR_14->bus->parent = VAR_13;
 VAR_14->bus->priv = VAR_14;

 VAR_14->clk = FUNC_10(VAR_13, "fck");
 if (FUNC_1(VAR_14->clk)) {
  FUNC_5(VAR_13, "failed to get device clock\n");
  return FUNC_2(VAR_14->clk);
 }

 FUNC_9(VAR_13, VAR_14);
 VAR_14->dev = VAR_13;

 VAR_15 = FUNC_19(VAR_11, VAR_3, 0);
 VAR_14->regs = FUNC_11(VAR_13, VAR_15->start, FUNC_25(VAR_15));
 if (!VAR_14->regs)
  return -VAR_1;

 FUNC_3(VAR_14);

 FUNC_23(&VAR_11->dev, VAR_19);
 FUNC_24(&VAR_11->dev);
 FUNC_22(&VAR_11->dev);






 if (VAR_13->of_node && FUNC_15(VAR_13->of_node))
  VAR_14->skip_scan = 1;

 VAR_17 = FUNC_17(VAR_14->bus, VAR_13->of_node);
 if (VAR_17)
  goto bail_out;


 for (VAR_18 = 0; VAR_18 < VAR_5; VAR_18++) {
  VAR_16 = FUNC_14(VAR_14->bus, VAR_18);
  if (VAR_16) {
   FUNC_7(VAR_13, "phy[%d]: device %s, driver %s\n",
     VAR_16->mdio.addr, FUNC_18(VAR_16),
     VAR_16->drv ? VAR_16->drv->name : "unknown");
  }
 }

 return 0;

bail_out:
 FUNC_21(&VAR_11->dev);
 FUNC_20(&VAR_11->dev);
 return VAR_17;
}
