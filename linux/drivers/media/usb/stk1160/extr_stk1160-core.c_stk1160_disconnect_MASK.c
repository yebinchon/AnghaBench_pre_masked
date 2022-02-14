
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct stk1160 {int v4l2_dev; int vb_queue_lock; int v4l_lock; int * udev; int vdev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct stk1160*) ;
 int FUNC_3 (struct stk1160*) ;
 struct stk1160* FUNC_4 (struct usb_interface*) ;
 int FUNC_5 (struct usb_interface*,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct usb_interface *VAR_0)
{
 struct stk1160 *VAR_1;

 VAR_1 = FUNC_4(VAR_0);
 FUNC_5(VAR_0, ((void*)0));





 FUNC_0(&VAR_1->vb_queue_lock);
 FUNC_0(&VAR_1->v4l_lock);


 FUNC_3(VAR_1);

 FUNC_2(VAR_1);

 FUNC_8(&VAR_1->vdev);
 FUNC_6(&VAR_1->v4l2_dev);


 VAR_1->udev = ((void*)0);

 FUNC_1(&VAR_1->v4l_lock);
 FUNC_1(&VAR_1->vb_queue_lock);





 FUNC_7(&VAR_1->v4l2_dev);
}
