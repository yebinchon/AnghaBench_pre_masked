
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct usb_function {TYPE_1__* config; } ;
struct usb_ctrlrequest {int bRequest; int bRequestType; int wLength; int wValue; } ;
struct usb_composite_dev {TYPE_4__* req; TYPE_3__* gadget; } ;
struct f_uas {TYPE_2__* tpg; } ;
struct TYPE_8__ {int* buf; int length; } ;
struct TYPE_7__ {int ep0; } ;
struct TYPE_6__ {int tpg_port_count; } ;
struct TYPE_5__ {struct usb_composite_dev* cdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct f_uas*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 struct f_uas* FUNC_5 (struct usb_function*) ;
 int FUNC_6 (int ,TYPE_4__*,int ) ;

__attribute__((used)) static int FUNC_7(struct usb_function *VAR_6,
  const struct usb_ctrlrequest *VAR_7)
{
 struct f_uas *VAR_8 = FUNC_5(VAR_6);
 struct usb_composite_dev *VAR_9 = VAR_6->config->cdev;
 u16 VAR_10 = FUNC_2(VAR_7->wValue);
 u16 VAR_11 = FUNC_2(VAR_7->wLength);
 int VAR_12;
 u8 *VAR_13;

 switch (VAR_7->bRequest) {
 case 129:
  if (VAR_7->bRequestType != (VAR_3 | VAR_5 |
     VAR_4))
   return -VAR_1;

  if (VAR_11 < 1)
   return -VAR_0;
  if (VAR_10 != 0)
   return -VAR_0;
  VAR_12 = FUNC_0(&VAR_8->tpg->tpg_port_count);
  if (!VAR_12) {
   FUNC_3("No LUNs configured?\n");
   return -VAR_0;
  }




  VAR_12--;
  if (VAR_12 > 0xf) {
   FUNC_4("Limiting the number of luns to 16\n");
   VAR_12 = 0xf;
  }
  VAR_13 = VAR_9->req->buf;
  *VAR_13 = VAR_12;
  VAR_9->req->length = 1;
  return FUNC_6(VAR_9->gadget->ep0, VAR_9->req, VAR_2);

 case 128:

  FUNC_1(VAR_8);
  return 0;
 }
 return -VAR_1;
}
