
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_device {int * queue; } ;
struct uvc_video_queue {int queue; } ;
struct TYPE_2__ {int format; struct uvc_video_queue queue; struct video_device vdev; } ;
struct uvc_streaming {TYPE_1__ meta; struct uvc_device* dev; } ;
struct uvc_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct uvc_device*,struct uvc_streaming*,struct video_device*,struct uvc_video_queue*,int ,int *,int *) ;

int FUNC_1(struct uvc_streaming *VAR_4)
{
 struct uvc_device *VAR_5 = VAR_4->dev;
 struct video_device *VAR_6 = &VAR_4->meta.vdev;
 struct uvc_video_queue *VAR_7 = &VAR_4->meta.queue;

 VAR_4->meta.format = VAR_1;





 VAR_6->queue = &VAR_7->queue;

 return FUNC_0(VAR_5, VAR_4, VAR_6, VAR_7,
      VAR_0,
      &VAR_2, &VAR_3);
}
