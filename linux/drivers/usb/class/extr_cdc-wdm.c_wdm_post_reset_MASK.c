
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wdm_device {int rlock; int wlock; int flags; } ;
struct usb_interface {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct wdm_device*) ;
 struct wdm_device* FUNC_3 (struct usb_interface*) ;

__attribute__((used)) static int FUNC_4(struct usb_interface *VAR_2)
{
 struct wdm_device *VAR_3 = FUNC_3(VAR_2);
 int VAR_4;

 FUNC_0(VAR_0, &VAR_3->flags);
 FUNC_0(VAR_1, &VAR_3->flags);
 VAR_4 = FUNC_2(VAR_3);
 FUNC_1(&VAR_3->wlock);
 FUNC_1(&VAR_3->rlock);
 return VAR_4;
}
