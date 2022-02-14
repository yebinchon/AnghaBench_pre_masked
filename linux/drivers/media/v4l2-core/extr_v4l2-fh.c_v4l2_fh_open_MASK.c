
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int dummy; } ;
struct v4l2_fh {int dummy; } ;
struct file {struct v4l2_fh* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct v4l2_fh* FUNC_0 (int,int ) ;
 int FUNC_1 (struct v4l2_fh*) ;
 int FUNC_2 (struct v4l2_fh*,struct video_device*) ;
 struct video_device* FUNC_3 (struct file*) ;

int FUNC_4(struct file *VAR_2)
{
 struct video_device *VAR_3 = FUNC_3(VAR_2);
 struct v4l2_fh *VAR_4 = FUNC_0(sizeof(*VAR_4), VAR_1);

 VAR_2->private_data = VAR_4;
 if (VAR_4 == ((void*)0))
  return -VAR_0;
 FUNC_2(VAR_4, VAR_3);
 FUNC_1(VAR_4);
 return 0;
}
