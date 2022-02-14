
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usb_request {int status; int actual; struct usb_cdc_line_coding* buf; } ;
struct usb_ep {struct f_acm* driver_data; } ;
struct usb_composite_dev {TYPE_4__* gadget; } ;
struct usb_cdc_line_coding {int dummy; } ;
struct TYPE_6__ {TYPE_1__* config; } ;
struct TYPE_7__ {TYPE_2__ func; } ;
struct f_acm {struct usb_cdc_line_coding port_line_coding; int port_num; TYPE_3__ port; } ;
struct TYPE_8__ {int dev; } ;
struct TYPE_5__ {struct usb_composite_dev* cdev; } ;


 int FUNC_0 (int *,char*,int ,int) ;
 int FUNC_1 (struct usb_ep*) ;

__attribute__((used)) static void FUNC_2(struct usb_ep *VAR_0,
  struct usb_request *VAR_1)
{
 struct f_acm *VAR_2 = VAR_0->driver_data;
 struct usb_composite_dev *VAR_3 = VAR_2->port.func.config->cdev;

 if (VAR_1->status != 0) {
  FUNC_0(&VAR_3->gadget->dev, "acm ttyGS%d completion, err %d\n",
   VAR_2->port_num, VAR_1->status);
  return;
 }


 if (VAR_1->actual != sizeof(VAR_2->port_line_coding)) {
  FUNC_0(&VAR_3->gadget->dev, "acm ttyGS%d short resp, len %d\n",
   VAR_2->port_num, VAR_1->actual);
  FUNC_1(VAR_0);
 } else {
  struct usb_cdc_line_coding *VAR_4 = VAR_1->buf;
  VAR_2->port_line_coding = *VAR_4;
 }
}
