
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_host_endpoint {struct dwc2_qh* hcpriv; } ;
struct usb_hcd {int dummy; } ;
struct dwc2_qh {scalar_t__ tt_buffer_dirty; } ;
struct TYPE_3__ {scalar_t__ port_connect_status; } ;
struct TYPE_4__ {TYPE_1__ b; } ;
struct dwc2_hsotg {int lock; TYPE_2__ flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct dwc2_hsotg*,int ) ;
 struct dwc2_hsotg* FUNC_1 (struct usb_hcd*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct usb_hcd *VAR_1,
            struct usb_host_endpoint *VAR_2)
{
 struct dwc2_hsotg *VAR_3 = FUNC_1(VAR_1);
 struct dwc2_qh *VAR_4;
 unsigned long VAR_5;

 VAR_4 = VAR_2->hcpriv;
 if (!VAR_4)
  return;

 FUNC_2(&VAR_3->lock, VAR_5);
 VAR_4->tt_buffer_dirty = 0;

 if (VAR_3->flags.b.port_connect_status)
  FUNC_0(VAR_3, VAR_0);

 FUNC_3(&VAR_3->lock, VAR_5);
}
