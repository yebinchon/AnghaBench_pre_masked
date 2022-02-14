
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btrfs_block_group_cache {TYPE_1__* free_space_ctl; } ;
struct TYPE_2__ {int const free_extents; int const total_bitmaps; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int const,int const) ;

__attribute__((used)) static int
FUNC_1(const struct btrfs_block_group_cache *VAR_1,
         const int VAR_2,
         const int VAR_3)
{
 if (VAR_1->free_space_ctl->free_extents != VAR_2) {
  FUNC_0(
  "incorrect # of extent entries in the cache: %d, expected %d",
    VAR_1->free_space_ctl->free_extents, VAR_2);
  return -VAR_0;
 }
 if (VAR_1->free_space_ctl->total_bitmaps != VAR_3) {
  FUNC_0(
  "incorrect # of extent entries in the cache: %d, expected %d",
    VAR_1->free_space_ctl->total_bitmaps, VAR_3);
  return -VAR_0;
 }
 return 0;
}
