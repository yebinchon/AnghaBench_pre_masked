
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_role_switch_desc {int allow_userspace_control; int fwnode; int get; int set; } ;
struct resource {int start; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct intel_xhci_usb_data {int enable_sw_switch; int role_sw; int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,int ,int ) ;
 struct intel_xhci_usb_data* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct resource* FUNC_6 (struct platform_device*,int ,int ) ;
 int FUNC_7 (struct platform_device*,struct intel_xhci_usb_data*) ;
 int FUNC_8 (struct device*) ;
 int FUNC_9 (struct device*) ;
 int FUNC_10 (struct resource*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct device*,struct usb_role_switch_desc*) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_7)
{
 struct usb_role_switch_desc VAR_8 = { };
 struct device *VAR_9 = &VAR_7->dev;
 struct intel_xhci_usb_data *VAR_10;
 struct resource *VAR_11;
 int VAR_12;

 VAR_10 = FUNC_4(VAR_9, sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return -VAR_1;

 VAR_11 = FUNC_6(VAR_7, VAR_3, 0);
 if (!VAR_11)
  return -VAR_0;
 VAR_10->base = FUNC_3(VAR_9, VAR_11->start, FUNC_10(VAR_11));
 if (!VAR_10->base)
  return -VAR_1;

 FUNC_7(VAR_7, VAR_10);

 VAR_12 = FUNC_12(&VAR_5);
 if (VAR_12)
  return VAR_12;

 VAR_8.set = VAR_6,
 VAR_8.get = VAR_4,
 VAR_8.allow_userspace_control = 1,
 VAR_8.fwnode = FUNC_11(&VAR_5);

 VAR_10->enable_sw_switch = !FUNC_2(VAR_9,
      "sw_switch_disable");

 VAR_10->role_sw = FUNC_13(VAR_9, &VAR_8);
 if (FUNC_0(VAR_10->role_sw)) {
  FUNC_5(VAR_8.fwnode);
  return FUNC_1(VAR_10->role_sw);
 }

 FUNC_9(VAR_9);
 FUNC_8(VAR_9);

 return 0;
}
