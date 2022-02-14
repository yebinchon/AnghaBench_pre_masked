
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u64 ;
struct btrfsic_state {int print_mask; int block_link_hashtable; } ;
struct btrfsic_block_link {int ref_cnt; void* parent_generation; int node_ref_from; int node_ref_to; struct btrfsic_block* block_ref_from; struct btrfsic_block* block_ref_to; } ;
struct btrfsic_block_data_ctx {int dev_bytenr; TYPE_1__* dev; } ;
struct btrfsic_block {int ref_from_list; int ref_to_list; int dev_bytenr; TYPE_2__* dev_state; } ;
struct TYPE_4__ {int bdev; } ;
struct TYPE_3__ {int bdev; } ;


 int VAR_0 ;
 struct btrfsic_block_link* FUNC_0 () ;
 int FUNC_1 (struct btrfsic_block_link*,int *) ;
 struct btrfsic_block_link* FUNC_2 (int ,int ,int ,int ,int *) ;
 int FUNC_3 (struct btrfsic_state*,struct btrfsic_block_link*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static struct btrfsic_block_link *FUNC_6(
  struct btrfsic_state *VAR_1,
  struct btrfsic_block_data_ctx *VAR_2,
  struct btrfsic_block *VAR_3,
  struct btrfsic_block *VAR_4,
  u64 VAR_5)
{
 struct btrfsic_block_link *VAR_6;

 VAR_6 = FUNC_2(VAR_2->dev->bdev,
      VAR_2->dev_bytenr,
      VAR_4->dev_state->bdev,
      VAR_4->dev_bytenr,
      &VAR_1->block_link_hashtable);
 if (((void*)0) == VAR_6) {
  VAR_6 = FUNC_0();
  if (((void*)0) == VAR_6) {
   FUNC_5("btrfsic: error, kmalloc failed!\n");
   return ((void*)0);
  }

  VAR_6->block_ref_to = VAR_3;
  VAR_6->block_ref_from = VAR_4;
  VAR_6->ref_cnt = 1;
  VAR_6->parent_generation = VAR_5;

  if (VAR_1->print_mask & VAR_0)
   FUNC_3(VAR_1, VAR_6);

  FUNC_4(&VAR_6->node_ref_to, &VAR_4->ref_to_list);
  FUNC_4(&VAR_6->node_ref_from, &VAR_3->ref_from_list);

  FUNC_1(VAR_6,
       &VAR_1->block_link_hashtable);
 } else {
  VAR_6->ref_cnt++;
  VAR_6->parent_generation = VAR_5;
  if (VAR_1->print_mask & VAR_0)
   FUNC_3(VAR_1, VAR_6);
 }

 return VAR_6;
}
