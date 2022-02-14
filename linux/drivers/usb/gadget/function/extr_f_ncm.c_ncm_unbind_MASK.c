
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_function {scalar_t__ os_desc_n; int os_desc_table; } ;
struct usb_configuration {int cdev; } ;
struct f_ncm {TYPE_1__* notify_req; int notify; int task_timer; } ;
struct TYPE_4__ {scalar_t__ id; } ;
struct TYPE_3__ {int buf; } ;


 int FUNC_0 (int ,char*) ;
 struct f_ncm* FUNC_1 (struct usb_function*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 TYPE_2__* VAR_0 ;
 int FUNC_4 (int ,TYPE_1__*) ;
 int FUNC_5 (struct usb_function*) ;

__attribute__((used)) static void FUNC_6(struct usb_configuration *VAR_1, struct usb_function *VAR_2)
{
 struct f_ncm *VAR_3 = FUNC_1(VAR_2);

 FUNC_0(VAR_1->cdev, "ncm unbind\n");

 FUNC_2(&VAR_3->task_timer);

 FUNC_3(VAR_2->os_desc_table);
 VAR_2->os_desc_n = 0;

 VAR_0[0].id = 0;
 FUNC_5(VAR_2);

 FUNC_3(VAR_3->notify_req->buf);
 FUNC_4(VAR_3->notify, VAR_3->notify_req);
}
