
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int entity; } ;
struct TYPE_5__ {int entity; } ;
struct cio2_queue {int lock; TYPE_3__ subdev; int vbq; TYPE_2__ vdev; } ;
struct cio2_device {TYPE_1__* pci_dev; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (struct cio2_queue*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_6(struct cio2_device *VAR_0, struct cio2_queue *VAR_1)
{
 FUNC_5(&VAR_1->vdev);
 FUNC_1(&VAR_1->vdev.entity);
 FUNC_4(&VAR_1->vbq);
 FUNC_3(&VAR_1->subdev);
 FUNC_1(&VAR_1->subdev.entity);
 FUNC_0(VAR_1, &VAR_0->pci_dev->dev);
 FUNC_2(&VAR_1->lock);
}
