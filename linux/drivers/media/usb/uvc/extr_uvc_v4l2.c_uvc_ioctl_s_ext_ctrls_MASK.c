
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_ext_controls {int dummy; } ;
struct uvc_fh {int dummy; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct uvc_fh*,struct v4l2_ext_controls*,int) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_0, void *VAR_1,
     struct v4l2_ext_controls *VAR_2)
{
 struct uvc_fh *VAR_3 = VAR_1;

 return FUNC_0(VAR_3, VAR_2, 1);
}
