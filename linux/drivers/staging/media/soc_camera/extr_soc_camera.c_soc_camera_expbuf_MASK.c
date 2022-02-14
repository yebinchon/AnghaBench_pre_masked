
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_exportbuffer {int dummy; } ;
struct soc_camera_device {int vb2_vidq; struct file* streamer; } ;
struct file {struct soc_camera_device* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct v4l2_exportbuffer*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_1, void *VAR_2,
        struct v4l2_exportbuffer *VAR_3)
{
 struct soc_camera_device *VAR_4 = VAR_1->private_data;

 if (VAR_4->streamer && VAR_4->streamer != VAR_1)
  return -VAR_0;
 return FUNC_0(&VAR_4->vb2_vidq, VAR_3);
}
