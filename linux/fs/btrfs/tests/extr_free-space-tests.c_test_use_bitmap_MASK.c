
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_free_space_ctl {scalar_t__ free_extents; } ;
struct btrfs_free_space {int dummy; } ;



__attribute__((used)) static bool FUNC_0(struct btrfs_free_space_ctl *VAR_0,
       struct btrfs_free_space *VAR_1)
{
 return VAR_0->free_extents > 0;
}
