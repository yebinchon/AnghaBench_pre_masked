
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct soc_camera_host {TYPE_2__* ops; int host_lock; } ;
struct soc_camera_device {int pdev; TYPE_1__* vdev; int use_count; struct file* streamer; int vb2_vidq; int parent; } ;
struct file {struct soc_camera_device* private_data; } ;
struct TYPE_4__ {int owner; scalar_t__ init_videobuf2; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (struct soc_camera_device*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct soc_camera_device*) ;
 struct soc_camera_host* FUNC_8 (int ) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct file *VAR_0)
{
 struct soc_camera_device *VAR_1 = VAR_0->private_data;
 struct soc_camera_host *VAR_2 = FUNC_8(VAR_1->parent);

 FUNC_3(&VAR_2->host_lock);
 if (VAR_1->streamer == VAR_0) {
  if (VAR_2->ops->init_videobuf2)
   FUNC_9(&VAR_1->vb2_vidq);
  VAR_1->streamer = ((void*)0);
 }
 VAR_1->use_count--;
 if (!VAR_1->use_count) {
  FUNC_6(&VAR_1->vdev->dev);
  FUNC_5(&VAR_1->vdev->dev);

  FUNC_0(VAR_1);

  FUNC_7(VAR_1);
 }

 FUNC_4(&VAR_2->host_lock);

 FUNC_2(VAR_2->ops->owner);

 FUNC_1(VAR_1->pdev, "camera device close\n");

 return 0;
}
