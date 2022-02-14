
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct resource {int dummy; } ;
struct TYPE_4__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct phy_control {int dummy; } ;
struct of_device_id {struct phy_control* data; } ;
struct am335x_control_usb {TYPE_1__* dev; struct phy_control phy_ctrl; int lock; void* wkup; void* phy_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (TYPE_1__*,struct am335x_control_usb*) ;
 void* FUNC_3 (TYPE_1__*,struct resource*) ;
 struct am335x_control_usb* FUNC_4 (TYPE_1__*,int,int ) ;
 struct of_device_id* FUNC_5 (int ,int ) ;
 int VAR_4 ;
 struct resource* FUNC_6 (struct platform_device*,int ,char*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_5)
{
 struct resource *VAR_6;
 struct am335x_control_usb *VAR_7;
 const struct of_device_id *VAR_8;
 const struct phy_control *VAR_9;

 VAR_8 = FUNC_5(VAR_4, VAR_5->dev.of_node);
 if (!VAR_8)
  return -VAR_0;

 VAR_9 = VAR_8->data;

 VAR_7 = FUNC_4(&VAR_5->dev, sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_7->dev = &VAR_5->dev;

 VAR_6 = FUNC_6(VAR_5, VAR_3, "phy_ctrl");
 VAR_7->phy_reg = FUNC_3(&VAR_5->dev, VAR_6);
 if (FUNC_0(VAR_7->phy_reg))
  return FUNC_1(VAR_7->phy_reg);

 VAR_6 = FUNC_6(VAR_5, VAR_3, "wakeup");
 VAR_7->wkup = FUNC_3(&VAR_5->dev, VAR_6);
 if (FUNC_0(VAR_7->wkup))
  return FUNC_1(VAR_7->wkup);

 FUNC_7(&VAR_7->lock);
 VAR_7->phy_ctrl = *VAR_9;

 FUNC_2(VAR_7->dev, VAR_7);
 return 0;
}
