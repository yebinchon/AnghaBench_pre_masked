
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usb_gadget {int dummy; } ;
struct dwc3 {scalar_t__ revision; int lock; int regs; int dev; int dis_metastability_quirk; } ;
typedef enum usb_device_speed { ____Placeholder_usb_device_speed } usb_device_speed ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;





 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct dwc3*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 struct dwc3* FUNC_4 (struct usb_gadget*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct usb_gadget *VAR_9,
      enum usb_device_speed VAR_10)
{
 struct dwc3 *VAR_11 = FUNC_4(VAR_9);
 unsigned long VAR_12;
 u32 VAR_13;

 FUNC_5(&VAR_11->lock, VAR_12);
 VAR_13 = FUNC_2(VAR_11->regs, VAR_0);
 VAR_13 &= ~(VAR_4);
 if (VAR_11->revision < VAR_7 &&
     !VAR_11->dis_metastability_quirk) {
  VAR_13 |= VAR_5;
 } else {
  switch (VAR_10) {
  case 130:
   VAR_13 |= VAR_3;
   break;
  case 132:
   VAR_13 |= VAR_1;
   break;
  case 131:
   VAR_13 |= VAR_2;
   break;
  case 129:
   VAR_13 |= VAR_5;
   break;
  case 128:
   if (FUNC_1(VAR_11))
    VAR_13 |= VAR_6;
   else
    VAR_13 |= VAR_5;
   break;
  default:
   FUNC_0(VAR_11->dev, "invalid speed (%d)\n", VAR_10);

   if (VAR_11->revision & VAR_8)
    VAR_13 |= VAR_6;
   else
    VAR_13 |= VAR_5;
  }
 }
 FUNC_3(VAR_11->regs, VAR_0, VAR_13);

 FUNC_6(&VAR_11->lock, VAR_12);
}
