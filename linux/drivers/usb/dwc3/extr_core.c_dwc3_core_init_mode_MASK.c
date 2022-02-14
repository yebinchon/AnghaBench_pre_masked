
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dwc3 {int dr_mode; int drd_work; int usb3_generic_phy; int usb2_generic_phy; TYPE_1__* usb2_phy; struct device* dev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int otg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;



 int VAR_6 ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (struct dwc3*) ;
 int FUNC_3 (struct dwc3*) ;
 int FUNC_4 (struct dwc3*) ;
 int FUNC_5 (struct dwc3*,int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static int FUNC_8(struct dwc3 *VAR_7)
{
 struct device *VAR_8 = VAR_7->dev;
 int VAR_9;

 switch (VAR_7->dr_mode) {
 case 128:
  FUNC_5(VAR_7, VAR_0);

  if (VAR_7->usb2_phy)
   FUNC_6(VAR_7->usb2_phy->otg, 0);
  FUNC_7(VAR_7->usb2_generic_phy, VAR_4);
  FUNC_7(VAR_7->usb3_generic_phy, VAR_4);

  VAR_9 = FUNC_3(VAR_7);
  if (VAR_9) {
   if (VAR_9 != -VAR_3)
    FUNC_1(VAR_8, "failed to initialize gadget\n");
   return VAR_9;
  }
  break;
 case 130:
  FUNC_5(VAR_7, VAR_1);

  if (VAR_7->usb2_phy)
   FUNC_6(VAR_7->usb2_phy->otg, 1);
  FUNC_7(VAR_7->usb2_generic_phy, VAR_5);
  FUNC_7(VAR_7->usb3_generic_phy, VAR_5);

  VAR_9 = FUNC_4(VAR_7);
  if (VAR_9) {
   if (VAR_9 != -VAR_3)
    FUNC_1(VAR_8, "failed to initialize host\n");
   return VAR_9;
  }
  break;
 case 129:
  FUNC_0(&VAR_7->drd_work, VAR_6);
  VAR_9 = FUNC_2(VAR_7);
  if (VAR_9) {
   if (VAR_9 != -VAR_3)
    FUNC_1(VAR_8, "failed to initialize dual-role\n");
   return VAR_9;
  }
  break;
 default:
  FUNC_1(VAR_8, "Unsupported mode of operation %d\n", VAR_7->dr_mode);
  return -VAR_2;
 }

 return 0;
}
