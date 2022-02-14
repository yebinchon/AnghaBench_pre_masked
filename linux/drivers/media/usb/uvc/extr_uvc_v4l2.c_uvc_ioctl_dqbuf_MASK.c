
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_buffer {int dummy; } ;
struct uvc_streaming {int queue; } ;
struct uvc_fh {struct uvc_streaming* stream; } ;
struct file {int f_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct v4l2_buffer*,int) ;
 int FUNC_1 (struct uvc_fh*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3, struct v4l2_buffer *VAR_4)
{
 struct uvc_fh *VAR_5 = VAR_3;
 struct uvc_streaming *VAR_6 = VAR_5->stream;

 if (!FUNC_1(VAR_5))
  return -VAR_0;

 return FUNC_0(&VAR_6->queue, VAR_4,
      VAR_2->f_flags & VAR_1);
}
