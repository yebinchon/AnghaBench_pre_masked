
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct em28xx_v4l2 {int ref; int v4l2_dev; int ctrl_handler; int vdev; int vbi_dev; int radio_dev; } ;
struct em28xx {int ref; int lock; TYPE_1__* intf; int has_video; scalar_t__ is_audio_only; struct em28xx_v4l2* v4l2; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct em28xx*,int ) ;
 int FUNC_2 (struct em28xx*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct em28xx *VAR_3)
{
 struct em28xx_v4l2 *VAR_4 = VAR_3->v4l2;

 if (VAR_3->is_audio_only) {

  return 0;
 }

 if (!VAR_3->has_video) {

  return 0;
 }

 if (!VAR_4)
  return 0;

 FUNC_0(&VAR_3->intf->dev, "Closing video extension\n");

 FUNC_4(&VAR_3->lock);

 FUNC_7(&VAR_4->v4l2_dev);

 FUNC_1(VAR_3, VAR_0);

 FUNC_2(VAR_3);

 if (FUNC_10(&VAR_4->radio_dev)) {
  FUNC_0(&VAR_3->intf->dev, "V4L2 device %s deregistered\n",
    FUNC_9(&VAR_4->radio_dev));
  FUNC_11(&VAR_4->radio_dev);
 }
 if (FUNC_10(&VAR_4->vbi_dev)) {
  FUNC_0(&VAR_3->intf->dev, "V4L2 device %s deregistered\n",
    FUNC_9(&VAR_4->vbi_dev));
  FUNC_11(&VAR_4->vbi_dev);
 }
 if (FUNC_10(&VAR_4->vdev)) {
  FUNC_0(&VAR_3->intf->dev, "V4L2 device %s deregistered\n",
    FUNC_9(&VAR_4->vdev));
  FUNC_11(&VAR_4->vdev);
 }

 FUNC_6(&VAR_4->ctrl_handler);
 FUNC_8(&VAR_4->v4l2_dev);

 FUNC_3(&VAR_4->ref, VAR_2);

 FUNC_5(&VAR_3->lock);

 FUNC_3(&VAR_3->ref, VAR_1);

 return 0;
}
