
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_free_cluster {int fragmented; int * block_group; int block_group_list; scalar_t__ max_size; int root; int refill_lock; int lock; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;

void FUNC_2(struct btrfs_free_cluster *VAR_1)
{
 FUNC_1(&VAR_1->lock);
 FUNC_1(&VAR_1->refill_lock);
 VAR_1->root = VAR_0;
 VAR_1->max_size = 0;
 VAR_1->fragmented = 0;
 FUNC_0(&VAR_1->block_group_list);
 VAR_1->block_group = ((void*)0);
}
