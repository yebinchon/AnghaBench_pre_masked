
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_fs_info {unsigned long mount_opt; int fs_state; int sb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct btrfs_fs_info*) ;
 scalar_t__ FUNC_1 (unsigned long,int ) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static inline void FUNC_4(struct btrfs_fs_info *VAR_2,
      unsigned long VAR_3)
{




 if (FUNC_1(VAR_3, VAR_0) &&
     (!FUNC_1(VAR_2->mount_opt, VAR_0) || FUNC_3(VAR_2->sb))) {
  FUNC_0(VAR_2);
 }

 FUNC_2(VAR_1, &VAR_2->fs_state);
}
