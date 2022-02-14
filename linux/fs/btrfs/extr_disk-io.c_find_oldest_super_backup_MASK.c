
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct btrfs_fs_info {int backup_root_index; } ;


 int VAR_0 ;
 int FUNC_0 (struct btrfs_fs_info*,int ) ;

__attribute__((used)) static void FUNC_1(struct btrfs_fs_info *VAR_1,
         u64 VAR_2)
{
 int VAR_3 = -1;

 VAR_3 = FUNC_0(VAR_1, VAR_2);

 if (VAR_3 == -1) {
  VAR_1->backup_root_index = 0;
 } else {
  VAR_1->backup_root_index = (VAR_3 + 1) % VAR_0;
 }
}
