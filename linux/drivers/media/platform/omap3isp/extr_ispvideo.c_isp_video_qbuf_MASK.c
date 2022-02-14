
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_buffer {int dummy; } ;
struct isp_video_fh {int queue; } ;
struct TYPE_4__ {TYPE_1__* v4l2_dev; } ;
struct isp_video {int queue_lock; TYPE_2__ video; } ;
struct file {int dummy; } ;
struct TYPE_3__ {int mdev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct isp_video_fh* FUNC_2 (void*) ;
 int FUNC_3 (int *,int ,struct v4l2_buffer*) ;
 struct isp_video* FUNC_4 (struct file*) ;

__attribute__((used)) static int
FUNC_5(struct file *VAR_0, void *VAR_1, struct v4l2_buffer *VAR_2)
{
 struct isp_video_fh *VAR_3 = FUNC_2(VAR_1);
 struct isp_video *VAR_4 = FUNC_4(VAR_0);
 int VAR_5;

 FUNC_0(&VAR_4->queue_lock);
 VAR_5 = FUNC_3(&VAR_3->queue, VAR_4->video.v4l2_dev->mdev, VAR_2);
 FUNC_1(&VAR_4->queue_lock);

 return VAR_5;
}
