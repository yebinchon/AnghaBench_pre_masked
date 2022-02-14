
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ep {int dummy; } ;
struct usb_endpoint_descriptor {scalar_t__ bDescriptorType; int wMaxPacketSize; } ;
struct dwc3_ep {int flags; int name; struct dwc3* dwc; } ;
struct dwc3 {int lock; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct dwc3_ep*,int ) ;
 scalar_t__ FUNC_1 (int ,int,char*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct dwc3_ep* FUNC_5 (struct usb_ep*) ;

__attribute__((used)) static int FUNC_6(struct usb_ep *VAR_4,
  const struct usb_endpoint_descriptor *VAR_5)
{
 struct dwc3_ep *VAR_6;
 struct dwc3 *VAR_7;
 unsigned long VAR_8;
 int VAR_9;

 if (!VAR_4 || !VAR_5 || VAR_5->bDescriptorType != VAR_3) {
  FUNC_2("dwc3: invalid parameters\n");
  return -VAR_2;
 }

 if (!VAR_5->wMaxPacketSize) {
  FUNC_2("dwc3: missing wMaxPacketSize\n");
  return -VAR_2;
 }

 VAR_6 = FUNC_5(VAR_4);
 VAR_7 = VAR_6->dwc;

 if (FUNC_1(VAR_7->dev, VAR_6->flags & VAR_1,
     "%s is already enabled\n",
     VAR_6->name))
  return 0;

 FUNC_3(&VAR_7->lock, VAR_8);
 VAR_9 = FUNC_0(VAR_6, VAR_0);
 FUNC_4(&VAR_7->lock, VAR_8);

 return VAR_9;
}
