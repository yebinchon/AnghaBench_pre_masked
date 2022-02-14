
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_function {scalar_t__ os_desc_n; int os_desc_table; } ;
struct usb_configuration {int dummy; } ;
struct f_rndis {TYPE_1__* notify_req; int notify; } ;
struct TYPE_2__ {int buf; } ;


 struct f_rndis* FUNC_0 (struct usb_function*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (struct usb_function*) ;

__attribute__((used)) static void FUNC_4(struct usb_configuration *VAR_0, struct usb_function *VAR_1)
{
 struct f_rndis *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(VAR_1->os_desc_table);
 VAR_1->os_desc_n = 0;
 FUNC_3(VAR_1);

 FUNC_1(VAR_2->notify_req->buf);
 FUNC_2(VAR_2->notify, VAR_2->notify_req);
}
