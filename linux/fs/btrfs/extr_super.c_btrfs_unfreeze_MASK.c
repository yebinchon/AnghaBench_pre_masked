
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct btrfs_fs_info {int flags; } ;


 int VAR_0 ;
 struct btrfs_fs_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(struct super_block *VAR_1)
{
 struct btrfs_fs_info *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(VAR_0, &VAR_2->flags);
 return 0;
}
