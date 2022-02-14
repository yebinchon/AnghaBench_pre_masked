
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef void* u16 ;
struct TYPE_9__ {int fwnode; int of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct of_phandle_args {int args_count; scalar_t__* args; int np; } ;
struct mii_bus {int phy_mask; int irq; int id; TYPE_2__* parent; struct hns_mdio_device* priv; int reset; int write; int read; int name; } ;
struct TYPE_8__ {void* mdio_reset_st; void* mdio_clk_st; void* mdio_reset_dreq; void* mdio_reset_req; void* mdio_clk_dis; void* mdio_clk_en; } ;
struct hns_mdio_device {int * subctrl_vbase; TYPE_1__ sc_reg; int * vbase; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 char* FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,char*,...) ;
 struct hns_mdio_device* FUNC_6 (TYPE_2__*,int,int ) ;
 struct mii_bus* FUNC_7 (TYPE_2__*) ;
 int * FUNC_8 (struct platform_device*,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (struct mii_bus*) ;
 int FUNC_11 (int ,int ,int) ;
 int FUNC_12 (struct mii_bus*,int ) ;
 int FUNC_13 (int ,char*,int,int ,struct of_phandle_args*) ;
 int FUNC_14 (struct platform_device*,struct mii_bus*) ;
 int FUNC_15 (int ,int ,char*,char*,char*) ;
 int * FUNC_16 (int ) ;

__attribute__((used)) static int FUNC_17(struct platform_device *VAR_17)
{
 struct hns_mdio_device *VAR_18;
 struct mii_bus *VAR_19;
 int VAR_20 = -VAR_0;

 if (!VAR_17) {
  FUNC_2(((void*)0), "pdev is NULL!\r\n");
  return -VAR_0;
 }

 VAR_18 = FUNC_6(&VAR_17->dev, sizeof(*VAR_18), VAR_3);
 if (!VAR_18)
  return -VAR_1;

 VAR_19 = FUNC_7(&VAR_17->dev);
 if (!VAR_19) {
  FUNC_2(&VAR_17->dev, "mdiobus_alloc fail!\n");
  return -VAR_1;
 }

 VAR_19->name = VAR_4;
 VAR_19->read = VAR_14;
 VAR_19->write = VAR_16;
 VAR_19->reset = VAR_15;
 VAR_19->priv = VAR_18;
 VAR_19->parent = &VAR_17->dev;

 VAR_18->vbase = FUNC_8(VAR_17, 0);
 if (FUNC_0(VAR_18->vbase)) {
  VAR_20 = FUNC_1(VAR_18->vbase);
  return VAR_20;
 }

 FUNC_14(VAR_17, VAR_19);
 FUNC_15(VAR_19->id, VAR_11, "%s-%s", "Mii",
   FUNC_3(&VAR_17->dev));
 if (FUNC_4(&VAR_17->dev)) {
  struct of_phandle_args VAR_21;

  VAR_20 = FUNC_13(VAR_17->dev.of_node,
             "subctrl-vbase",
             4,
             0,
             &VAR_21);
  if (!VAR_20) {
   VAR_18->subctrl_vbase =
    FUNC_16(VAR_21.np);
   if (FUNC_0(VAR_18->subctrl_vbase)) {
    FUNC_5(&VAR_17->dev, "syscon_node_to_regmap error\n");
    VAR_18->subctrl_vbase = ((void*)0);
   } else {
    if (VAR_21.args_count == 4) {
     VAR_18->sc_reg.mdio_clk_en =
      (u16)VAR_21.args[0];
     VAR_18->sc_reg.mdio_clk_dis =
      (u16)VAR_21.args[0] + 4;
     VAR_18->sc_reg.mdio_reset_req =
      (u16)VAR_21.args[1];
     VAR_18->sc_reg.mdio_reset_dreq =
      (u16)VAR_21.args[1] + 4;
     VAR_18->sc_reg.mdio_clk_st =
      (u16)VAR_21.args[2];
     VAR_18->sc_reg.mdio_reset_st =
      (u16)VAR_21.args[3];
    } else {

     VAR_18->sc_reg.mdio_clk_en =
      VAR_6;
     VAR_18->sc_reg.mdio_clk_dis =
      VAR_5;
     VAR_18->sc_reg.mdio_reset_req =
      VAR_9;
     VAR_18->sc_reg.mdio_reset_dreq =
      VAR_8;
     VAR_18->sc_reg.mdio_clk_st =
      VAR_7;
     VAR_18->sc_reg.mdio_reset_st =
      VAR_10;
    }
   }
  } else {
   FUNC_5(&VAR_17->dev, "find syscon ret = %#x\n", VAR_20);
   VAR_18->subctrl_vbase = ((void*)0);
  }

  VAR_20 = FUNC_12(VAR_19, VAR_17->dev.of_node);
 } else if (FUNC_9(VAR_17->dev.fwnode)) {

  FUNC_11(VAR_19->irq, VAR_13, 4 * VAR_12);


  VAR_19->phy_mask = ~0;


  VAR_20 = FUNC_10(VAR_19);
 } else {
  FUNC_2(&VAR_17->dev, "Can not get cfg data from DT or ACPI\n");
  VAR_20 = -VAR_2;
 }

 if (VAR_20) {
  FUNC_2(&VAR_17->dev, "Cannot register as MDIO bus!\n");
  FUNC_14(VAR_17, ((void*)0));
  return VAR_20;
 }

 return 0;
}
