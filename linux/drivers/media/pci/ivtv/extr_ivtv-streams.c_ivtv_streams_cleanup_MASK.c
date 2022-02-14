
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_device {int * v4l2_dev; } ;
struct ivtv {TYPE_1__* streams; } ;
struct TYPE_2__ {struct video_device vdev; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct video_device*) ;

void FUNC_2(struct ivtv *VAR_1)
{
 int VAR_2;


 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  struct video_device *VAR_3 = &VAR_1->streams[VAR_2].vdev;

  if (VAR_3->v4l2_dev == ((void*)0))
   continue;

  FUNC_1(VAR_3);
  FUNC_0(&VAR_1->streams[VAR_2]);
  VAR_1->streams[VAR_2].vdev.v4l2_dev = ((void*)0);
 }
}
