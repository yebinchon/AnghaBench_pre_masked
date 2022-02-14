
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct btrfs_super_block {int dummy; } ;
struct btrfs_fs_info {struct btrfs_super_block* super_copy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct btrfs_super_block*) ;
 int FUNC_1 (struct btrfs_super_block*) ;
 int FUNC_2 (struct btrfs_fs_info*,int) ;

int FUNC_3(struct btrfs_fs_info *VAR_5)
{
 struct btrfs_super_block *VAR_6;
 u64 VAR_7;
 u64 VAR_8;
 int VAR_9 = 0;
 int VAR_10;

 VAR_6 = VAR_5->super_copy;
 if (!FUNC_1(VAR_6))
  return -VAR_4;

 VAR_7 = FUNC_0(VAR_6);
 if (VAR_7 & VAR_3)
  VAR_9 = 1;

 VAR_8 = VAR_2;
 VAR_10 = FUNC_2(VAR_5, VAR_8);
 if (VAR_10)
  goto out;

 if (VAR_9) {
  VAR_8 = VAR_1 | VAR_0;
  VAR_10 = FUNC_2(VAR_5, VAR_8);
 } else {
  VAR_8 = VAR_1;
  VAR_10 = FUNC_2(VAR_5, VAR_8);
  if (VAR_10)
   goto out;

  VAR_8 = VAR_0;
  VAR_10 = FUNC_2(VAR_5, VAR_8);
 }
out:
 return VAR_10;
}
