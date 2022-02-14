
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct compressed_bio {int dummy; } ;
struct btrfs_fs_info {int sectorsize; int super_copy; } ;


 int FUNC_0 (unsigned long,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline int FUNC_2(struct btrfs_fs_info *VAR_0,
          unsigned long VAR_1)
{
 u16 VAR_2 = FUNC_1(VAR_0->super_copy);

 return sizeof(struct compressed_bio) +
  (FUNC_0(VAR_1, VAR_0->sectorsize)) * VAR_2;
}
