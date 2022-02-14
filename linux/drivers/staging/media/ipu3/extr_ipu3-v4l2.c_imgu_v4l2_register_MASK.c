
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * ctrl_handler; int * mdev; } ;
struct imgu_device {int streaming; int media_dev; TYPE_1__ v4l2_dev; TYPE_4__* pci_dev; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct imgu_device*,int ) ;
 int FUNC_2 (struct imgu_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_4__*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;

int FUNC_9(struct imgu_device *VAR_2)
{
 int VAR_3;


 VAR_2->streaming = 0;


 FUNC_4(&VAR_2->media_dev, VAR_2->pci_dev, VAR_1);


 VAR_2->v4l2_dev.mdev = &VAR_2->media_dev;
 VAR_2->v4l2_dev.ctrl_handler = ((void*)0);
 VAR_3 = FUNC_6(&VAR_2->pci_dev->dev, &VAR_2->v4l2_dev);
 if (VAR_3) {
  FUNC_0(&VAR_2->pci_dev->dev,
   "failed to register V4L2 device (%d)\n", VAR_3);
  goto fail_v4l2_dev;
 }

 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3) {
  FUNC_0(&VAR_2->pci_dev->dev,
   "failed to register pipes (%d)\n", VAR_3);
  goto fail_v4l2_pipes;
 }

 VAR_3 = FUNC_7(&VAR_2->v4l2_dev);
 if (VAR_3) {
  FUNC_0(&VAR_2->pci_dev->dev,
   "failed to register subdevs (%d)\n", VAR_3);
  goto fail_subdevs;
 }

 VAR_3 = FUNC_5(&VAR_2->media_dev);
 if (VAR_3) {
  FUNC_0(&VAR_2->pci_dev->dev,
   "failed to register media device (%d)\n", VAR_3);
  goto fail_subdevs;
 }

 return 0;

fail_subdevs:
 FUNC_1(VAR_2, VAR_0);
fail_v4l2_pipes:
 FUNC_8(&VAR_2->v4l2_dev);
fail_v4l2_dev:
 FUNC_3(&VAR_2->media_dev);

 return VAR_3;
}
