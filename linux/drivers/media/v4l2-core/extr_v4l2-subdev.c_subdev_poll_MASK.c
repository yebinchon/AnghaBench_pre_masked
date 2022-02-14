
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int dummy; } ;
struct v4l2_subdev {int flags; } ;
struct v4l2_fh {int wait; } ;
struct file {struct v4l2_fh* private_data; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct file*,int *,int *) ;
 scalar_t__ FUNC_1 (struct v4l2_fh*) ;
 struct v4l2_subdev* FUNC_2 (struct video_device*) ;
 struct video_device* FUNC_3 (struct file*) ;

__attribute__((used)) static __poll_t FUNC_4(struct file *VAR_3, poll_table *VAR_4)
{
 struct video_device *VAR_5 = FUNC_3(VAR_3);
 struct v4l2_subdev *VAR_6 = FUNC_2(VAR_5);
 struct v4l2_fh *VAR_7 = VAR_3->private_data;

 if (!(VAR_6->flags & VAR_2))
  return VAR_0;

 FUNC_0(VAR_3, &VAR_7->wait, VAR_4);

 if (FUNC_1(VAR_7))
  return VAR_1;

 return 0;
}
