
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vop_vdev {int virtio_bh_work; int virtio_db; struct vop_device* vpdev; } ;
struct vop_device {TYPE_1__* hw_ops; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int (* ack_interrupt ) (struct vop_device*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct vop_device*,int ) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_1, void *VAR_2)
{
 struct vop_vdev *VAR_3 = VAR_2;
 struct vop_device *VAR_4 = VAR_3->vpdev;

 VAR_4->hw_ops->ack_interrupt(VAR_4, VAR_3->virtio_db);
 FUNC_0(&VAR_3->virtio_bh_work);
 return VAR_0;
}
