
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_selection {scalar_t__ type; } ;
struct soc_camera_host {TYPE_1__* ops; } ;
struct soc_camera_device {int parent; } ;
struct file {struct soc_camera_device* private_data; } ;
struct TYPE_2__ {int (* get_selection ) (struct soc_camera_device*,struct v4l2_selection*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct soc_camera_device*,struct v4l2_selection*) ;
 struct soc_camera_host* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3,
      struct v4l2_selection *VAR_4)
{
 struct soc_camera_device *VAR_5 = VAR_2->private_data;
 struct soc_camera_host *VAR_6 = FUNC_1(VAR_5->parent);


 if (VAR_4->type != VAR_1)
  return -VAR_0;

 return VAR_6->ops->get_selection(VAR_5, VAR_4);
}
