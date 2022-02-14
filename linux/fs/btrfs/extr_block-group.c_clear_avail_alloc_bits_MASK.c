
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct btrfs_fs_info {int avail_data_alloc_bits; int avail_metadata_alloc_bits; int avail_system_alloc_bits; int profiles_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct btrfs_fs_info *VAR_4, u64 VAR_5)
{
 u64 VAR_6 = FUNC_0(VAR_5) &
    VAR_3;

 FUNC_1(&VAR_4->profiles_lock);
 if (VAR_5 & VAR_0)
  VAR_4->avail_data_alloc_bits &= ~VAR_6;
 if (VAR_5 & VAR_1)
  VAR_4->avail_metadata_alloc_bits &= ~VAR_6;
 if (VAR_5 & VAR_2)
  VAR_4->avail_system_alloc_bits &= ~VAR_6;
 FUNC_2(&VAR_4->profiles_lock);
}
