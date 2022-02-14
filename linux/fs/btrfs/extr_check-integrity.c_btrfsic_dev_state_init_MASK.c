
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int is_iodone; struct btrfsic_dev_state* dev_state; } ;
struct btrfsic_dev_state {char* name; TYPE_1__ dummy_block_for_bio_bh_flush; scalar_t__ last_flush_gen; int collision_resolving_node; int * state; int * bdev; int magic_num; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(struct btrfsic_dev_state *VAR_1)
{
 VAR_1->magic_num = VAR_0;
 VAR_1->bdev = ((void*)0);
 VAR_1->state = ((void*)0);
 VAR_1->name[0] = '\0';
 FUNC_0(&VAR_1->collision_resolving_node);
 VAR_1->last_flush_gen = 0;
 FUNC_1(&VAR_1->dummy_block_for_bio_bh_flush);
 VAR_1->dummy_block_for_bio_bh_flush.is_iodone = 1;
 VAR_1->dummy_block_for_bio_bh_flush.dev_state = VAR_1;
}
