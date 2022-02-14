
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_work {scalar_t__ flags; int ordered_list; int normal_work; void* ordered_free; void* ordered_func; void* func; } ;
typedef int btrfs_work_func_t ;
typedef void* btrfs_func_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;

void FUNC_2(struct btrfs_work *VAR_0, btrfs_work_func_t VAR_1,
       btrfs_func_t VAR_2,
       btrfs_func_t VAR_3,
       btrfs_func_t VAR_4)
{
 VAR_0->func = VAR_2;
 VAR_0->ordered_func = VAR_3;
 VAR_0->ordered_free = VAR_4;
 FUNC_1(&VAR_0->normal_work, VAR_1);
 FUNC_0(&VAR_0->ordered_list);
 VAR_0->flags = 0;
}
