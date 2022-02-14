
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wusbhc {int dummy; } ;
struct whc {int dummy; } ;
struct usb_hcd {int dummy; } ;
struct urb {int pipe; } ;


 int VAR_0 ;




 int FUNC_0 (struct whc*,struct urb*,int) ;
 int FUNC_1 (struct whc*,struct urb*,int) ;
 struct wusbhc* FUNC_2 (struct usb_hcd*) ;
 int FUNC_3 (int ) ;
 struct whc* FUNC_4 (struct wusbhc*) ;

__attribute__((used)) static int FUNC_5(struct usb_hcd *VAR_1, struct urb *VAR_2, int VAR_3)
{
 struct wusbhc *VAR_4 = FUNC_2(VAR_1);
 struct whc *VAR_5 = FUNC_4(VAR_4);
 int VAR_6;

 switch (FUNC_3(VAR_2->pipe)) {
 case 129:
  VAR_6 = FUNC_1(VAR_5, VAR_2, VAR_3);
  break;
 case 128:
  VAR_6 = -VAR_0;
  break;
 case 130:
 case 131:
 default:
  VAR_6 = FUNC_0(VAR_5, VAR_2, VAR_3);
  break;
 }

 return VAR_6;
}
