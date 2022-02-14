
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_function {int dummy; } ;
struct usb_configuration {int dummy; } ;
struct f_acm {scalar_t__ notify_req; int notify; } ;
struct TYPE_2__ {scalar_t__ id; } ;


 TYPE_1__* VAR_0 ;
 struct f_acm* FUNC_0 (struct usb_function*) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (struct usb_function*) ;

__attribute__((used)) static void FUNC_3(struct usb_configuration *VAR_1, struct usb_function *VAR_2)
{
 struct f_acm *VAR_3 = FUNC_0(VAR_2);

 VAR_0[0].id = 0;
 FUNC_2(VAR_2);
 if (VAR_3->notify_req)
  FUNC_1(VAR_3->notify, VAR_3->notify_req);
}
