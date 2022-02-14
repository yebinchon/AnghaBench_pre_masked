
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct extent_buffer {int dummy; } ;
struct btrfs_fs_info {int dummy; } ;


 struct extent_buffer* FUNC_0 (struct btrfs_fs_info*,int ) ;
 struct extent_buffer* FUNC_1 (struct btrfs_fs_info*,int ) ;
 scalar_t__ FUNC_2 (struct btrfs_fs_info*) ;

struct extent_buffer *FUNC_3(
      struct btrfs_fs_info *VAR_0,
      u64 VAR_1)
{
 if (FUNC_2(VAR_0))
  return FUNC_1(VAR_0, VAR_1);
 return FUNC_0(VAR_0, VAR_1);
}
