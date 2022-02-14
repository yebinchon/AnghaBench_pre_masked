
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vudc {int lock; int driver; } ;
struct vep {scalar_t__ wedged; scalar_t__ halted; int type; struct usb_endpoint_descriptor const* desc; } ;
struct TYPE_2__ {scalar_t__ type_control; } ;
struct usb_ep {unsigned int maxpacket; TYPE_1__ caps; } ;
struct usb_endpoint_descriptor {scalar_t__ bDescriptorType; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct vudc* FUNC_0 (struct vep*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct vep* FUNC_3 (struct usb_ep*) ;
 unsigned int FUNC_4 (struct usb_endpoint_descriptor const*) ;
 int FUNC_5 (struct usb_endpoint_descriptor const*) ;

__attribute__((used)) static int FUNC_6(struct usb_ep *VAR_3,
  const struct usb_endpoint_descriptor *VAR_4)
{
 struct vep *VAR_5;
 struct vudc *VAR_6;
 unsigned int VAR_7;
 unsigned long VAR_8;

 VAR_5 = FUNC_3(VAR_3);
 VAR_6 = FUNC_0(VAR_5);

 if (!VAR_3 || !VAR_4 || VAR_5->desc || VAR_3->caps.type_control
   || VAR_4->bDescriptorType != VAR_2)
  return -VAR_0;

 if (!VAR_6->driver)
  return -VAR_1;

 FUNC_1(&VAR_6->lock, VAR_8);

 VAR_7 = FUNC_4(VAR_4);
 VAR_3->maxpacket = VAR_7;
 VAR_5->desc = VAR_4;
 VAR_5->type = FUNC_5(VAR_4);
 VAR_5->halted = VAR_5->wedged = 0;

 FUNC_2(&VAR_6->lock, VAR_8);

 return 0;
}
