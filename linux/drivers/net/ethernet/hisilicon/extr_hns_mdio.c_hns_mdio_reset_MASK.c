
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mii_bus {int dev; TYPE_1__* parent; scalar_t__ priv; } ;
struct hns_mdio_sc_reg {int mdio_clk_st; int mdio_clk_en; int mdio_reset_st; int mdio_reset_dreq; int mdio_clk_dis; int mdio_reset_req; } ;
struct hns_mdio_device {struct hns_mdio_sc_reg sc_reg; int subctrl_vbase; } ;
typedef int acpi_status ;
struct TYPE_3__ {int fwnode; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,char*,int *,int *) ;
 int FUNC_3 (int *,char*,...) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct hns_mdio_device*,int ,int,int ,int,int ) ;

__attribute__((used)) static int FUNC_7(struct mii_bus *VAR_5)
{
 struct hns_mdio_device *VAR_6 = (struct hns_mdio_device *)VAR_5->priv;
 const struct hns_mdio_sc_reg *VAR_7;
 int VAR_8;

 if (FUNC_4(VAR_5->parent)) {
  if (!VAR_6->subctrl_vbase) {
   FUNC_3(&VAR_5->dev, "mdio sys ctl reg has not maped\n");
   return -VAR_1;
  }

  VAR_7 = &VAR_6->sc_reg;

  VAR_8 = FUNC_6(VAR_6, VAR_7->mdio_reset_req,
         0x1, VAR_7->mdio_reset_st, 0x1,
         VAR_4);
  if (VAR_8) {
   FUNC_3(&VAR_5->dev, "MDIO reset fail\n");
   return VAR_8;
  }


  VAR_8 = FUNC_6(VAR_6, VAR_7->mdio_clk_dis,
         0x1, VAR_7->mdio_clk_st, 0x1,
         VAR_3);
  if (VAR_8) {
   FUNC_3(&VAR_5->dev, "MDIO dis clk fail\n");
   return VAR_8;
  }


  VAR_8 = FUNC_6(VAR_6, VAR_7->mdio_reset_dreq,
         0x1, VAR_7->mdio_reset_st, 0x1,
         VAR_3);
  if (VAR_8) {
   FUNC_3(&VAR_5->dev, "MDIO dis clk fail\n");
   return VAR_8;
  }


  VAR_8 = FUNC_6(VAR_6, VAR_7->mdio_clk_en,
         0x1, VAR_7->mdio_clk_st, 0x1,
         VAR_4);
  if (VAR_8)
   FUNC_3(&VAR_5->dev, "MDIO en clk fail\n");
 } else if (FUNC_5(VAR_5->parent->fwnode)) {
  acpi_status VAR_9;

  VAR_9 = FUNC_2(FUNC_1(VAR_5->parent),
      "_RST", ((void*)0), ((void*)0));
  if (FUNC_0(VAR_9)) {
   FUNC_3(&VAR_5->dev, "Reset failed, return:%#x\n", VAR_9);
   VAR_8 = -VAR_0;
  } else {
   VAR_8 = 0;
  }
 } else {
  FUNC_3(&VAR_5->dev, "Can not get cfg data from DT or ACPI\n");
  VAR_8 = -VAR_2;
 }
 return VAR_8;
}
