
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_qgroup_swapped_blocks {int swapped; int * blocks; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;

void FUNC_1(
 struct btrfs_qgroup_swapped_blocks *VAR_2)
{
 int VAR_3;

 FUNC_0(&VAR_2->lock);
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  VAR_2->blocks[VAR_3] = VAR_1;
 VAR_2->swapped = 0;
}
