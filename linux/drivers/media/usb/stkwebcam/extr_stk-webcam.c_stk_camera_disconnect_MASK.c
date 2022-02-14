
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct stk_camera {int v4l2_dev; int hdl; int vdev; int wait_frame; } ;


 int FUNC_0 (struct stk_camera*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct stk_camera*) ;
 struct stk_camera* FUNC_3 (struct usb_interface*) ;
 int FUNC_4 (struct usb_interface*,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct usb_interface *VAR_0)
{
 struct stk_camera *VAR_1 = FUNC_3(VAR_0);

 FUNC_4(VAR_0, ((void*)0));
 FUNC_2(VAR_1);

 FUNC_9(&VAR_1->wait_frame);

 FUNC_1("Syntek USB2.0 Camera release resources device %s\n",
  FUNC_7(&VAR_1->vdev));

 FUNC_8(&VAR_1->vdev);
 FUNC_5(&VAR_1->hdl);
 FUNC_6(&VAR_1->v4l2_dev);
 FUNC_0(VAR_1);
}
