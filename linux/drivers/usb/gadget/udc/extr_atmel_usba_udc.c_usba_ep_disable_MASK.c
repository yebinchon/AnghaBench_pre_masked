
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ speed; } ;
struct usba_udc {int lock; TYPE_1__ gadget; } ;
struct TYPE_4__ {int * desc; int name; } ;
struct usba_ep {int index; scalar_t__ can_dma; int queue; TYPE_2__ ep; struct usba_udc* udc; } ;
struct usb_ep {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int VAR_8 ;
 int FUNC_2 (int ,int) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_3 (int *,int *) ;
 int VAR_11 ;
 int FUNC_4 (struct usba_ep*,int *,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 struct usba_ep* FUNC_7 (struct usb_ep*) ;
 int FUNC_8 (struct usba_ep*,int ) ;
 int FUNC_9 (struct usba_ep*,int ,int ) ;
 int FUNC_10 (struct usba_ep*,int ,int ) ;
 int FUNC_11 (struct usba_udc*,int ) ;

__attribute__((used)) static int FUNC_12(struct usb_ep *VAR_12)
{
 struct usba_ep *VAR_13 = FUNC_7(VAR_12);
 struct usba_udc *VAR_14 = VAR_13->udc;
 FUNC_1(VAR_11);
 unsigned long VAR_15;

 FUNC_0(VAR_4, "ep_disable: %s\n", VAR_13->ep.name);

 FUNC_5(&VAR_14->lock, VAR_15);

 if (!VAR_13->ep.desc) {
  FUNC_6(&VAR_14->lock, VAR_15);




  if (VAR_14->gadget.speed != VAR_10)
   FUNC_0(VAR_3, "ep_disable: %s not enabled\n",
     VAR_13->ep.name);
  return -VAR_5;
 }
 VAR_13->ep.desc = ((void*)0);

 FUNC_3(&VAR_13->queue, &VAR_11);
 if (VAR_13->can_dma) {
  FUNC_9(VAR_13, VAR_1, 0);
  FUNC_9(VAR_13, VAR_0, 0);
  FUNC_8(VAR_13, VAR_8);
 }
 FUNC_10(VAR_13, VAR_2, VAR_9);
 FUNC_11(VAR_14, FUNC_2(VAR_6, 1 << VAR_13->index));

 FUNC_4(VAR_13, &VAR_11, -VAR_7);

 FUNC_6(&VAR_14->lock, VAR_15);

 return 0;
}
