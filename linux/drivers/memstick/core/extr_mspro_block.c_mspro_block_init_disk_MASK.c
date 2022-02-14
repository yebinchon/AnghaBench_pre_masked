
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct mspro_sys_info {int block_size; int user_block_count; int unit_size; int sectors_per_track; int heads; int cylinders; } ;
struct mspro_sys_attr {scalar_t__ id; struct mspro_sys_info* data; } ;
struct mspro_devinfo {int block_size; int user_block_count; int unit_size; int sectors_per_track; int heads; int cylinders; } ;
struct TYPE_13__ {scalar_t__* attrs; } ;
struct mspro_block_data {unsigned long cylinders; unsigned long heads; unsigned long sectors_per_track; unsigned long page_size; int usage_count; int active; TYPE_2__* disk; TYPE_5__* queue; int tag_set; TYPE_1__ attr_group; } ;
struct memstick_dev {int dev; } ;
struct TYPE_15__ {struct memstick_dev* queuedata; } ;
struct TYPE_14__ {int first_minor; int disk_name; TYPE_5__* queue; struct mspro_block_data* private_data; int * fops; int major; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_5__*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (TYPE_5__*) ;
 TYPE_2__* FUNC_2 (int) ;
 unsigned long FUNC_3 (int ) ;
 TYPE_5__* FUNC_4 (int *,int *,int,int ) ;
 int FUNC_5 (TYPE_5__*,int) ;
 int FUNC_6 (TYPE_5__*,int) ;
 int FUNC_7 (TYPE_5__*,int) ;
 int FUNC_8 (TYPE_5__*,int ) ;
 int FUNC_9 (int *,char*,unsigned long) ;
 int FUNC_10 (int *,TYPE_2__*,int *) ;
 int FUNC_11 (int *,struct memstick_dev*,int ,int,int ) ;
 int FUNC_12 (int *,int) ;
 int VAR_9 ;
 struct mspro_block_data* FUNC_13 (struct memstick_dev*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct mspro_sys_attr* FUNC_14 (scalar_t__) ;
 int VAR_13 ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (TYPE_2__*) ;
 int FUNC_18 (TYPE_2__*,unsigned long) ;
 int FUNC_19 (int ,char*,int) ;

__attribute__((used)) static int FUNC_20(struct memstick_dev *VAR_14)
{
 struct mspro_block_data *VAR_15 = FUNC_13(VAR_14);
 struct mspro_devinfo *VAR_16 = ((void*)0);
 struct mspro_sys_info *VAR_17 = ((void*)0);
 struct mspro_sys_attr *VAR_18 = ((void*)0);
 int VAR_19, VAR_20;
 unsigned long VAR_21;

 for (VAR_19 = 0; VAR_15->attr_group.attrs[VAR_19]; ++VAR_19) {
  VAR_18 = FUNC_14(VAR_15->attr_group.attrs[VAR_19]);

  if (VAR_18->id == VAR_4)
   VAR_16 = VAR_18->data;
  else if (VAR_18->id == VAR_5)
   VAR_17 = VAR_18->data;
 }

 if (!VAR_16 || !VAR_17)
  return -VAR_1;

 VAR_15->cylinders = FUNC_3(VAR_16->cylinders);
 VAR_15->heads = FUNC_3(VAR_16->heads);
 VAR_15->sectors_per_track = FUNC_3(VAR_16->sectors_per_track);

 VAR_15->page_size = FUNC_3(VAR_17->unit_size);

 FUNC_15(&VAR_12);
 VAR_20 = FUNC_11(&VAR_11, VAR_14, 0, 256, VAR_3);
 FUNC_16(&VAR_12);
 if (VAR_20 < 0)
  return VAR_20;

 VAR_15->disk = FUNC_2(1 << VAR_8);
 if (!VAR_15->disk) {
  VAR_19 = -VAR_2;
  goto out_release_id;
 }

 VAR_15->queue = FUNC_4(&VAR_15->tag_set, &VAR_13, 2,
      VAR_0);
 if (FUNC_0(VAR_15->queue)) {
  VAR_19 = FUNC_1(VAR_15->queue);
  VAR_15->queue = ((void*)0);
  goto out_put_disk;
 }

 VAR_15->queue->queuedata = VAR_14;

 FUNC_6(VAR_15->queue, VAR_6);
 FUNC_8(VAR_15->queue, VAR_7);
 FUNC_7(VAR_15->queue,
       VAR_6 * VAR_15->page_size);

 VAR_15->disk->major = VAR_9;
 VAR_15->disk->first_minor = VAR_20 << VAR_8;
 VAR_15->disk->fops = &VAR_10;
 VAR_15->usage_count = 1;
 VAR_15->disk->private_data = VAR_15;
 VAR_15->disk->queue = VAR_15->queue;

 FUNC_19(VAR_15->disk->disk_name, "mspblk%d", VAR_20);

 FUNC_5(VAR_15->queue, VAR_15->page_size);

 VAR_21 = FUNC_3(VAR_17->user_block_count);
 VAR_21 *= FUNC_3(VAR_17->block_size);
 VAR_21 *= VAR_15->page_size >> 9;
 FUNC_18(VAR_15->disk, VAR_21);
 FUNC_9(&VAR_14->dev, "capacity set %ld\n", VAR_21);

 FUNC_10(&VAR_14->dev, VAR_15->disk, ((void*)0));
 VAR_15->active = 1;
 return 0;

out_put_disk:
 FUNC_17(VAR_15->disk);
out_release_id:
 FUNC_15(&VAR_12);
 FUNC_12(&VAR_11, VAR_20);
 FUNC_16(&VAR_12);
 return VAR_19;
}
