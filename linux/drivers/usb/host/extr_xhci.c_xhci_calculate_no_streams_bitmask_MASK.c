
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct xhci_hcd {TYPE_2__** devs; } ;
struct TYPE_7__ {int bEndpointAddress; } ;
struct usb_host_endpoint {TYPE_3__ desc; } ;
struct usb_device {unsigned int slot_id; } ;
struct TYPE_6__ {TYPE_1__* eps; } ;
struct TYPE_5__ {unsigned int ep_state; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (TYPE_3__*) ;
 unsigned int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (struct xhci_hcd*,char*,...) ;

__attribute__((used)) static u32 FUNC_3(struct xhci_hcd *VAR_3,
  struct usb_device *VAR_4,
  struct usb_host_endpoint **VAR_5, unsigned int VAR_6)
{
 u32 VAR_7 = 0;
 unsigned int VAR_8;
 unsigned int VAR_9;
 unsigned int VAR_10;
 int VAR_11;

 VAR_8 = VAR_4->slot_id;
 if (!VAR_3->devs[VAR_8])
  return 0;

 for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++) {
  VAR_9 = FUNC_1(&VAR_5[VAR_11]->desc);
  VAR_10 = VAR_3->devs[VAR_8]->eps[VAR_9].ep_state;

  if (VAR_10 & VAR_0) {
   FUNC_2(VAR_3, "WARN Can't disable streams for "
     "endpoint 0x%x, "
     "streams are being disabled already\n",
     VAR_5[VAR_11]->desc.bEndpointAddress);
   return 0;
  }

  if (!(VAR_10 & VAR_2) &&
    !(VAR_10 & VAR_1)) {
   FUNC_2(VAR_3, "WARN Can't disable streams for "
     "endpoint 0x%x, "
     "streams are already disabled!\n",
     VAR_5[VAR_11]->desc.bEndpointAddress);
   FUNC_2(VAR_3, "WARN xhci_free_streams() called "
     "with non-streams endpoint\n");
   return 0;
  }
  VAR_7 |= FUNC_0(&VAR_5[VAR_11]->desc);
 }
 return VAR_7;
}
