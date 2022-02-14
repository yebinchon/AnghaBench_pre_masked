
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_device {int * v4l2_dev; int * queue; int * lock; } ;
struct TYPE_2__ {int vb_vidq; } ;
struct bm2835_mmal_dev {size_t camera_num; TYPE_1__ capture; int mutex; int v4l2_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int ,int ,int ) ;
 struct video_device VAR_3 ;
 int FUNC_1 (struct video_device*) ;
 int * VAR_4 ;
 int FUNC_2 (struct video_device*,int ,int ) ;
 int FUNC_3 (struct video_device*,struct bm2835_mmal_dev*) ;

__attribute__((used)) static int FUNC_4(struct bm2835_mmal_dev *VAR_5,
       struct video_device *VAR_6)
{
 int VAR_7;

 *VAR_6 = VAR_3;

 VAR_6->v4l2_dev = &VAR_5->v4l2_dev;

 VAR_6->lock = &VAR_5->mutex;

 VAR_6->queue = &VAR_5->capture.vb_vidq;


 FUNC_3(VAR_6, VAR_5);

 VAR_7 = FUNC_2(VAR_6,
        VAR_0,
        VAR_4[VAR_5->camera_num]);
 if (VAR_7 < 0)
  return VAR_7;

 FUNC_0(VAR_6->v4l2_dev,
    "V4L2 device registered as %s - stills mode > %dx%d\n",
    FUNC_1(VAR_6),
    VAR_2, VAR_1);

 return 0;
}
