
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct video_device {int num; TYPE_1__* v4l2_dev; int * lock; } ;
struct vpe_dev {TYPE_1__ v4l2_dev; int m2m_dev; int dev_mutex; struct video_device vfd; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 struct vpe_dev* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct video_device*,int ,int ) ;
 int FUNC_6 (struct video_device*,struct vpe_dev*) ;
 int FUNC_7 (struct vpe_dev*,char*) ;
 int FUNC_8 (struct platform_device*) ;
 int FUNC_9 (struct vpe_dev*,int ) ;
 struct video_device VAR_1 ;

__attribute__((used)) static void FUNC_10(struct platform_device *VAR_2)
{
 struct vpe_dev *VAR_3 = FUNC_1(VAR_2);
 struct video_device *VAR_4;
 int VAR_5;

 VAR_4 = &VAR_3->vfd;
 *VAR_4 = VAR_1;
 VAR_4->lock = &VAR_3->dev_mutex;
 VAR_4->v4l2_dev = &VAR_3->v4l2_dev;

 VAR_5 = FUNC_5(VAR_4, VAR_0, 0);
 if (VAR_5) {
  FUNC_7(VAR_3, "Failed to register video device\n");

  FUNC_9(VAR_3, 0);
  FUNC_8(VAR_2);
  FUNC_2(&VAR_2->dev);
  FUNC_4(VAR_3->m2m_dev);
  FUNC_3(&VAR_3->v4l2_dev);

  return;
 }

 FUNC_6(VAR_4, VAR_3);
 FUNC_0(VAR_3->v4l2_dev.dev, "Device registered as /dev/video%d\n",
  VAR_4->num);
}
