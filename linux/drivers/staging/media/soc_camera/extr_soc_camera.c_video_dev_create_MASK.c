
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int * lock; int * ctrl_handler; int release; int * ioctl_ops; int * fops; int * v4l2_dev; int name; } ;
struct soc_camera_host {int host_lock; int v4l2_dev; int drv_name; } ;
struct soc_camera_device {struct video_device* vdev; int ctrl_handler; int parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 struct soc_camera_host* FUNC_1 (int ) ;
 struct video_device* FUNC_2 () ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(struct soc_camera_device *VAR_4)
{
 struct soc_camera_host *VAR_5 = FUNC_1(VAR_4->parent);
 struct video_device *VAR_6 = FUNC_2();

 if (!VAR_6)
  return -VAR_0;

 FUNC_0(VAR_6->name, VAR_5->drv_name, sizeof(VAR_6->name));

 VAR_6->v4l2_dev = &VAR_5->v4l2_dev;
 VAR_6->fops = &VAR_1;
 VAR_6->ioctl_ops = &VAR_2;
 VAR_6->release = VAR_3;
 VAR_6->ctrl_handler = &VAR_4->ctrl_handler;
 VAR_6->lock = &VAR_5->host_lock;

 VAR_4->vdev = VAR_6;

 return 0;
}
