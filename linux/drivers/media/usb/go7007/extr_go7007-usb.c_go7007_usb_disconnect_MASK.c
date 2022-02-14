
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct go7007 {int v4l2_dev; int queue_lock; int serialize_lock; int vdev; int status; scalar_t__ audio_enabled; } ;


 int VAR_0 ;
 int FUNC_0 (struct go7007*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct go7007* FUNC_3 (int ) ;
 int FUNC_4 (struct usb_interface*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct usb_interface *VAR_1)
{
 struct go7007 *VAR_2 = FUNC_3(FUNC_4(VAR_1));

 FUNC_1(&VAR_2->queue_lock);
 FUNC_1(&VAR_2->serialize_lock);

 if (VAR_2->audio_enabled)
  FUNC_0(VAR_2);

 VAR_2->status = VAR_0;
 FUNC_5(&VAR_2->v4l2_dev);
 FUNC_7(&VAR_2->vdev);
 FUNC_2(&VAR_2->serialize_lock);
 FUNC_2(&VAR_2->queue_lock);

 FUNC_6(&VAR_2->v4l2_dev);
}
