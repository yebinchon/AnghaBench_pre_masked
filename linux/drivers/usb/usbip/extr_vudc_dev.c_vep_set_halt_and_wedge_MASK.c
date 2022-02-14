
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vudc {int lock; int driver; } ;
struct vep {int halted; int wedged; int req_queue; TYPE_1__* desc; } ;
struct usb_ep {int dummy; } ;
struct TYPE_2__ {int bEndpointAddress; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct vudc* FUNC_0 (struct vep*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct vep* FUNC_4 (struct usb_ep*) ;

__attribute__((used)) static int
FUNC_5(struct usb_ep *VAR_4, int VAR_5, int VAR_6)
{
 struct vep *VAR_7;
 struct vudc *VAR_8;
 unsigned long VAR_9;
 int VAR_10 = 0;

 VAR_7 = FUNC_4(VAR_4);
 if (!VAR_4)
  return -VAR_1;

 VAR_8 = FUNC_0(VAR_7);
 if (!VAR_8->driver)
  return -VAR_2;

 FUNC_2(&VAR_8->lock, VAR_9);
 if (!VAR_5)
  VAR_7->halted = VAR_7->wedged = 0;
 else if (VAR_7->desc && (VAR_7->desc->bEndpointAddress & VAR_3) &&
   !FUNC_1(&VAR_7->req_queue))
  VAR_10 = -VAR_0;
 else {
  VAR_7->halted = 1;
  if (VAR_6)
   VAR_7->wedged = 1;
 }

 FUNC_3(&VAR_8->lock, VAR_9);
 return VAR_10;
}
