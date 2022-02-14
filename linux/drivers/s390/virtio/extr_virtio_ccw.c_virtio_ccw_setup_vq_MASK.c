
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vq_callback_t ;
typedef void* u64 ;
struct virtqueue {struct virtio_ccw_vq_info* priv; } ;
struct virtio_device {int dummy; } ;
struct virtio_ccw_vq_info {int num; TYPE_3__* info_block; int node; struct virtqueue* vq; } ;
struct virtio_ccw_device {scalar_t__ revision; TYPE_4__* cdev; int lock; int virtqueues; } ;
struct ccw1 {int count; scalar_t__ cda; int flags; int cmd_code; } ;
typedef void* __u64 ;
typedef scalar_t__ __u32 ;
struct TYPE_10__ {int dev; } ;
struct TYPE_8__ {int index; int num; void* used; void* avail; void* desc; } ;
struct TYPE_7__ {int index; int num; int align; void* queue; } ;
struct TYPE_9__ {TYPE_2__ s; TYPE_1__ l; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct virtqueue* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_4__*,TYPE_3__*,int) ;
 TYPE_3__* FUNC_2 (TYPE_4__*,int) ;
 int FUNC_3 (struct virtio_ccw_device*,struct ccw1*,int) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (struct virtio_ccw_vq_info*) ;
 struct virtio_ccw_vq_info* FUNC_6 (int,int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 struct virtio_ccw_device* FUNC_10 (struct virtio_device*) ;
 int VAR_5 ;
 int FUNC_11 (struct virtio_ccw_device*,struct ccw1*,int) ;
 scalar_t__ FUNC_12 (struct virtqueue*) ;
 void* FUNC_13 (struct virtqueue*) ;
 scalar_t__ FUNC_14 (struct virtqueue*) ;
 int FUNC_15 (struct virtqueue*) ;
 struct virtqueue* FUNC_16 (int,int,int ,struct virtio_device*,int,int,int,int ,int *,char const*) ;
 int FUNC_17 (struct virtqueue*) ;

__attribute__((used)) static struct virtqueue *FUNC_18(struct virtio_device *VAR_6,
          int VAR_7, vq_callback_t *VAR_8,
          const char *VAR_9, bool VAR_10,
          struct ccw1 *VAR_11)
{
 struct virtio_ccw_device *VAR_12 = FUNC_10(VAR_6);
 int VAR_13;
 struct virtqueue *VAR_14 = ((void*)0);
 struct virtio_ccw_vq_info *VAR_15;
 u64 VAR_16;
 unsigned long VAR_17;
 bool VAR_18;


 VAR_15 = FUNC_6(sizeof(struct virtio_ccw_vq_info), VAR_2);
 if (!VAR_15) {
  FUNC_4(&VAR_12->cdev->dev, "no info\n");
  VAR_13 = -VAR_1;
  goto out_err;
 }
 VAR_15->info_block = FUNC_2(VAR_12->cdev,
       sizeof(*VAR_15->info_block));
 if (!VAR_15->info_block) {
  FUNC_4(&VAR_12->cdev->dev, "no info block\n");
  VAR_13 = -VAR_1;
  goto out_err;
 }
 VAR_15->num = FUNC_11(VAR_12, VAR_11, VAR_7);
 if (VAR_15->num < 0) {
  VAR_13 = VAR_15->num;
  goto out_err;
 }
 VAR_18 = VAR_12->revision > 0;
 VAR_14 = FUNC_16(VAR_7, VAR_15->num, VAR_3,
        VAR_6, 1, VAR_18, VAR_10,
        VAR_5, VAR_8, VAR_9);

 if (!VAR_14) {

  FUNC_4(&VAR_12->cdev->dev, "no vq\n");
  VAR_13 = -VAR_1;
  goto out_err;
 }

 VAR_15->num = FUNC_15(VAR_14);


 VAR_16 = FUNC_13(VAR_14);
 if (VAR_12->revision == 0) {
  VAR_15->info_block->l.queue = VAR_16;
  VAR_15->info_block->l.align = VAR_3;
  VAR_15->info_block->l.index = VAR_7;
  VAR_15->info_block->l.num = VAR_15->num;
  VAR_11->count = sizeof(VAR_15->info_block->l);
 } else {
  VAR_15->info_block->s.desc = VAR_16;
  VAR_15->info_block->s.index = VAR_7;
  VAR_15->info_block->s.num = VAR_15->num;
  VAR_15->info_block->s.avail = (__u64)FUNC_12(VAR_14);
  VAR_15->info_block->s.used = (__u64)FUNC_14(VAR_14);
  VAR_11->count = sizeof(VAR_15->info_block->s);
 }
 VAR_11->cmd_code = VAR_0;
 VAR_11->flags = 0;
 VAR_11->cda = (__u32)(unsigned long)(VAR_15->info_block);
 VAR_13 = FUNC_3(VAR_12, VAR_11, VAR_4 | VAR_7);
 if (VAR_13) {
  FUNC_4(&VAR_12->cdev->dev, "SET_VQ failed\n");
  goto out_err;
 }

 VAR_15->vq = VAR_14;
 VAR_14->priv = VAR_15;


 FUNC_8(&VAR_12->lock, VAR_17);
 FUNC_7(&VAR_15->node, &VAR_12->virtqueues);
 FUNC_9(&VAR_12->lock, VAR_17);

 return VAR_14;

out_err:
 if (VAR_14)
  FUNC_17(VAR_14);
 if (VAR_15) {
  FUNC_1(VAR_12->cdev, VAR_15->info_block,
        sizeof(*VAR_15->info_block));
 }
 FUNC_5(VAR_15);
 return FUNC_0(VAR_13);
}
