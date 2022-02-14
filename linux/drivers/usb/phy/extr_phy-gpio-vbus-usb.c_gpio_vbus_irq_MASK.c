
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_otg {TYPE_1__* gadget; } ;
struct platform_device {int dev; } ;
struct gpio_vbus_mach_info {int dummy; } ;
struct TYPE_4__ {struct usb_otg* otg; } ;
struct gpio_vbus_data {int work; TYPE_2__ phy; } ;
typedef int irqreturn_t ;
struct TYPE_3__ {char* name; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,char*,char*) ;
 struct gpio_vbus_mach_info* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct gpio_vbus_mach_info*) ;
 int FUNC_3 (int) ;
 struct gpio_vbus_data* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_1, void *VAR_2)
{
 struct platform_device *VAR_3 = VAR_2;
 struct gpio_vbus_mach_info *VAR_4 = FUNC_1(&VAR_3->dev);
 struct gpio_vbus_data *VAR_5 = FUNC_4(VAR_3);
 struct usb_otg *VAR_6 = VAR_5->phy.otg;

 FUNC_0(&VAR_3->dev, "VBUS %s (gadget: %s)\n",
  FUNC_2(VAR_4) ? "supplied" : "inactive",
  VAR_6->gadget ? VAR_6->gadget->name : "none");

 if (VAR_6->gadget)
  FUNC_5(&VAR_5->work, FUNC_3(100));

 return VAR_0;
}
