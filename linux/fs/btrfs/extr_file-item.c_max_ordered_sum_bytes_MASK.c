
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct btrfs_ordered_sum {int dummy; } ;
struct btrfs_fs_info {int sectorsize; } ;


 int VAR_0 ;

__attribute__((used)) static inline u32 FUNC_0(struct btrfs_fs_info *VAR_1,
     u16 VAR_2)
{
 u32 VAR_3 = (VAR_0 - sizeof(struct btrfs_ordered_sum)) / VAR_2;

 return VAR_3 * VAR_1->sectorsize;
}
