
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ep {int dummy; } ;
struct dwc3_ep {int flags; int name; struct dwc3* dwc; } ;
struct dwc3 {int lock; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dwc3_ep*) ;
 scalar_t__ FUNC_1 (int ,int,char*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct dwc3_ep* FUNC_5 (struct usb_ep*) ;

__attribute__((used)) static int FUNC_6(struct usb_ep *VAR_2)
{
 struct dwc3_ep *VAR_3;
 struct dwc3 *VAR_4;
 unsigned long VAR_5;
 int VAR_6;

 if (!VAR_2) {
  FUNC_2("dwc3: invalid parameters\n");
  return -VAR_1;
 }

 VAR_3 = FUNC_5(VAR_2);
 VAR_4 = VAR_3->dwc;

 if (FUNC_1(VAR_4->dev, !(VAR_3->flags & VAR_0),
     "%s is already disabled\n",
     VAR_3->name))
  return 0;

 FUNC_3(&VAR_4->lock, VAR_5);
 VAR_6 = FUNC_0(VAR_3);
 FUNC_4(&VAR_4->lock, VAR_5);

 return VAR_6;
}
