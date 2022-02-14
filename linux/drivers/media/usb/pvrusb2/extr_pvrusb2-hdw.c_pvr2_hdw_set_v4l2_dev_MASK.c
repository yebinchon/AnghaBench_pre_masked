
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int * v4l2_dev; } ;
struct pvr2_hdw {int v4l2_dev; } ;



void FUNC_0(struct pvr2_hdw *VAR_0, struct video_device *VAR_1)
{
 VAR_1->v4l2_dev = &VAR_0->v4l2_dev;
}
