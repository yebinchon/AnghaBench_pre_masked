
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_host_endpoint {struct isp1760_qh* hcpriv; } ;
struct usb_hcd {int dummy; } ;
struct isp1760_qh {scalar_t__ tt_buffer_dirty; } ;
struct isp1760_hcd {int lock; } ;


 struct isp1760_hcd* FUNC_0 (struct usb_hcd*) ;
 int FUNC_1 (struct usb_hcd*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct usb_hcd *VAR_0,
      struct usb_host_endpoint *VAR_1)
{
 struct isp1760_hcd *VAR_2 = FUNC_0(VAR_0);
 struct isp1760_qh *VAR_3 = VAR_1->hcpriv;
 unsigned long VAR_4;

 if (!VAR_3)
  return;

 FUNC_2(&VAR_2->lock, VAR_4);
 VAR_3->tt_buffer_dirty = 0;
 FUNC_1(VAR_0);
 FUNC_3(&VAR_2->lock, VAR_4);
}
