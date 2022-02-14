
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xhci_virt_device {int real_port; } ;
struct TYPE_2__ {int num_ports; } ;
struct xhci_hcd {TYPE_1__ usb3_rhub; struct xhci_virt_device** devs; } ;
struct usb_host_endpoint {int desc; } ;
struct usb_device {size_t slot_id; scalar_t__ speed; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct xhci_hcd *VAR_1, struct usb_device *VAR_2,
 struct usb_host_endpoint *VAR_3)
{
 struct xhci_virt_device *VAR_4;
 int VAR_5;

 VAR_4 = VAR_1->devs[VAR_2->slot_id];

 if (VAR_2->speed >= VAR_0) {
  if (FUNC_0(&VAR_3->desc))
   VAR_5 = (VAR_4->real_port - 1) * 2;
  else
   VAR_5 = (VAR_4->real_port - 1) * 2 + 1;
 } else {

  VAR_5 = VAR_4->real_port + VAR_1->usb3_rhub.num_ports - 1;
 }

 return VAR_5;
}
