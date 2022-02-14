
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_wwan_port_private {int out_busy; struct urb** out_urbs; } ;
struct urb {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,int *) ;

__attribute__((used)) static void FUNC_1(struct urb *VAR_1,
     struct usb_wwan_port_private *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_1 == VAR_2->out_urbs[VAR_3]) {
   FUNC_0(VAR_3, &VAR_2->out_busy);
   break;
  }
 }
}
