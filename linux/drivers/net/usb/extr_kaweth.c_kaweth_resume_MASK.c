
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct kaweth_device {int opened; int device_lock; int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kaweth_device*,int ) ;
 int FUNC_1 (struct kaweth_device*,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct kaweth_device* FUNC_4 (struct usb_interface*) ;

__attribute__((used)) static int FUNC_5(struct usb_interface *VAR_2)
{
 struct kaweth_device *VAR_3 = FUNC_4(VAR_2);
 unsigned long VAR_4;

 FUNC_2(&VAR_3->device_lock, VAR_4);
 VAR_3->status &= ~VAR_1;
 FUNC_3(&VAR_3->device_lock, VAR_4);

 if (!VAR_3->opened)
  return 0;
 FUNC_1(VAR_3, VAR_0);
 FUNC_0(VAR_3, VAR_0);

 return 0;
}
