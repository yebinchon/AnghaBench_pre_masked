
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct msb_data {scalar_t__ disk_id; int page_size; unsigned long pages_in_block; unsigned long logical_block_count; int usage_count; TYPE_1__* disk; scalar_t__ read_only; int prealloc_sg; int io_work; int io_queue; TYPE_5__* queue; int tag_set; } ;
struct memstick_dev {int dev; } ;
struct TYPE_14__ {struct memstick_dev* queuedata; } ;
struct TYPE_13__ {int flags; TYPE_5__* queue; struct msb_data* private_data; int * fops; int disk_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (TYPE_5__*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (TYPE_5__*) ;
 int VAR_6 ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (char*,int ) ;
 TYPE_5__* FUNC_5 (int *,int *,int,int ) ;
 int FUNC_6 (TYPE_5__*,int) ;
 int FUNC_7 (TYPE_5__*,int) ;
 int FUNC_8 (TYPE_5__*,int) ;
 int FUNC_9 (TYPE_5__*,scalar_t__) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (int *,TYPE_1__*,int *) ;
 scalar_t__ FUNC_12 (int *,struct memstick_dev*,int ,int,int ) ;
 int FUNC_13 (int *,int) ;
 struct msb_data* FUNC_14 (struct memstick_dev*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_15 (struct memstick_dev*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (TYPE_1__*) ;
 int FUNC_19 (TYPE_1__*,unsigned long) ;
 int FUNC_20 (TYPE_1__*,int) ;
 int FUNC_21 (int ,scalar_t__) ;
 int FUNC_22 (int ,char*,int) ;

__attribute__((used)) static int FUNC_23(struct memstick_dev *VAR_12)
{
 struct msb_data *VAR_13 = FUNC_14(VAR_12);
 int VAR_14;
 unsigned long VAR_15;

 FUNC_16(&VAR_9);
 VAR_13->disk_id = FUNC_12(&VAR_8, VAR_12, 0, 256, VAR_3);
 FUNC_17(&VAR_9);

 if (VAR_13->disk_id < 0)
  return VAR_13->disk_id;

 VAR_13->disk = FUNC_3(0);
 if (!VAR_13->disk) {
  VAR_14 = -VAR_1;
  goto out_release_id;
 }

 VAR_13->queue = FUNC_5(&VAR_13->tag_set, &VAR_11, 2,
      VAR_0);
 if (FUNC_1(VAR_13->queue)) {
  VAR_14 = FUNC_2(VAR_13->queue);
  VAR_13->queue = ((void*)0);
  goto out_put_disk;
 }

 VAR_13->queue->queuedata = VAR_12;

 FUNC_7(VAR_13->queue, VAR_4);
 FUNC_9(VAR_13->queue, VAR_5);
 FUNC_8(VAR_13->queue,
       VAR_4 * VAR_13->page_size);
 FUNC_6(VAR_13->queue, VAR_13->page_size);

 FUNC_22(VAR_13->disk->disk_name, "msblk%d", VAR_13->disk_id);
 VAR_13->disk->fops = &VAR_7;
 VAR_13->disk->private_data = VAR_13;
 VAR_13->disk->queue = VAR_13->queue;
 VAR_13->disk->flags |= VAR_2;

 VAR_15 = VAR_13->pages_in_block * VAR_13->logical_block_count;
 VAR_15 *= (VAR_13->page_size / 512);
 FUNC_19(VAR_13->disk, VAR_15);
 FUNC_10("Set total disk size to %lu sectors", VAR_15);

 VAR_13->usage_count = 1;
 VAR_13->io_queue = FUNC_4("ms_block", VAR_6);
 FUNC_0(&VAR_13->io_work, VAR_10);
 FUNC_21(VAR_13->prealloc_sg, VAR_5+1);

 if (VAR_13->read_only)
  FUNC_20(VAR_13->disk, 1);

 FUNC_15(VAR_12);
 FUNC_11(&VAR_12->dev, VAR_13->disk, ((void*)0));
 FUNC_10("Disk added");
 return 0;

out_put_disk:
 FUNC_18(VAR_13->disk);
out_release_id:
 FUNC_16(&VAR_9);
 FUNC_13(&VAR_8, VAR_13->disk_id);
 FUNC_17(&VAR_9);
 return VAR_14;
}
