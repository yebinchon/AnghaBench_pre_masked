
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u64 ;
struct btrfs_fs_info {scalar_t__ nodesize; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static inline u64 FUNC_0(struct btrfs_fs_info *VAR_1,
       unsigned VAR_2)
{
 return (u64)VAR_1->nodesize * VAR_0 * VAR_2;
}
