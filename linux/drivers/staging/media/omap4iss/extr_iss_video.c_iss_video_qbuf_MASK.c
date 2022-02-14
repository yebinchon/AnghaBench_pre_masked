
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_buffer {int dummy; } ;
struct iss_video_fh {int queue; } ;
struct TYPE_4__ {TYPE_1__* v4l2_dev; } ;
struct iss_video {TYPE_2__ video; } ;
struct file {int dummy; } ;
struct TYPE_3__ {int mdev; } ;


 struct iss_video_fh* FUNC_0 (void*) ;
 int FUNC_1 (int *,int ,struct v4l2_buffer*) ;
 struct iss_video* FUNC_2 (struct file*) ;

__attribute__((used)) static int
FUNC_3(struct file *VAR_0, void *VAR_1, struct v4l2_buffer *VAR_2)
{
 struct iss_video *VAR_3 = FUNC_2(VAR_0);
 struct iss_video_fh *VAR_4 = FUNC_0(VAR_1);

 return FUNC_1(&VAR_4->queue, VAR_3->video.v4l2_dev->mdev, VAR_2);
}
