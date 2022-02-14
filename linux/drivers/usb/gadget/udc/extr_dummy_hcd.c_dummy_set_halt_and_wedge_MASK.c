
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_ep {int dummy; } ;
struct dummy_ep {int halted; int wedged; int queue; TYPE_1__* desc; } ;
struct dummy {int driver; } ;
struct TYPE_2__ {int bEndpointAddress; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct dummy* FUNC_0 (struct dummy_ep*) ;
 int FUNC_1 (int *) ;
 struct dummy_ep* FUNC_2 (struct usb_ep*) ;

__attribute__((used)) static int
FUNC_3(struct usb_ep *VAR_4, int VAR_5, int VAR_6)
{
 struct dummy_ep *VAR_7;
 struct dummy *VAR_8;

 if (!VAR_4)
  return -VAR_1;
 VAR_7 = FUNC_2(VAR_4);
 VAR_8 = FUNC_0(VAR_7);
 if (!VAR_8->driver)
  return -VAR_2;
 if (!VAR_5)
  VAR_7->halted = VAR_7->wedged = 0;
 else if (VAR_7->desc && (VAR_7->desc->bEndpointAddress & VAR_3) &&
   !FUNC_1(&VAR_7->queue))
  return -VAR_0;
 else {
  VAR_7->halted = 1;
  if (VAR_6)
   VAR_7->wedged = 1;
 }

 return 0;
}
