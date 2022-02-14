
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc2_hsotg {scalar_t__ dr_mode; int dev; } ;
typedef enum usb_dr_mode { ____Placeholder_usb_dr_mode } usb_dr_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,char*) ;
 scalar_t__ FUNC_3 (struct dwc2_hsotg*) ;
 scalar_t__ FUNC_4 (struct dwc2_hsotg*) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct dwc2_hsotg *VAR_7)
{
 enum usb_dr_mode VAR_8;

 VAR_7->dr_mode = FUNC_5(VAR_7->dev);
 if (VAR_7->dr_mode == VAR_6)
  VAR_7->dr_mode = VAR_4;

 VAR_8 = VAR_7->dr_mode;

 if (FUNC_3(VAR_7)) {
  if (FUNC_0(VAR_0)) {
   FUNC_1(VAR_7->dev,
    "Controller does not support host mode.\n");
   return -VAR_2;
  }
  VAR_8 = VAR_5;
 } else if (FUNC_4(VAR_7)) {
  if (FUNC_0(VAR_1)) {
   FUNC_1(VAR_7->dev,
    "Controller does not support device mode.\n");
   return -VAR_2;
  }
  VAR_8 = VAR_3;
 } else {
  if (FUNC_0(VAR_0))
   VAR_8 = VAR_3;
  else if (FUNC_0(VAR_1))
   VAR_8 = VAR_5;
 }

 if (VAR_8 != VAR_7->dr_mode) {
  FUNC_2(VAR_7->dev,
    "Configuration mismatch. dr_mode forced to %s\n",
   VAR_8 == VAR_3 ? "host" : "device");

  VAR_7->dr_mode = VAR_8;
 }

 return 0;
}
