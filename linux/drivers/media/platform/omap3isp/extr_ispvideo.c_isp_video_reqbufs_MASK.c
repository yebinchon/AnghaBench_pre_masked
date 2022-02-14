
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_requestbuffers {int dummy; } ;
struct isp_video_fh {int queue; } ;
struct isp_video {int queue_lock; } ;
struct file {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct isp_video_fh* FUNC_2 (void*) ;
 int FUNC_3 (int *,struct v4l2_requestbuffers*) ;
 struct isp_video* FUNC_4 (struct file*) ;

__attribute__((used)) static int
FUNC_5(struct file *VAR_0, void *VAR_1, struct v4l2_requestbuffers *VAR_2)
{
 struct isp_video_fh *VAR_3 = FUNC_2(VAR_1);
 struct isp_video *VAR_4 = FUNC_4(VAR_0);
 int VAR_5;

 FUNC_0(&VAR_4->queue_lock);
 VAR_5 = FUNC_3(&VAR_3->queue, VAR_2);
 FUNC_1(&VAR_4->queue_lock);

 return VAR_5;
}
