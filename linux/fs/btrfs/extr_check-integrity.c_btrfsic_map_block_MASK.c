
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u64 ;
typedef void* u32 ;
struct btrfsic_state {struct btrfs_fs_info* fs_info; } ;
struct btrfsic_block_data_ctx {int * dev; int * mem_to_free; int * pagev; int * datav; void* len; void* start; int dev_bytenr; } ;
struct btrfs_fs_info {int dummy; } ;
struct btrfs_device {TYPE_1__* bdev; int name; int dev_state; } ;
struct btrfs_bio {TYPE_2__* stripes; } ;
struct TYPE_4__ {int physical; struct btrfs_device* dev; } ;
struct TYPE_3__ {int bd_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct btrfs_fs_info*,int ,void*,void**,struct btrfs_bio**,int) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (struct btrfs_bio*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct btrfsic_state *VAR_3, u64 VAR_4, u32 VAR_5,
        struct btrfsic_block_data_ctx *VAR_6,
        int VAR_7)
{
 struct btrfs_fs_info *VAR_8 = VAR_3->fs_info;
 int VAR_9;
 u64 VAR_10;
 struct btrfs_bio *VAR_11 = ((void*)0);
 struct btrfs_device *VAR_12;

 VAR_10 = VAR_5;
 VAR_9 = FUNC_0(VAR_8, VAR_1,
         VAR_4, &VAR_10, &VAR_11, VAR_7);

 if (VAR_9) {
  VAR_6->start = 0;
  VAR_6->dev_bytenr = 0;
  VAR_6->len = 0;
  VAR_6->dev = ((void*)0);
  VAR_6->datav = ((void*)0);
  VAR_6->pagev = ((void*)0);
  VAR_6->mem_to_free = ((void*)0);

  return VAR_9;
 }

 VAR_12 = VAR_11->stripes[0].dev;
 if (FUNC_4(VAR_0, &VAR_12->dev_state) ||
     !VAR_12->bdev || !VAR_12->name)
  VAR_6->dev = ((void*)0);
 else
  VAR_6->dev = FUNC_1(
       VAR_12->bdev->bd_dev);
 VAR_6->dev_bytenr = VAR_11->stripes[0].physical;
 VAR_6->start = VAR_4;
 VAR_6->len = VAR_5;
 VAR_6->datav = ((void*)0);
 VAR_6->pagev = ((void*)0);
 VAR_6->mem_to_free = ((void*)0);

 FUNC_2(VAR_11);
 if (((void*)0) == VAR_6->dev) {
  VAR_9 = -VAR_2;
  FUNC_3("btrfsic: error, cannot lookup dev (#1)!\n");
 }

 return VAR_9;
}
