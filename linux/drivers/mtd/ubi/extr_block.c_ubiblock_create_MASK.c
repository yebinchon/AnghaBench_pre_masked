
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u64 ;
struct ubiblock_pdu {int dummy; } ;
struct TYPE_10__ {int queue_depth; int cmd_size; int nr_hw_queues; struct ubiblock* driver_data; int flags; int numa_node; int * ops; } ;
struct ubiblock {int ubi_num; int vol_id; struct gendisk* gd; TYPE_3__ tag_set; TYPE_1__* rq; int list; int wq; int leb_size; int dev_mutex; } ;
struct ubi_volume_info {int ubi_num; int vol_id; int name; int usable_leb_size; } ;
struct gendisk {scalar_t__ first_minor; int disk_name; TYPE_1__* queue; struct ubiblock* private_data; int major; int * fops; } ;
struct TYPE_9__ {struct ubiblock* queuedata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_5 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_6 ;
 int FUNC_2 (struct gendisk*) ;
 struct gendisk* FUNC_3 (int) ;
 int FUNC_4 (char*,int ,int ,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 TYPE_1__* FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_1__*,int ) ;
 int FUNC_10 (struct ubi_volume_info*,int *) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (int ,char*,int,int,int ) ;
 int VAR_7 ;
 int FUNC_13 (struct gendisk*) ;
 scalar_t__ FUNC_14 (int,int) ;
 scalar_t__ FUNC_15 (int *,struct ubiblock*,int ,int ,int ) ;
 int FUNC_16 (int *,scalar_t__) ;
 int FUNC_17 (struct ubiblock*) ;
 struct ubiblock* FUNC_18 (int,int ) ;
 int FUNC_19 (int *,int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (char*) ;
 int FUNC_24 (struct gendisk*) ;
 int FUNC_25 (struct gendisk*,int ) ;
 int FUNC_26 (int ,char*,int,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

int FUNC_27(struct ubi_volume_info *VAR_13)
{
 struct ubiblock *VAR_14;
 struct gendisk *VAR_15;
 u64 VAR_16;
 int VAR_17;

 VAR_17 = FUNC_10(VAR_13, &VAR_16);
 if (VAR_17) {
  return VAR_17;
 }


 FUNC_21(&VAR_7);
 if (FUNC_14(VAR_13->ubi_num, VAR_13->vol_id)) {
  VAR_17 = -VAR_1;
  goto out_unlock;
 }

 VAR_14 = FUNC_18(sizeof(struct ubiblock), VAR_4);
 if (!VAR_14) {
  VAR_17 = -VAR_3;
  goto out_unlock;
 }

 FUNC_20(&VAR_14->dev_mutex);

 VAR_14->ubi_num = VAR_13->ubi_num;
 VAR_14->vol_id = VAR_13->vol_id;
 VAR_14->leb_size = VAR_13->usable_leb_size;


 VAR_15 = FUNC_3(1);
 if (!VAR_15) {
  FUNC_23("UBI: block: alloc_disk failed\n");
  VAR_17 = -VAR_2;
  goto out_free_dev;
 }

 VAR_15->fops = &VAR_12;
 VAR_15->major = VAR_9;
 VAR_15->first_minor = FUNC_15(&VAR_10, VAR_14, 0, 0, VAR_4);
 if (VAR_15->first_minor < 0) {
  FUNC_11(FUNC_13(VAR_15),
   "block: dynamic minor allocation failed");
  VAR_17 = -VAR_2;
  goto out_put_disk;
 }
 VAR_15->private_data = VAR_14;
 FUNC_26(VAR_15->disk_name, "ubiblock%d_%d", VAR_14->ubi_num, VAR_14->vol_id);
 FUNC_25(VAR_15, VAR_16);
 VAR_14->gd = VAR_15;

 VAR_14->tag_set.ops = &VAR_11;
 VAR_14->tag_set.queue_depth = 64;
 VAR_14->tag_set.numa_node = VAR_5;
 VAR_14->tag_set.flags = VAR_0;
 VAR_14->tag_set.cmd_size = sizeof(struct ubiblock_pdu);
 VAR_14->tag_set.driver_data = VAR_14;
 VAR_14->tag_set.nr_hw_queues = 1;

 VAR_17 = FUNC_6(&VAR_14->tag_set);
 if (VAR_17) {
  FUNC_11(FUNC_13(VAR_14->gd), "blk_mq_alloc_tag_set failed");
  goto out_remove_minor;
 }

 VAR_14->rq = FUNC_8(&VAR_14->tag_set);
 if (FUNC_0(VAR_14->rq)) {
  FUNC_11(FUNC_13(VAR_15), "blk_mq_init_queue failed");
  VAR_17 = FUNC_1(VAR_14->rq);
  goto out_free_tags;
 }
 FUNC_9(VAR_14->rq, VAR_6);

 VAR_14->rq->queuedata = VAR_14;
 VAR_14->gd->queue = VAR_14->rq;





 VAR_14->wq = FUNC_4("%s", 0, 0, VAR_15->disk_name);
 if (!VAR_14->wq) {
  VAR_17 = -VAR_3;
  goto out_free_queue;
 }

 FUNC_19(&VAR_14->list, &VAR_8);


 FUNC_2(VAR_14->gd);
 FUNC_12(FUNC_13(VAR_14->gd), "created from ubi%d:%d(%s)",
   VAR_14->ubi_num, VAR_14->vol_id, VAR_13->name);
 FUNC_22(&VAR_7);
 return 0;

out_free_queue:
 FUNC_5(VAR_14->rq);
out_free_tags:
 FUNC_7(&VAR_14->tag_set);
out_remove_minor:
 FUNC_16(&VAR_10, VAR_15->first_minor);
out_put_disk:
 FUNC_24(VAR_14->gd);
out_free_dev:
 FUNC_17(VAR_14);
out_unlock:
 FUNC_22(&VAR_7);

 return VAR_17;
}
