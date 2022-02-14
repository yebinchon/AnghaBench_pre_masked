
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usb_ctrlrequest {int wIndex; int wValue; } ;
struct dwc3_ep {int flags; } ;
struct dwc3 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (struct dwc3_ep*,int,int) ;
 struct dwc3_ep* FUNC_1 (struct dwc3*,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct dwc3 *VAR_2,
  struct usb_ctrlrequest *VAR_3, int VAR_4)
{
 struct dwc3_ep *VAR_5;
 u32 VAR_6;
 int VAR_7;

 VAR_6 = FUNC_2(VAR_3->wValue);

 switch (VAR_6) {
 case 128:
  VAR_5 = FUNC_1(VAR_2, VAR_3->wIndex);
  if (!VAR_5)
   return -VAR_1;

  if (VAR_4 == 0 && (VAR_5->flags & VAR_0))
   break;

  VAR_7 = FUNC_0(VAR_5, VAR_4, 1);
  if (VAR_7)
   return -VAR_1;
  break;
 default:
  return -VAR_1;
 }

 return 0;
}
