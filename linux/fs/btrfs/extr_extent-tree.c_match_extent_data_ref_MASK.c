
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct extent_buffer {int dummy; } ;
struct btrfs_extent_data_ref {int dummy; } ;


 scalar_t__ FUNC_0 (struct extent_buffer*,struct btrfs_extent_data_ref*) ;
 scalar_t__ FUNC_1 (struct extent_buffer*,struct btrfs_extent_data_ref*) ;
 scalar_t__ FUNC_2 (struct extent_buffer*,struct btrfs_extent_data_ref*) ;

__attribute__((used)) static int FUNC_3(struct extent_buffer *VAR_0,
     struct btrfs_extent_data_ref *VAR_1,
     u64 VAR_2, u64 VAR_3, u64 VAR_4)
{
 if (FUNC_2(VAR_0, VAR_1) != VAR_2 ||
     FUNC_0(VAR_0, VAR_1) != VAR_3 ||
     FUNC_1(VAR_0, VAR_1) != VAR_4)
  return 0;
 return 1;
}
