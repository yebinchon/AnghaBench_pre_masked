
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct nvme_ns {int lba_shift; scalar_t__ ncap; int* vs; TYPE_5__* queue; int head; int siblings; struct gendisk* disk; int fault_inject; int list; int kref; struct nvme_ctrl* ctrl; } ;
struct nvme_id_ns {int lba_shift; scalar_t__ ncap; int* vs; TYPE_5__* queue; int head; int siblings; struct gendisk* disk; int fault_inject; int list; int kref; struct nvme_ctrl* ctrl; } ;
struct nvme_ctrl {int numa_node; int quirks; TYPE_4__* subsys; int device; int namespaces_rwsem; int namespaces; TYPE_3__* ops; TYPE_1__* opts; int tagset; } ;
struct gendisk {int flags; int disk_name; TYPE_5__* queue; struct nvme_ns* private_data; int * fops; } ;
struct TYPE_16__ {struct nvme_ns* queuedata; TYPE_2__* backing_dev_info; } ;
struct TYPE_15__ {int lock; } ;
struct TYPE_14__ {int flags; } ;
struct TYPE_13__ {int capabilities; } ;
struct TYPE_12__ {scalar_t__ data_digest; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_5__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_5__*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct gendisk*,struct nvme_ns*) ;
 struct gendisk* FUNC_3 (int ,int) ;
 int FUNC_4 (TYPE_5__*) ;
 TYPE_5__* FUNC_5 (int ) ;
 int FUNC_6 (int ,TYPE_5__*) ;
 int FUNC_7 (TYPE_5__*,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int ,struct gendisk*,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct nvme_ns*) ;
 int FUNC_13 (int *) ;
 struct nvme_ns* FUNC_14 (int,int ,int) ;
 int FUNC_15 (int *,int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int ,char*,int) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int) ;
 int FUNC_21 (int *,int ) ;
 int VAR_10 ;
 int FUNC_22 (struct nvme_ctrl*) ;
 int FUNC_23 (struct nvme_ctrl*,unsigned int,struct nvme_ns**) ;
 int FUNC_24 (struct nvme_ns*,unsigned int,struct nvme_ns*) ;
 int FUNC_25 (struct nvme_ns*,struct nvme_ns*) ;
 int VAR_11 ;
 int FUNC_26 (struct nvme_ns*,char*,int) ;
 int FUNC_27 (int ) ;
 int FUNC_28 (char*,struct nvme_ns*,struct nvme_ctrl*,int*) ;
 int FUNC_29 (struct nvme_ctrl*,TYPE_5__*) ;
 int FUNC_30 (struct nvme_ctrl*,struct nvme_ns*) ;
 int FUNC_31 (struct gendisk*) ;
 int FUNC_32 (int *) ;

__attribute__((used)) static int FUNC_33(struct nvme_ctrl *VAR_12, unsigned VAR_13)
{
 struct nvme_ns *VAR_14;
 struct gendisk *VAR_15;
 struct nvme_id_ns *VAR_16;
 char VAR_17[VAR_1];
 int VAR_18 = VAR_12->numa_node, VAR_19 = VAR_4, VAR_20;

 VAR_14 = FUNC_14(sizeof(*VAR_14), VAR_5, VAR_18);
 if (!VAR_14)
  return -VAR_3;

 VAR_14->queue = FUNC_5(VAR_12->tagset);
 if (FUNC_0(VAR_14->queue)) {
  VAR_20 = FUNC_1(VAR_14->queue);
  goto out_free_ns;
 }

 if (VAR_12->opts && VAR_12->opts->data_digest)
  VAR_14->queue->backing_dev_info->capabilities
   |= VAR_0;

 FUNC_6(VAR_8, VAR_14->queue);
 if (VAR_12->ops->flags & VAR_6)
  FUNC_6(VAR_9, VAR_14->queue);

 VAR_14->queue->queuedata = VAR_14;
 VAR_14->ctrl = VAR_12;

 FUNC_13(&VAR_14->kref);
 VAR_14->lba_shift = 9;

 FUNC_7(VAR_14->queue, 1 << VAR_14->lba_shift);
 FUNC_29(VAR_12, VAR_14->queue);

 VAR_20 = FUNC_23(VAR_12, VAR_13, &VAR_16);
 if (VAR_20)
  goto out_free_queue;

 if (VAR_16->ncap == 0) {
  VAR_20 = -VAR_2;
  goto out_free_id;
 }

 VAR_20 = FUNC_24(VAR_14, VAR_13, VAR_16);
 if (VAR_20)
  goto out_free_id;
 FUNC_30(VAR_12, VAR_14);
 FUNC_28(VAR_17, VAR_14, VAR_12, &VAR_19);

 VAR_15 = FUNC_3(0, VAR_18);
 if (!VAR_15) {
  VAR_20 = -VAR_3;
  goto out_unlink_ns;
 }

 VAR_15->fops = &VAR_10;
 VAR_15->private_data = VAR_14;
 VAR_15->queue = VAR_14->queue;
 VAR_15->flags = VAR_19;
 FUNC_17(VAR_15->disk_name, VAR_17, VAR_1);
 VAR_14->disk = VAR_15;

 FUNC_2(VAR_15, VAR_16);

 if ((VAR_12->quirks & VAR_7) && VAR_16->vs[0] == 0x1) {
  VAR_20 = FUNC_26(VAR_14, VAR_17, VAR_18);
  if (VAR_20) {
   FUNC_9(VAR_12->device, "LightNVM init failure\n");
   goto out_put_disk;
  }
 }

 FUNC_11(&VAR_12->namespaces_rwsem);
 FUNC_15(&VAR_14->list, &VAR_12->namespaces);
 FUNC_32(&VAR_12->namespaces_rwsem);

 FUNC_22(VAR_12);

 FUNC_10(VAR_12->device, VAR_14->disk, VAR_11);

 FUNC_25(VAR_14, VAR_16);
 FUNC_21(&VAR_14->fault_inject, VAR_14->disk->disk_name);
 FUNC_12(VAR_16);

 return 0;
 out_put_disk:
 FUNC_31(VAR_14->disk);
 out_unlink_ns:
 FUNC_18(&VAR_12->subsys->lock);
 FUNC_16(&VAR_14->siblings);
 FUNC_19(&VAR_12->subsys->lock);
 FUNC_27(VAR_14->head);
 out_free_id:
 FUNC_12(VAR_16);
 out_free_queue:
 FUNC_4(VAR_14->queue);
 out_free_ns:
 FUNC_12(VAR_14);
 if (VAR_20 > 0)
  VAR_20 = FUNC_8(FUNC_20(VAR_20));
 return VAR_20;
}
