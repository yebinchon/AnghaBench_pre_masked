
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct most_dev {struct most_dev* ep_address; struct most_dev* conf; struct most_dev* cap; struct most_dev* busy_urbs; int iface; TYPE_1__* dci; int poll_work_obj; int link_stat_timer; int io_mutex; int * usb_device; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct most_dev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct most_dev* FUNC_7 (struct usb_interface*) ;
 int FUNC_8 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_9(struct usb_interface *VAR_0)
{
 struct most_dev *VAR_1 = FUNC_7(VAR_0);

 FUNC_5(&VAR_1->io_mutex);
 FUNC_8(VAR_0, ((void*)0));
 VAR_1->usb_device = ((void*)0);
 FUNC_6(&VAR_1->io_mutex);

 FUNC_1(&VAR_1->link_stat_timer);
 FUNC_0(&VAR_1->poll_work_obj);

 FUNC_2(&VAR_1->dci->dev);
 FUNC_4(&VAR_1->iface);

 FUNC_3(VAR_1->busy_urbs);
 FUNC_3(VAR_1->cap);
 FUNC_3(VAR_1->conf);
 FUNC_3(VAR_1->ep_address);
 FUNC_3(VAR_1);
}
