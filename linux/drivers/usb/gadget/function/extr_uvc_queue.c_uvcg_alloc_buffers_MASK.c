
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_requestbuffers {int count; } ;
struct uvc_video_queue {int queue; } ;


 int FUNC_0 (int *,struct v4l2_requestbuffers*) ;

int FUNC_1(struct uvc_video_queue *VAR_0,
         struct v4l2_requestbuffers *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(&VAR_0->queue, VAR_1);

 return VAR_2 ? VAR_2 : VAR_1->count;
}
