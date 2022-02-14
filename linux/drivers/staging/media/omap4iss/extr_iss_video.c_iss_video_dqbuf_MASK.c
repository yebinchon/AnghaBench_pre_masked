
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_buffer {int dummy; } ;
struct iss_video_fh {int queue; } ;
struct file {int f_flags; } ;


 int VAR_0 ;
 struct iss_video_fh* FUNC_0 (void*) ;
 int FUNC_1 (int *,struct v4l2_buffer*,int) ;

__attribute__((used)) static int
FUNC_2(struct file *VAR_1, void *VAR_2, struct v4l2_buffer *VAR_3)
{
 struct iss_video_fh *VAR_4 = FUNC_0(VAR_2);

 return FUNC_1(&VAR_4->queue, VAR_3, VAR_1->f_flags & VAR_0);
}
