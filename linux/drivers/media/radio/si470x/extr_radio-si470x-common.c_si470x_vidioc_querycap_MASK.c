
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_capability {int dummy; } ;
struct si470x_device {int (* vidioc_querycap ) (struct file*,void*,struct v4l2_capability*) ;} ;
struct file {int dummy; } ;


 int FUNC_0 (struct file*,void*,struct v4l2_capability*) ;
 struct si470x_device* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_0, void *VAR_1,
  struct v4l2_capability *VAR_2)
{
 struct si470x_device *VAR_3 = FUNC_1(VAR_0);

 return VAR_3->vidioc_querycap(VAR_0, VAR_1, VAR_2);
}
