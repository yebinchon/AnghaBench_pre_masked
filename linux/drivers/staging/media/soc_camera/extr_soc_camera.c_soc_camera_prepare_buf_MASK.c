
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_buffer {int dummy; } ;
struct soc_camera_device {int vb2_vidq; } ;
struct file {struct soc_camera_device* private_data; } ;


 int FUNC_0 (int *,int *,struct v4l2_buffer*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_0, void *VAR_1,
      struct v4l2_buffer *VAR_2)
{
 struct soc_camera_device *VAR_3 = VAR_0->private_data;

 return FUNC_0(&VAR_3->vb2_vidq, ((void*)0), VAR_2);
}
