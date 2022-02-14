
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_xhci_usb_data {scalar_t__ base; scalar_t__ enable_sw_switch; } ;
struct device {int dummy; } ;
typedef enum usb_role { ____Placeholder_usb_role } usb_role ;
typedef scalar_t__ acpi_status ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;



 scalar_t__ FUNC_1 (int ,int*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct device*,char*) ;
 struct intel_xhci_usb_data* FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*,char*) ;
 unsigned long VAR_16 ;
 unsigned long FUNC_6 (int ) ;
 int FUNC_7 (struct device*) ;
 int FUNC_8 (struct device*) ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (unsigned long,unsigned long) ;
 int FUNC_11 (int,int) ;
 int FUNC_12 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_13(struct device *VAR_17, enum usb_role VAR_18)
{
 struct intel_xhci_usb_data *VAR_19 = FUNC_4(VAR_17);
 unsigned long VAR_20;
 acpi_status VAR_21;
 u32 VAR_22, VAR_23;
 u32 VAR_24 = VAR_2;






 VAR_21 = FUNC_1(VAR_0, &VAR_22);
 if (FUNC_0(VAR_21) && VAR_21 != VAR_1) {
  FUNC_3(VAR_17, "Error could not acquire lock\n");
  return -VAR_9;
 }

 FUNC_7(VAR_17);







 VAR_23 = FUNC_9(VAR_19->base + VAR_6);
 switch (VAR_18) {
 case 128:
  VAR_23 |= VAR_12;
  VAR_23 &= ~VAR_15;
  VAR_24 = VAR_2;
  break;
 case 129:
  VAR_23 &= ~VAR_12;
  VAR_23 &= ~VAR_15;
  VAR_24 = VAR_5;
  break;
 case 130:
  VAR_23 |= VAR_12;
  VAR_23 |= VAR_15;
  VAR_24 = VAR_4;
  break;
 }
 VAR_23 |= VAR_13;
 if (VAR_19->enable_sw_switch) {
  VAR_23 &= ~VAR_3;
  VAR_23 |= VAR_14 | VAR_24;
 }
 FUNC_12(VAR_23, VAR_19->base + VAR_6);

 FUNC_2(VAR_22);


 VAR_20 = VAR_16 + FUNC_6(VAR_8);


 do {
  VAR_23 = FUNC_9(VAR_19->base + VAR_7);
  if (!!(VAR_23 & VAR_11) == (VAR_18 == 129)) {
   FUNC_8(VAR_17);
   return 0;
  }


  FUNC_11(5000, 10000);
 } while (FUNC_10(VAR_16, VAR_20));

 FUNC_8(VAR_17);

 FUNC_5(VAR_17, "Timeout waiting for role-switch\n");
 return -VAR_10;
}
