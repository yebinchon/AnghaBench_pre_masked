
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct btrfs_header {int dummy; } ;
struct btrfs_fs_info {scalar_t__ nodesize; } ;



__attribute__((used)) static inline u32 FUNC_0(const struct btrfs_fs_info *VAR_0)
{

 return VAR_0->nodesize - sizeof(struct btrfs_header);
}
