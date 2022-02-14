
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_format {int dummy; } ;
struct uvc_streaming {int dummy; } ;
struct uvc_fh {struct uvc_streaming* stream; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct uvc_streaming*,struct v4l2_format*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_0, void *VAR_1,
       struct v4l2_format *VAR_2)
{
 struct uvc_fh *VAR_3 = VAR_1;
 struct uvc_streaming *VAR_4 = VAR_3->stream;

 return FUNC_0(VAR_4, VAR_2);
}
