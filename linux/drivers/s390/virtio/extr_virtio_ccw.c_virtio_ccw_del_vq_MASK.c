
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct virtqueue {unsigned int index; TYPE_3__* vdev; struct virtio_ccw_vq_info* priv; } ;
struct virtio_ccw_vq_info {TYPE_4__* info_block; int node; } ;
struct virtio_ccw_device {scalar_t__ revision; int cdev; int lock; } ;
struct ccw1 {int count; scalar_t__ cda; int flags; int cmd_code; } ;
typedef scalar_t__ __u32 ;
struct TYPE_6__ {unsigned int index; scalar_t__ used; scalar_t__ avail; scalar_t__ num; scalar_t__ desc; } ;
struct TYPE_5__ {unsigned int index; scalar_t__ num; scalar_t__ align; scalar_t__ queue; } ;
struct TYPE_8__ {TYPE_2__ s; TYPE_1__ l; } ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ,TYPE_4__*,int) ;
 int FUNC_1 (struct virtio_ccw_device*,struct ccw1*,unsigned int) ;
 int FUNC_2 (int *,char*,int,unsigned int) ;
 int FUNC_3 (struct virtio_ccw_vq_info*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 struct virtio_ccw_device* FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (struct virtqueue*) ;

__attribute__((used)) static void FUNC_9(struct virtqueue *VAR_3, struct ccw1 *VAR_4)
{
 struct virtio_ccw_device *VAR_5 = FUNC_7(VAR_3->vdev);
 struct virtio_ccw_vq_info *VAR_6 = VAR_3->priv;
 unsigned long VAR_7;
 int VAR_8;
 unsigned int VAR_9 = VAR_3->index;


 FUNC_5(&VAR_5->lock, VAR_7);
 FUNC_4(&VAR_6->node);
 FUNC_6(&VAR_5->lock, VAR_7);


 if (VAR_5->revision == 0) {
  VAR_6->info_block->l.queue = 0;
  VAR_6->info_block->l.align = 0;
  VAR_6->info_block->l.index = VAR_9;
  VAR_6->info_block->l.num = 0;
  VAR_4->count = sizeof(VAR_6->info_block->l);
 } else {
  VAR_6->info_block->s.desc = 0;
  VAR_6->info_block->s.index = VAR_9;
  VAR_6->info_block->s.num = 0;
  VAR_6->info_block->s.avail = 0;
  VAR_6->info_block->s.used = 0;
  VAR_4->count = sizeof(VAR_6->info_block->s);
 }
 VAR_4->cmd_code = VAR_0;
 VAR_4->flags = 0;
 VAR_4->cda = (__u32)(unsigned long)(VAR_6->info_block);
 VAR_8 = FUNC_1(VAR_5, VAR_4,
       VAR_2 | VAR_9);




 if (VAR_8 && (VAR_8 != -VAR_1))
  FUNC_2(&VAR_3->vdev->dev, "Error %d while deleting queue %d\n",
    VAR_8, VAR_9);

 FUNC_8(VAR_3);
 FUNC_0(VAR_5->cdev, VAR_6->info_block,
       sizeof(*VAR_6->info_block));
 FUNC_3(VAR_6);
}
