
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct btrfsic_state {int print_mask; int block_hashtable; int all_blocks_list; } ;
struct btrfsic_dev_state {int name; } ;
struct btrfsic_block_data_ctx {int start; int dev_bytenr; TYPE_1__* dev; } ;
struct btrfsic_block {int is_metadata; int is_iodone; int never_written; int mirror_num; int all_blocks_node; int dev_bytenr; int logical_bytenr; struct btrfsic_dev_state* dev_state; } ;
struct TYPE_4__ {int bd_dev; } ;
struct TYPE_3__ {TYPE_2__* bdev; } ;


 int VAR_0 ;
 struct btrfsic_block* FUNC_0 () ;
 int FUNC_1 (struct btrfsic_block*) ;
 int FUNC_2 (struct btrfsic_block*,int *) ;
 struct btrfsic_block* FUNC_3 (TYPE_2__*,int ,int *) ;
 struct btrfsic_dev_state* FUNC_4 (int ) ;
 int FUNC_5 (struct btrfsic_state*,struct btrfsic_block*) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (char*,...) ;

__attribute__((used)) static struct btrfsic_block *FUNC_8(
  struct btrfsic_state *VAR_1,
  struct btrfsic_block_data_ctx *VAR_2,
  const char *VAR_3,
  int VAR_4,
  int VAR_5,
  int VAR_6,
  int VAR_7,
  int *VAR_8)
{
 struct btrfsic_block *VAR_9;

 VAR_9 = FUNC_3(VAR_2->dev->bdev,
            VAR_2->dev_bytenr,
            &VAR_1->block_hashtable);
 if (((void*)0) == VAR_9) {
  struct btrfsic_dev_state *VAR_10;

  VAR_9 = FUNC_0();
  if (((void*)0) == VAR_9) {
   FUNC_7("btrfsic: error, kmalloc failed!\n");
   return ((void*)0);
  }
  VAR_10 = FUNC_4(VAR_2->dev->bdev->bd_dev);
  if (((void*)0) == VAR_10) {
   FUNC_7("btrfsic: error, lookup dev_state failed!\n");
   FUNC_1(VAR_9);
   return ((void*)0);
  }
  VAR_9->dev_state = VAR_10;
  VAR_9->dev_bytenr = VAR_2->dev_bytenr;
  VAR_9->logical_bytenr = VAR_2->start;
  VAR_9->is_metadata = VAR_4;
  VAR_9->is_iodone = VAR_5;
  VAR_9->never_written = VAR_6;
  VAR_9->mirror_num = VAR_7;
  if (VAR_1->print_mask & VAR_0)
   FUNC_7("New %s%c-block @%llu (%s/%llu/%d)\n",
          VAR_3,
          FUNC_5(VAR_1, VAR_9),
          VAR_9->logical_bytenr, VAR_10->name,
          VAR_9->dev_bytenr, VAR_7);
  FUNC_6(&VAR_9->all_blocks_node, &VAR_1->all_blocks_list);
  FUNC_2(VAR_9, &VAR_1->block_hashtable);
  if (((void*)0) != VAR_8)
   *VAR_8 = 1;
 } else {
  if (((void*)0) != VAR_8)
   *VAR_8 = 0;
 }

 return VAR_9;
}
