
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * queue; } ;
struct vpbe_layer {TYPE_2__ video_dev; struct vpbe_display* disp_dev; int buffer_queue; } ;
struct vpbe_display {TYPE_1__* vpbe_dev; } ;
struct platform_device {int dummy; } ;
struct TYPE_4__ {int v4l2_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct platform_device*,struct vpbe_display*) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 int FUNC_3 (TYPE_2__*,struct vpbe_layer*) ;

__attribute__((used)) static int FUNC_4(struct vpbe_layer *VAR_2,
      struct vpbe_display *VAR_3,
      struct platform_device *VAR_4)
{
 int VAR_5;

 FUNC_1(&VAR_3->vpbe_dev->v4l2_dev,
    "Trying to register VPBE display device.\n");
 FUNC_1(&VAR_3->vpbe_dev->v4l2_dev,
    "layer=%p,layer->video_dev=%p\n",
    VAR_2,
    &VAR_2->video_dev);

 VAR_2->video_dev.queue = &VAR_2->buffer_queue;
 VAR_5 = FUNC_2(&VAR_2->video_dev,
        VAR_1,
        -1);
 if (VAR_5)
  return -VAR_0;

 VAR_2->disp_dev = VAR_3;

 FUNC_0(VAR_4, VAR_3);
 FUNC_3(&VAR_2->video_dev,
     VAR_2);

 return 0;
}
