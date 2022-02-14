
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct kaweth_device {int device_lock; int status; } ;
typedef int pm_message_t ;


 int VAR_0 ;
 int FUNC_0 (struct kaweth_device*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct kaweth_device* FUNC_3 (struct usb_interface*) ;

__attribute__((used)) static int FUNC_4(struct usb_interface *VAR_1, pm_message_t VAR_2)
{
 struct kaweth_device *VAR_3 = FUNC_3(VAR_1);
 unsigned long VAR_4;

 FUNC_1(&VAR_3->device_lock, VAR_4);
 VAR_3->status |= VAR_0;
 FUNC_2(&VAR_3->device_lock, VAR_4);

 FUNC_0(VAR_3);
 return 0;
}
