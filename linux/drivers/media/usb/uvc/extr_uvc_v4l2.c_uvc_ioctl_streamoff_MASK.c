
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uvc_streaming {int mutex; int queue; } ;
struct uvc_fh {struct uvc_streaming* stream; } ;
struct file {int dummy; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct uvc_fh*) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_1, void *VAR_2,
          enum v4l2_buf_type VAR_3)
{
 struct uvc_fh *VAR_4 = VAR_2;
 struct uvc_streaming *VAR_5 = VAR_4->stream;

 if (!FUNC_2(VAR_4))
  return -VAR_0;

 FUNC_0(&VAR_5->mutex);
 FUNC_3(&VAR_5->queue, VAR_3);
 FUNC_1(&VAR_5->mutex);

 return 0;
}
