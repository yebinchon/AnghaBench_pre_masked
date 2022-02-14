
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct resource {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct TYPE_4__ {int shutdown; int init; } ;
struct TYPE_3__ {TYPE_2__ phy; } ;
struct keystone_usbphy {TYPE_1__ usb_phy_gen; int phy_ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,struct resource*) ;
 struct keystone_usbphy* FUNC_3 (struct device*,int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 struct resource* FUNC_4 (struct platform_device*,int ,int ) ;
 int FUNC_5 (struct platform_device*,struct keystone_usbphy*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (struct device*,TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev;
 struct keystone_usbphy *VAR_7;
 struct resource *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_3(VAR_6, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_8 = FUNC_4(VAR_5, VAR_2, 0);
 VAR_7->phy_ctrl = FUNC_2(VAR_6, VAR_8);
 if (FUNC_0(VAR_7->phy_ctrl))
  return FUNC_1(VAR_7->phy_ctrl);

 VAR_9 = FUNC_7(VAR_6, &VAR_7->usb_phy_gen, ((void*)0));
 if (VAR_9)
  return VAR_9;

 VAR_7->usb_phy_gen.phy.init = VAR_3;
 VAR_7->usb_phy_gen.phy.shutdown = VAR_4;

 FUNC_5(VAR_5, VAR_7);

 return FUNC_6(&VAR_7->usb_phy_gen.phy);
}
