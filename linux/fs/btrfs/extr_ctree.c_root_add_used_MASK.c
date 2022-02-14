
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct btrfs_root {int accounting_lock; int root_item; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct btrfs_root *VAR_0, u32 VAR_1)
{
 FUNC_2(&VAR_0->accounting_lock);
 FUNC_1(&VAR_0->root_item,
       FUNC_0(&VAR_0->root_item) + VAR_1);
 FUNC_3(&VAR_0->accounting_lock);
}
