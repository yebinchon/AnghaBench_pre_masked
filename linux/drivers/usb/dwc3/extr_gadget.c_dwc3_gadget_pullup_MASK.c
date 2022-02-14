
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_gadget {int dummy; } ;
struct dwc3 {scalar_t__ ep0state; int lock; int dev; int ep0_in_setup; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct dwc3*,int,int) ;
 struct dwc3* FUNC_2 (struct usb_gadget*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static int FUNC_8(struct usb_gadget *VAR_3, int VAR_4)
{
 struct dwc3 *VAR_5 = FUNC_2(VAR_3);
 unsigned long VAR_6;
 int VAR_7;

 VAR_4 = !!VAR_4;





 if (!VAR_4 && VAR_5->ep0state != VAR_1) {
  FUNC_4(&VAR_5->ep0_in_setup);

  VAR_7 = FUNC_7(&VAR_5->ep0_in_setup,
    FUNC_3(VAR_0));
  if (VAR_7 == 0) {
   FUNC_0(VAR_5->dev, "timed out waiting for SETUP phase\n");
   return -VAR_2;
  }
 }

 FUNC_5(&VAR_5->lock, VAR_6);
 VAR_7 = FUNC_1(VAR_5, VAR_4, 0);
 FUNC_6(&VAR_5->lock, VAR_6);

 return VAR_7;
}
