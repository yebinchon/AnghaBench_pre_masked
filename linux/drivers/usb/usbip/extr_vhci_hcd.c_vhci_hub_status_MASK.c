
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhci_hcd {int* port_status; struct vhci* vhci; } ;
struct vhci {int lock; } ;
struct usb_hcd {scalar_t__ state; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (struct usb_hcd*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct vhci_hcd* FUNC_2 (struct usb_hcd*) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct usb_hcd*) ;
 int FUNC_7 (char*,...) ;

__attribute__((used)) static int FUNC_8(struct usb_hcd *VAR_3, char *VAR_4)
{
 struct vhci_hcd *VAR_5 = FUNC_2(VAR_3);
 struct vhci *VAR_6 = VAR_5->vhci;
 int VAR_7 = FUNC_0(VAR_2 + 1, 8);
 int VAR_8;
 int VAR_9 = 0;
 unsigned long VAR_10;

 FUNC_3(VAR_4, 0, VAR_7);

 FUNC_4(&VAR_6->lock, VAR_10);
 if (!FUNC_1(VAR_3)) {
  FUNC_7("hw accessible flag not on?\n");
  goto done;
 }


 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  if ((VAR_5->port_status[VAR_8] & VAR_1)) {

   FUNC_7("port %d status changed\n", VAR_8);

   VAR_4[(VAR_8 + 1) / 8] |= 1 << (VAR_8 + 1) % 8;
   VAR_9 = 1;
  }
 }

 if ((VAR_3->state == VAR_0) && (VAR_9 == 1))
  FUNC_6(VAR_3);

done:
 FUNC_5(&VAR_6->lock, VAR_10);
 return VAR_9 ? VAR_7 : 0;
}
