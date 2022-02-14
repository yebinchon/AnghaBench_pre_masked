
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct usb_function {TYPE_1__* config; } ;
struct usb_composite_dev {TYPE_6__* gadget; } ;
struct TYPE_10__ {TYPE_2__* out; TYPE_2__* in; } ;
struct f_acm {unsigned int ctrl_id; unsigned int data_id; int port_num; TYPE_4__ port; TYPE_2__* notify; } ;
struct TYPE_11__ {int dev; } ;
struct TYPE_9__ {int * desc; scalar_t__ enabled; } ;
struct TYPE_8__ {struct usb_composite_dev* cdev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_6__*,struct usb_function*,TYPE_2__*) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*,unsigned int) ;
 struct f_acm* FUNC_3 (struct usb_function*) ;
 int FUNC_4 (TYPE_4__*,int ) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_8(struct usb_function *VAR_1, unsigned VAR_2, unsigned VAR_3)
{
 struct f_acm *VAR_4 = FUNC_3(VAR_1);
 struct usb_composite_dev *VAR_5 = VAR_1->config->cdev;



 if (VAR_2 == VAR_4->ctrl_id) {
  FUNC_2(&VAR_5->gadget->dev,
    "reset acm control interface %d\n", VAR_2);
  FUNC_6(VAR_4->notify);

  if (!VAR_4->notify->desc)
   if (FUNC_0(VAR_5->gadget, VAR_1, VAR_4->notify))
    return -VAR_0;

  FUNC_7(VAR_4->notify);

 } else if (VAR_2 == VAR_4->data_id) {
  if (VAR_4->notify->enabled) {
   FUNC_1(&VAR_5->gadget->dev,
    "reset acm ttyGS%d\n", VAR_4->port_num);
   FUNC_5(&VAR_4->port);
  }
  if (!VAR_4->port.in->desc || !VAR_4->port.out->desc) {
   FUNC_1(&VAR_5->gadget->dev,
    "activate acm ttyGS%d\n", VAR_4->port_num);
   if (FUNC_0(VAR_5->gadget, VAR_1,
            VAR_4->port.in) ||
       FUNC_0(VAR_5->gadget, VAR_1,
            VAR_4->port.out)) {
    VAR_4->port.in->desc = ((void*)0);
    VAR_4->port.out->desc = ((void*)0);
    return -VAR_0;
   }
  }
  FUNC_4(&VAR_4->port, VAR_4->port_num);

 } else
  return -VAR_0;

 return 0;
}
