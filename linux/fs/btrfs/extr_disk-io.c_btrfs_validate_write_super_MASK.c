
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_super_block {int dummy; } ;
struct btrfs_fs_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct btrfs_fs_info*,char*,...) ;
 int FUNC_1 (struct btrfs_super_block*) ;
 int FUNC_2 (struct btrfs_super_block*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct btrfs_fs_info*,struct btrfs_super_block*,int) ;

__attribute__((used)) static int FUNC_5(struct btrfs_fs_info *VAR_3,
          struct btrfs_super_block *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_4(VAR_3, VAR_4, -1);
 if (VAR_5 < 0)
  goto out;
 if (!FUNC_3(FUNC_1(VAR_4))) {
  VAR_5 = -VAR_2;
  FUNC_0(VAR_3, "invalid csum type, has %u want %u",
     FUNC_1(VAR_4), VAR_0);
  goto out;
 }
 if (FUNC_2(VAR_4) & ~VAR_1) {
  VAR_5 = -VAR_2;
  FUNC_0(VAR_3,
  "invalid incompat flags, has 0x%llx valid mask 0x%llx",
     FUNC_2(VAR_4),
     (unsigned long long)VAR_1);
  goto out;
 }
out:
 if (VAR_5 < 0)
  FUNC_0(VAR_3,
  "super block corruption detected before writing it to disk");
 return VAR_5;
}
