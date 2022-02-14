
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int device_caps; int vfl_dir; int * v4l2_dev; int * lock; int release; int * ioctl_ops; int * fops; int name; } ;
struct allegro_dev {int v4l2_dev; int lock; struct video_device video_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_6 ;
 int FUNC_1 (struct video_device*,int ,int ) ;
 int FUNC_2 (struct video_device*,struct allegro_dev*) ;

__attribute__((used)) static int FUNC_3(struct allegro_dev *VAR_7)
{
 struct video_device *VAR_8 = &VAR_7->video_dev;

 FUNC_0(VAR_8->name, "allegro", sizeof(VAR_8->name));
 VAR_8->fops = &VAR_4;
 VAR_8->ioctl_ops = &VAR_5;
 VAR_8->release = VAR_6;
 VAR_8->lock = &VAR_7->lock;
 VAR_8->v4l2_dev = &VAR_7->v4l2_dev;
 VAR_8->vfl_dir = VAR_2;
 VAR_8->device_caps = VAR_1 | VAR_0;
 FUNC_2(VAR_8, VAR_7);

 return FUNC_1(VAR_8, VAR_3, 0);
}
