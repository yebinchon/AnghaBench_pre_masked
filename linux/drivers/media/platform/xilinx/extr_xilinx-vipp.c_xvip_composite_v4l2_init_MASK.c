
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ hw_revision; int model; int dev; } ;
struct TYPE_4__ {TYPE_2__* mdev; } ;
struct xvip_composite_device {TYPE_2__ media_dev; int dev; TYPE_1__ v4l2_dev; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(struct xvip_composite_device *VAR_0)
{
 int VAR_1;

 VAR_0->media_dev.dev = VAR_0->dev;
 FUNC_3(VAR_0->media_dev.model, "Xilinx Video Composite Device",
  sizeof(VAR_0->media_dev.model));
 VAR_0->media_dev.hw_revision = 0;

 FUNC_2(&VAR_0->media_dev);

 VAR_0->v4l2_dev.mdev = &VAR_0->media_dev;
 VAR_1 = FUNC_4(VAR_0->dev, &VAR_0->v4l2_dev);
 if (VAR_1 < 0) {
  FUNC_0(VAR_0->dev, "V4L2 device registration failed (%d)\n",
   VAR_1);
  FUNC_1(&VAR_0->media_dev);
  return VAR_1;
 }

 return 0;
}
