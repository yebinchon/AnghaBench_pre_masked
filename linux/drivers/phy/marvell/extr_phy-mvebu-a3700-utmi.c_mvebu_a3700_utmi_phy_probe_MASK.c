
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct resource {int dummy; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct phy_provider {int dummy; } ;
struct mvebu_a3700_utmi {int phy; TYPE_1__* caps; int usb_misc; int regs; } ;
struct TYPE_4__ {int (* power_off ) (int ) ;} ;
struct TYPE_3__ {TYPE_2__* ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct phy_provider*) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,struct resource*) ;
 struct mvebu_a3700_utmi* FUNC_5 (struct device*,int,int ) ;
 struct phy_provider* FUNC_6 (struct device*,int ) ;
 int FUNC_7 (struct device*,int *,TYPE_2__*) ;
 TYPE_1__* FUNC_8 (struct device*) ;
 int VAR_4 ;
 int FUNC_9 (int ,struct mvebu_a3700_utmi*) ;
 struct resource* FUNC_10 (struct platform_device*,int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,char*) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev;
 struct mvebu_a3700_utmi *VAR_7;
 struct phy_provider *VAR_8;
 struct resource *VAR_9;

 VAR_7 = FUNC_5(VAR_6, sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_1;


 VAR_9 = FUNC_10(VAR_5, VAR_3, 0);
 if (!VAR_9) {
  FUNC_3(VAR_6, "Missing UTMI PHY memory resource\n");
  return -VAR_0;
 }

 VAR_7->regs = FUNC_4(VAR_6, VAR_9);
 if (FUNC_0(VAR_7->regs))
  return FUNC_1(VAR_7->regs);


 VAR_7->usb_misc = FUNC_12(VAR_6->of_node,
        "marvell,usb-misc-reg");
 if (FUNC_0(VAR_7->usb_misc)) {
  FUNC_3(VAR_6,
   "Missing USB misc purpose system controller\n");
  return FUNC_1(VAR_7->usb_misc);
 }


 VAR_7->caps = FUNC_8(VAR_6);


 VAR_7->phy = FUNC_7(VAR_6, ((void*)0), VAR_7->caps->ops);
 if (FUNC_0(VAR_7->phy)) {
  FUNC_3(VAR_6, "Failed to create the UTMI PHY\n");
  return FUNC_1(VAR_7->phy);
 }

 FUNC_9(VAR_7->phy, VAR_7);


 VAR_7->caps->ops->power_off(VAR_7->phy);

 VAR_8 = FUNC_6(VAR_6, VAR_4);

 return FUNC_2(VAR_8);
}
