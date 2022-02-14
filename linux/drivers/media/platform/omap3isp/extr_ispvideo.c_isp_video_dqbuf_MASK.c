
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_buffer {int dummy; } ;
struct isp_video_fh {int queue; } ;
struct isp_video {int queue_lock; } ;
struct file {int f_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct isp_video_fh* FUNC_2 (void*) ;
 int FUNC_3 (int *,struct v4l2_buffer*,int) ;
 struct isp_video* FUNC_4 (struct file*) ;

__attribute__((used)) static int
FUNC_5(struct file *VAR_1, void *VAR_2, struct v4l2_buffer *VAR_3)
{
 struct isp_video_fh *VAR_4 = FUNC_2(VAR_2);
 struct isp_video *VAR_5 = FUNC_4(VAR_1);
 int VAR_6;

 FUNC_0(&VAR_5->queue_lock);
 VAR_6 = FUNC_3(&VAR_4->queue, VAR_3, VAR_1->f_flags & VAR_0);
 FUNC_1(&VAR_5->queue_lock);

 return VAR_6;
}
