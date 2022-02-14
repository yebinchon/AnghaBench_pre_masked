
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int dummy; } ;
struct urb {int status; int * hcpriv; } ;
struct dwc2_hsotg {int lock; int dev; } ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct usb_hcd*,struct urb*,char*) ;
 struct dwc2_hsotg* FUNC_2 (struct usb_hcd*) ;
 int FUNC_3 (struct dwc2_hsotg*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (struct usb_hcd*,struct urb*,int) ;
 int FUNC_10 (struct usb_hcd*,struct urb*,int) ;
 int FUNC_11 (struct usb_hcd*,struct urb*) ;

__attribute__((used)) static int FUNC_12(struct usb_hcd *VAR_0, struct urb *VAR_1,
     int VAR_2)
{
 struct dwc2_hsotg *VAR_3 = FUNC_2(VAR_0);
 int VAR_4;
 unsigned long VAR_5;

 FUNC_0(VAR_3->dev, "DWC OTG HCD URB Dequeue\n");
 FUNC_1(VAR_0, VAR_1, "urb_dequeue");

 FUNC_6(&VAR_3->lock, VAR_5);

 VAR_4 = FUNC_9(VAR_0, VAR_1, VAR_2);
 if (VAR_4)
  goto out;

 if (!VAR_1->hcpriv) {
  FUNC_0(VAR_3->dev, "## urb->hcpriv is NULL ##\n");
  goto out;
 }

 VAR_4 = FUNC_3(VAR_3, VAR_1->hcpriv);

 FUNC_11(VAR_0, VAR_1);

 FUNC_4(VAR_1->hcpriv);
 VAR_1->hcpriv = ((void*)0);


 FUNC_7(&VAR_3->lock);
 FUNC_10(VAR_0, VAR_1, VAR_2);
 FUNC_5(&VAR_3->lock);

 FUNC_0(VAR_3->dev, "Called usb_hcd_giveback_urb()\n");
 FUNC_0(VAR_3->dev, "  urb->status = %d\n", VAR_1->status);
out:
 FUNC_8(&VAR_3->lock, VAR_5);

 return VAR_4;
}
