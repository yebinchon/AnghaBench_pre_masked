
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_exportbuffer {int dummy; } ;
struct uvc_streaming {int queue; } ;
struct uvc_fh {struct uvc_streaming* stream; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct v4l2_exportbuffer*) ;
 int FUNC_1 (struct uvc_fh*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_1, void *VAR_2,
       struct v4l2_exportbuffer *VAR_3)
{
 struct uvc_fh *VAR_4 = VAR_2;
 struct uvc_streaming *VAR_5 = VAR_4->stream;

 if (!FUNC_1(VAR_4))
  return -VAR_0;

 return FUNC_0(&VAR_5->queue, VAR_3);
}
