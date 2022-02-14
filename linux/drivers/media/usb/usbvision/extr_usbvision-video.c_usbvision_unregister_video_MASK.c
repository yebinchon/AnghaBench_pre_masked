
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_usbvision {int vdev; int rdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct usb_usbvision *VAR_1)
{

 if (FUNC_2(&VAR_1->rdev)) {
  FUNC_0(VAR_0, "unregister %s [v4l2]",
         FUNC_1(&VAR_1->rdev));
  FUNC_3(&VAR_1->rdev);
 }


 if (FUNC_2(&VAR_1->vdev)) {
  FUNC_0(VAR_0, "unregister %s [v4l2]",
         FUNC_1(&VAR_1->vdev));
  FUNC_3(&VAR_1->vdev);
 }
}
