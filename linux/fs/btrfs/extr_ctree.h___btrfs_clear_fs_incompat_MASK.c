
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct btrfs_super_block {int dummy; } ;
struct btrfs_fs_info {int super_lock; struct btrfs_super_block* super_copy; } ;


 int FUNC_0 (struct btrfs_fs_info*,char*,char const*,int) ;
 int FUNC_1 (struct btrfs_super_block*,int) ;
 int FUNC_2 (struct btrfs_super_block*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static inline void FUNC_5(struct btrfs_fs_info *VAR_0,
          u64 VAR_1, const char* VAR_2)
{
 struct btrfs_super_block *VAR_3;
 u64 VAR_4;

 VAR_3 = VAR_0->super_copy;
 VAR_4 = FUNC_2(VAR_3);
 if (VAR_4 & VAR_1) {
  FUNC_3(&VAR_0->super_lock);
  VAR_4 = FUNC_2(VAR_3);
  if (VAR_4 & VAR_1) {
   VAR_4 &= ~VAR_1;
   FUNC_1(VAR_3, VAR_4);
   FUNC_0(VAR_0,
    "clearing incompat feature flag for %s (0x%llx)",
    VAR_2, VAR_1);
  }
  FUNC_4(&VAR_0->super_lock);
 }
}
