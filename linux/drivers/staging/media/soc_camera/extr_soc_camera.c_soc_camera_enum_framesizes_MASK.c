
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_frmsizeenum {int dummy; } ;
struct soc_camera_host {TYPE_1__* ops; } ;
struct soc_camera_device {int parent; } ;
struct file {struct soc_camera_device* private_data; } ;
struct TYPE_2__ {int (* enum_framesizes ) (struct soc_camera_device*,struct v4l2_frmsizeenum*) ;} ;


 int FUNC_0 (struct soc_camera_device*,struct v4l2_frmsizeenum*) ;
 struct soc_camera_host* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_0, void *VAR_1,
      struct v4l2_frmsizeenum *VAR_2)
{
 struct soc_camera_device *VAR_3 = VAR_0->private_data;
 struct soc_camera_host *VAR_4 = FUNC_1(VAR_3->parent);

 return VAR_4->ops->enum_framesizes(VAR_3, VAR_2);
}
