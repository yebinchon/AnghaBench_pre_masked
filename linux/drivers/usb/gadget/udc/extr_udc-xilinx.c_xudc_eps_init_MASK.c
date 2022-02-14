
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_4__ {int ep_list; } ;
struct xusb_udc {TYPE_1__ gadget; struct xusb_ep* ep; } ;
struct TYPE_5__ {int type_iso; int type_bulk; int type_int; int type_control; int dir_in; int dir_out; } ;
struct TYPE_6__ {TYPE_2__ caps; int * ops; int name; int ep_list; } ;
struct xusb_ep {size_t epnumber; int queue; scalar_t__ maxpacket; scalar_t__ is_iso; scalar_t__ is_in; scalar_t__ offset; int * desc; struct xusb_udc* udc; TYPE_3__ ep_usb; int name; } ;


 unsigned short VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,int ,char*,size_t) ;
 int FUNC_3 (TYPE_3__*,unsigned short) ;
 int FUNC_4 (struct xusb_ep*,struct xusb_udc*) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_5(struct xusb_udc *VAR_7)
{
 u32 VAR_8;

 FUNC_0(&VAR_7->gadget.ep_list);

 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  struct xusb_ep *VAR_9 = &VAR_7->ep[VAR_8];

  if (VAR_8) {
   FUNC_1(&VAR_9->ep_usb.ep_list,
          &VAR_7->gadget.ep_list);
   FUNC_3(&VAR_9->ep_usb,
        (unsigned short) ~0);
   FUNC_2(VAR_9->name, VAR_1, "ep%d", VAR_8);
   VAR_9->ep_usb.name = VAR_9->name;
   VAR_9->ep_usb.ops = &VAR_6;

   VAR_9->ep_usb.caps.type_iso = 1;
   VAR_9->ep_usb.caps.type_bulk = 1;
   VAR_9->ep_usb.caps.type_int = 1;
  } else {
   VAR_9->ep_usb.name = VAR_4;
   FUNC_3(&VAR_9->ep_usb, VAR_0);
   VAR_9->ep_usb.ops = &VAR_5;

   VAR_9->ep_usb.caps.type_control = 1;
  }

  VAR_9->ep_usb.caps.dir_in = 1;
  VAR_9->ep_usb.caps.dir_out = 1;

  VAR_9->udc = VAR_7;
  VAR_9->epnumber = VAR_8;
  VAR_9->desc = ((void*)0);




  VAR_9->offset = VAR_2 + (VAR_8 * 0x10);
  VAR_9->is_in = 0;
  VAR_9->is_iso = 0;
  VAR_9->maxpacket = 0;
  FUNC_4(VAR_9, VAR_7);


  FUNC_0(&VAR_9->queue);
 }
}
