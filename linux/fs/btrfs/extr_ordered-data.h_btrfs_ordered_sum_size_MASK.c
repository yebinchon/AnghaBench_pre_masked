
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_ordered_sum {int dummy; } ;
struct btrfs_fs_info {int super_copy; int sectorsize; } ;


 scalar_t__ FUNC_0 (unsigned long,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline int FUNC_2(struct btrfs_fs_info *VAR_0,
      unsigned long VAR_1)
{
 int VAR_2 = (int)FUNC_0(VAR_1, VAR_0->sectorsize);
 int VAR_3 = FUNC_1(VAR_0->super_copy);

 return sizeof(struct btrfs_ordered_sum) + VAR_2 * VAR_3;
}
