
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usb_hcd {int flags; int state; } ;
struct usb_bus {scalar_t__ root_hub; } ;
struct dwc2_hsotg {int lock; int dev; int lx_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct dwc2_hsotg*) ;
 struct dwc2_hsotg* FUNC_2 (struct usb_hcd*) ;
 scalar_t__ FUNC_3 (struct dwc2_hsotg*) ;
 int FUNC_4 (struct dwc2_hsotg*) ;
 int FUNC_5 (struct dwc2_hsotg*) ;
 struct usb_bus* FUNC_6 (struct usb_hcd*) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_11(struct usb_hcd *VAR_4)
{
 struct dwc2_hsotg *VAR_5 = FUNC_2(VAR_4);
 struct usb_bus *VAR_6 = FUNC_6(VAR_4);
 unsigned long VAR_7;
 u32 VAR_8;
 int VAR_9;

 FUNC_0(VAR_5->dev, "DWC OTG HCD START\n");

 FUNC_8(&VAR_5->lock, VAR_7);
 VAR_5->lx_state = VAR_0;
 VAR_4->state = VAR_2;
 FUNC_7(VAR_1, &VAR_4->flags);

 if (FUNC_3(VAR_5)) {
  FUNC_9(&VAR_5->lock, VAR_7);
  return 0;
 }

 FUNC_1(VAR_5);

 VAR_8 = FUNC_4(VAR_5);

 if (VAR_8 & VAR_3) {

  FUNC_9(&VAR_5->lock, VAR_7);
  VAR_9 = FUNC_5(VAR_5);
  if (VAR_9)
   return VAR_9;
  FUNC_8(&VAR_5->lock, VAR_7);
 }


 if (VAR_6->root_hub) {
  FUNC_0(VAR_5->dev, "DWC OTG HCD Has Root Hub\n");

  FUNC_10(VAR_4);
 }

 FUNC_9(&VAR_5->lock, VAR_7);

 return 0;
}
