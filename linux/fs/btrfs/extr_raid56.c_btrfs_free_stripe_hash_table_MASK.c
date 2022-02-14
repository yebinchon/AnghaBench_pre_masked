
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_fs_info {int * stripe_hash_table; } ;


 int FUNC_0 (struct btrfs_fs_info*) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct btrfs_fs_info *VAR_0)
{
 if (!VAR_0->stripe_hash_table)
  return;
 FUNC_0(VAR_0);
 FUNC_1(VAR_0->stripe_hash_table);
 VAR_0->stripe_hash_table = ((void*)0);
}
