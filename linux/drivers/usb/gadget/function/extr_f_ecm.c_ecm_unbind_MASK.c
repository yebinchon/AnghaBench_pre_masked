
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_function {int dummy; } ;
struct usb_configuration {int cdev; } ;
struct f_ecm {TYPE_1__* notify_req; int notify; } ;
struct TYPE_2__ {int buf; } ;


 int FUNC_0 (int ,char*) ;
 struct f_ecm* FUNC_1 (struct usb_function*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (struct usb_function*) ;

__attribute__((used)) static void FUNC_5(struct usb_configuration *VAR_0, struct usb_function *VAR_1)
{
 struct f_ecm *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_0->cdev, "ecm unbind\n");

 FUNC_4(VAR_1);

 FUNC_2(VAR_2->notify_req->buf);
 FUNC_3(VAR_2->notify, VAR_2->notify_req);
}
