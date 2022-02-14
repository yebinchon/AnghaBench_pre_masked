
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct usb_function {TYPE_1__* config; } ;
struct usb_composite_dev {TYPE_4__* gadget; } ;
struct TYPE_7__ {TYPE_5__* in; TYPE_5__* out; } ;
struct f_obex {unsigned int ctrl_id; unsigned int data_id; unsigned int cur_alt; int port_num; TYPE_2__ port; } ;
struct TYPE_9__ {int * desc; scalar_t__ enabled; } ;
struct TYPE_8__ {int dev; } ;
struct TYPE_6__ {struct usb_composite_dev* cdev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_4__*,struct usb_function*,TYPE_5__*) ;
 int FUNC_1 (int *,char*,int ) ;
 struct f_obex* FUNC_2 (struct usb_function*) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_5(struct usb_function *VAR_1, unsigned VAR_2, unsigned VAR_3)
{
 struct f_obex *VAR_4 = FUNC_2(VAR_1);
 struct usb_composite_dev *VAR_5 = VAR_1->config->cdev;

 if (VAR_2 == VAR_4->ctrl_id) {
  if (VAR_3 != 0)
   goto fail;

  FUNC_1(&VAR_5->gadget->dev,
   "reset obex ttyGS%d control\n", VAR_4->port_num);

 } else if (VAR_2 == VAR_4->data_id) {
  if (VAR_3 > 1)
   goto fail;

  if (VAR_4->port.in->enabled) {
   FUNC_1(&VAR_5->gadget->dev,
    "reset obex ttyGS%d\n", VAR_4->port_num);
   FUNC_4(&VAR_4->port);
  }

  if (!VAR_4->port.in->desc || !VAR_4->port.out->desc) {
   FUNC_1(&VAR_5->gadget->dev,
    "init obex ttyGS%d\n", VAR_4->port_num);
   if (FUNC_0(VAR_5->gadget, VAR_1,
            VAR_4->port.in) ||
       FUNC_0(VAR_5->gadget, VAR_1,
            VAR_4->port.out)) {
    VAR_4->port.out->desc = ((void*)0);
    VAR_4->port.in->desc = ((void*)0);
    goto fail;
   }
  }

  if (VAR_3 == 1) {
   FUNC_1(&VAR_5->gadget->dev,
    "activate obex ttyGS%d\n", VAR_4->port_num);
   FUNC_3(&VAR_4->port, VAR_4->port_num);
  }

 } else
  goto fail;

 VAR_4->cur_alt = VAR_3;

 return 0;

fail:
 return -VAR_0;
}
