
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct xhci_hcd {int dummy; } ;
struct TYPE_2__ {int bEndpointAddress; } ;
struct usb_host_endpoint {TYPE_1__ desc; int ss_ep_comp; } ;
struct usb_device {int slot_id; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (struct xhci_hcd*,struct usb_device*,struct usb_host_endpoint*,int ) ;
 int FUNC_2 (struct xhci_hcd*,char*,int ,unsigned int) ;
 unsigned int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(struct xhci_hcd *VAR_1,
  struct usb_device *VAR_2,
  struct usb_host_endpoint **VAR_3, unsigned int VAR_4,
  unsigned int *VAR_5, u32 *VAR_6)
{
 unsigned int VAR_7;
 unsigned int VAR_8;
 int VAR_9;
 int VAR_10;

 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  VAR_10 = FUNC_1(VAR_1, VAR_2,
    VAR_3[VAR_9], VAR_2->slot_id);
  if (VAR_10 < 0)
   return VAR_10;

  VAR_7 = FUNC_0(&VAR_3[VAR_9]->ss_ep_comp);
  if (VAR_7 < (*VAR_5 - 1)) {
   FUNC_2(VAR_1, "Ep 0x%x only supports %u stream IDs.\n",
     VAR_3[VAR_9]->desc.bEndpointAddress,
     VAR_7);
   *VAR_5 = VAR_7+1;
  }

  VAR_8 = FUNC_3(&VAR_3[VAR_9]->desc);
  if (*VAR_6 & VAR_8)
   return -VAR_0;
  *VAR_6 |= VAR_8;
 }
 return 0;
}
