
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct btrfs_fs_info {int * freed_extents; } ;


 int VAR_0 ;
 int FUNC_0 (int *,scalar_t__,scalar_t__,int ) ;

int FUNC_1(struct btrfs_fs_info *VAR_1,
         u64 VAR_2, u64 VAR_3)
{
 u64 VAR_4 = VAR_2 + VAR_3 - 1;
 FUNC_0(&VAR_1->freed_extents[0],
   VAR_2, VAR_4, VAR_0);
 FUNC_0(&VAR_1->freed_extents[1],
   VAR_2, VAR_4, VAR_0);
 return 0;
}
