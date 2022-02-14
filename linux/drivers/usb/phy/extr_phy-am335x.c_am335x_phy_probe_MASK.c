
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct TYPE_4__ {int shutdown; int init; } ;
struct TYPE_3__ {TYPE_2__ phy; } ;
struct am335x_phy {scalar_t__ id; TYPE_1__ usb_phy_gen; int dr_mode; int phy_ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct device*,char*,scalar_t__) ;
 int FUNC_2 (struct device*,int) ;
 int FUNC_3 (struct device*,int) ;
 struct am335x_phy* FUNC_4 (struct device*,int,int ) ;
 scalar_t__ FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int,int ,int) ;
 int FUNC_8 (struct platform_device*,struct am335x_phy*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (struct device*,TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_5)
{
 struct am335x_phy *VAR_6;
 struct device *VAR_7 = &VAR_5->dev;
 int VAR_8;

 VAR_6 = FUNC_4(VAR_7, sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->phy_ctrl = FUNC_0(VAR_7);
 if (!VAR_6->phy_ctrl)
  return -VAR_1;

 VAR_6->id = FUNC_5(VAR_5->dev.of_node, "phy");
 if (VAR_6->id < 0) {
  FUNC_1(&VAR_5->dev, "Missing PHY id: %d\n", VAR_6->id);
  return VAR_6->id;
 }

 VAR_6->dr_mode = FUNC_6(VAR_5->dev.of_node, -1);

 VAR_8 = FUNC_10(VAR_7, &VAR_6->usb_phy_gen, ((void*)0));
 if (VAR_8)
  return VAR_8;

 VAR_6->usb_phy_gen.phy.init = VAR_3;
 VAR_6->usb_phy_gen.phy.shutdown = VAR_4;

 FUNC_8(VAR_5, VAR_6);
 FUNC_2(VAR_7, 1);
 FUNC_3(VAR_7, 0);
 FUNC_7(VAR_6->phy_ctrl, VAR_6->id, VAR_6->dr_mode, 0);

 return FUNC_9(&VAR_6->usb_phy_gen.phy);
}
