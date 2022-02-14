
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct btrfs_fs_info {int avail_data_alloc_bits; int avail_system_alloc_bits; int avail_metadata_alloc_bits; int profiles_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct btrfs_fs_info*,int) ;
 unsigned int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,unsigned int) ;

__attribute__((used)) static u64 FUNC_3(struct btrfs_fs_info *VAR_3, u64 VAR_4)
{
 unsigned VAR_5;
 u64 VAR_6;

 do {
  VAR_6 = VAR_4;
  VAR_5 = FUNC_1(&VAR_3->profiles_lock);

  if (VAR_6 & VAR_0)
   VAR_6 |= VAR_3->avail_data_alloc_bits;
  else if (VAR_6 & VAR_2)
   VAR_6 |= VAR_3->avail_system_alloc_bits;
  else if (VAR_6 & VAR_1)
   VAR_6 |= VAR_3->avail_metadata_alloc_bits;
 } while (FUNC_2(&VAR_3->profiles_lock, VAR_5));

 return FUNC_0(VAR_3, VAR_6);
}
