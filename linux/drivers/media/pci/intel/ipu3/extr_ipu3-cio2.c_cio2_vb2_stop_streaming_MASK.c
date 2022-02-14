
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vb2_queue {int dummy; } ;
struct TYPE_3__ {int entity; } ;
struct cio2_queue {TYPE_1__ vdev; int sensor; } ;
struct cio2_device {int streaming; TYPE_2__* pci_dev; } ;
struct TYPE_4__ {int dev; int irq; } ;


 int VAR_0 ;
 int FUNC_0 (struct cio2_device*,struct cio2_queue*) ;
 int FUNC_1 (struct cio2_queue*,int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int ,int ,int ) ;
 struct cio2_device* FUNC_7 (struct vb2_queue*) ;
 struct cio2_queue* FUNC_8 (struct vb2_queue*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_9(struct vb2_queue *VAR_3)
{
 struct cio2_queue *VAR_4 = FUNC_8(VAR_3);
 struct cio2_device *VAR_5 = FUNC_7(VAR_3);

 if (FUNC_6(VAR_4->sensor, VAR_2, VAR_1, 0))
  FUNC_2(&VAR_5->pci_dev->dev,
   "failed to stop sensor streaming\n");

 FUNC_0(VAR_5, VAR_4);
 FUNC_5(VAR_5->pci_dev->irq);
 FUNC_1(VAR_4, VAR_0);
 FUNC_3(&VAR_4->vdev.entity);
 FUNC_4(&VAR_5->pci_dev->dev);
 VAR_5->streaming = 0;
}
