
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int device_caps; int * v4l2_dev; int * lock; int * queue; } ;
struct stk1160 {int width; int height; TYPE_1__ vdev; int v4l2_dev; int norm; int * fmt; int v4l_lock; int vb_vidq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct stk1160*) ;
 int FUNC_2 (int *,int ,int ,int ,int ) ;
 int FUNC_3 (int *,char*,int ) ;
 TYPE_1__ VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 int FUNC_6 (TYPE_1__*,struct stk1160*) ;

int FUNC_7(struct stk1160 *VAR_9)
{
 int VAR_10;


 VAR_9->vdev = VAR_7;
 VAR_9->vdev.queue = &VAR_9->vb_vidq;





 VAR_9->vdev.lock = &VAR_9->v4l_lock;


 VAR_9->vdev.v4l2_dev = &VAR_9->v4l2_dev;
 VAR_9->vdev.device_caps = VAR_2 | VAR_1 |
    VAR_0;


 VAR_9->norm = VAR_3;
 VAR_9->width = 720;
 VAR_9->height = 480;


 VAR_9->fmt = &VAR_5[0];
 FUNC_1(VAR_9);

 FUNC_2(&VAR_9->v4l2_dev, 0, VAR_8, VAR_6,
   VAR_9->norm);

 FUNC_6(&VAR_9->vdev, VAR_9);
 VAR_10 = FUNC_5(&VAR_9->vdev, VAR_4, -1);
 if (VAR_10 < 0) {
  FUNC_0("video_register_device failed (%d)\n", VAR_10);
  return VAR_10;
 }

 FUNC_3(&VAR_9->v4l2_dev, "V4L2 device registered as %s\n",
    FUNC_4(&VAR_9->vdev));

 return 0;
}
