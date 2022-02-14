
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_string {int id; } ;
struct usb_composite_dev {int req; TYPE_1__* gadget; } ;
struct fsg_common {int can_stall; TYPE_1__* gadget; struct usb_composite_dev* cdev; int ep0req; int ep0; } ;
struct TYPE_4__ {int iInterface; } ;
struct TYPE_3__ {int ep0; } ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 scalar_t__ FUNC_1 (struct usb_string*) ;
 int FUNC_2 (struct usb_string*) ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 struct usb_string* FUNC_4 (struct usb_composite_dev*,int ,int ) ;

int FUNC_5(struct fsg_common *VAR_4,
    struct usb_composite_dev *VAR_5, bool VAR_6)
{
 struct usb_string *VAR_7;

 VAR_4->gadget = VAR_5->gadget;
 VAR_4->ep0 = VAR_5->gadget->ep0;
 VAR_4->ep0req = VAR_5->req;
 VAR_4->cdev = VAR_5;

 VAR_7 = FUNC_4(VAR_5, VAR_3,
     FUNC_0(VAR_2));
 if (FUNC_1(VAR_7))
  return FUNC_2(VAR_7);

 VAR_1.iInterface = VAR_7[VAR_0].id;






 VAR_4->can_stall = VAR_6 &&
   FUNC_3(VAR_4->gadget);

 return 0;
}
