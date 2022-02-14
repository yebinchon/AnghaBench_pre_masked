
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct extent_buffer {int dummy; } ;
struct btrfs_key {int dummy; } ;
struct btrfs_fs_info {int dummy; } ;


 struct extent_buffer* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct extent_buffer*) ;
 int FUNC_2 (struct extent_buffer*,int ,int,struct btrfs_key*) ;
 struct extent_buffer* FUNC_3 (struct btrfs_fs_info*,int ) ;
 int FUNC_4 (struct extent_buffer*) ;

struct extent_buffer *FUNC_5(struct btrfs_fs_info *VAR_0, u64 VAR_1,
          u64 VAR_2, int VAR_3,
          struct btrfs_key *VAR_4)
{
 struct extent_buffer *VAR_5 = ((void*)0);
 int VAR_6;

 VAR_5 = FUNC_3(VAR_0, VAR_1);
 if (FUNC_1(VAR_5))
  return VAR_5;

 VAR_6 = FUNC_2(VAR_5, VAR_2,
          VAR_3, VAR_4);
 if (VAR_6) {
  FUNC_4(VAR_5);
  return FUNC_0(VAR_6);
 }
 return VAR_5;

}
