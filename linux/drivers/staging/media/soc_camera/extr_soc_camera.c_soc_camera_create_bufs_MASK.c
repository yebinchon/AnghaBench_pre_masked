
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_create_buffers {int dummy; } ;
struct soc_camera_device {struct file* streamer; int vb2_vidq; } ;
struct file {struct soc_camera_device* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct v4l2_create_buffers*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_1, void *VAR_2,
       struct v4l2_create_buffers *VAR_3)
{
 struct soc_camera_device *VAR_4 = VAR_1->private_data;
 int VAR_5;

 if (VAR_4->streamer && VAR_4->streamer != VAR_1)
  return -VAR_0;

 VAR_5 = FUNC_0(&VAR_4->vb2_vidq, VAR_3);
 if (!VAR_5)
  VAR_4->streamer = VAR_1;
 return VAR_5;
}
