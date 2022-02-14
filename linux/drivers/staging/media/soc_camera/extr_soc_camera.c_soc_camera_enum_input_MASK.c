
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_input {scalar_t__ index; int name; int std; int type; } ;
struct soc_camera_device {TYPE_1__* vdev; } ;
struct file {struct soc_camera_device* private_data; } ;
struct TYPE_2__ {int tvnorms; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_2, void *VAR_3,
     struct v4l2_input *VAR_4)
{
 struct soc_camera_device *VAR_5 = VAR_2->private_data;

 if (VAR_4->index != 0)
  return -VAR_0;


 VAR_4->type = VAR_1;
 VAR_4->std = VAR_5->vdev->tvnorms;
 FUNC_0(VAR_4->name, "Camera", sizeof(VAR_4->name));

 return 0;
}
