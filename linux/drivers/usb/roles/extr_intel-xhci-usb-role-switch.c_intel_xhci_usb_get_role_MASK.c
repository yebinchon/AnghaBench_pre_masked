
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_xhci_usb_data {scalar_t__ base; } ;
struct device {int dummy; } ;
typedef enum usb_role { ____Placeholder_usb_role } usb_role ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct intel_xhci_usb_data* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static enum usb_role FUNC_4(struct device *VAR_6)
{
 struct intel_xhci_usb_data *VAR_7 = FUNC_0(VAR_6);
 enum usb_role VAR_8;
 u32 VAR_9;

 FUNC_1(VAR_6);
 VAR_9 = FUNC_3(VAR_7->base + VAR_0);
 FUNC_2(VAR_6);

 if (!(VAR_9 & VAR_1))
  VAR_8 = VAR_4;
 else if (VAR_9 & VAR_2)
  VAR_8 = VAR_3;
 else
  VAR_8 = VAR_5;

 return VAR_8;
}
