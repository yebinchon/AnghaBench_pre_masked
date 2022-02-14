
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hwparams0; } ;
struct dwc3 {scalar_t__ dr_mode; int revision; TYPE_1__ hwparams; struct device* dev; } ;
struct device {int dummy; } ;
typedef enum usb_dr_mode { ____Placeholder_usb_dr_mode } usb_dr_mode ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int ) ;


 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,char*,char*) ;

__attribute__((used)) static int FUNC_4(struct dwc3 *VAR_8)
{
 enum usb_dr_mode VAR_9;
 struct device *VAR_10 = VAR_8->dev;
 unsigned int VAR_11;

 if (VAR_8->dr_mode == VAR_7)
  VAR_8->dr_mode = VAR_5;

 VAR_9 = VAR_8->dr_mode;
 VAR_11 = FUNC_0(VAR_8->hwparams.hwparams0);

 switch (VAR_11) {
 case 129:
  if (FUNC_1(VAR_1)) {
   FUNC_2(VAR_10,
    "Controller does not support host mode.\n");
   return -VAR_3;
  }
  VAR_9 = VAR_6;
  break;
 case 128:
  if (FUNC_1(VAR_0)) {
   FUNC_2(VAR_10,
    "Controller does not support device mode.\n");
   return -VAR_3;
  }
  VAR_9 = VAR_4;
  break;
 default:
  if (FUNC_1(VAR_1))
   VAR_9 = VAR_4;
  else if (FUNC_1(VAR_0))
   VAR_9 = VAR_6;






  if (VAR_9 == VAR_5 &&
      VAR_8->revision >= VAR_2)
   VAR_9 = VAR_6;
 }

 if (VAR_9 != VAR_8->dr_mode) {
  FUNC_3(VAR_10,
    "Configuration mismatch. dr_mode forced to %s\n",
    VAR_9 == VAR_4 ? "host" : "gadget");

  VAR_8->dr_mode = VAR_9;
 }

 return 0;
}
