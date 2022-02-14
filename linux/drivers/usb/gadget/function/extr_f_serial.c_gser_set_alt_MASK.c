
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
struct TYPE_7__ {TYPE_5__* out; TYPE_5__* in; } ;
struct f_gser {int port_num; TYPE_2__ port; } ;
struct TYPE_9__ {int * desc; scalar_t__ enabled; } ;
struct TYPE_8__ {int dev; } ;
struct TYPE_6__ {struct usb_composite_dev* cdev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_4__*,struct usb_function*,TYPE_5__*) ;
 int FUNC_1 (int *,char*,int ) ;
 struct f_gser* FUNC_2 (struct usb_function*) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_5(struct usb_function *VAR_1, unsigned VAR_2, unsigned VAR_3)
{
 struct f_gser *VAR_4 = FUNC_2(VAR_1);
 struct usb_composite_dev *VAR_5 = VAR_1->config->cdev;



 if (VAR_4->port.in->enabled) {
  FUNC_1(&VAR_5->gadget->dev,
   "reset generic ttyGS%d\n", VAR_4->port_num);
  FUNC_4(&VAR_4->port);
 }
 if (!VAR_4->port.in->desc || !VAR_4->port.out->desc) {
  FUNC_1(&VAR_5->gadget->dev,
   "activate generic ttyGS%d\n", VAR_4->port_num);
  if (FUNC_0(VAR_5->gadget, VAR_1, VAR_4->port.in) ||
      FUNC_0(VAR_5->gadget, VAR_1, VAR_4->port.out)) {
   VAR_4->port.in->desc = ((void*)0);
   VAR_4->port.out->desc = ((void*)0);
   return -VAR_0;
  }
 }
 FUNC_3(&VAR_4->port, VAR_4->port_num);
 return 0;
}
