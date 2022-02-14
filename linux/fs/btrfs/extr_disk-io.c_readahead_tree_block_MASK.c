
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct extent_buffer {int dummy; } ;
struct btrfs_fs_info {int dummy; } ;


 scalar_t__ FUNC_0 (struct extent_buffer*) ;
 int VAR_0 ;
 struct extent_buffer* FUNC_1 (struct btrfs_fs_info*,int ) ;
 int FUNC_2 (struct extent_buffer*) ;
 int FUNC_3 (struct extent_buffer*) ;
 int FUNC_4 (struct extent_buffer*,int ,int ) ;

void FUNC_5(struct btrfs_fs_info *VAR_1, u64 VAR_2)
{
 struct extent_buffer *VAR_3 = ((void*)0);
 int VAR_4;

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (FUNC_0(VAR_3))
  return;

 VAR_4 = FUNC_4(VAR_3, VAR_0, 0);
 if (VAR_4 < 0)
  FUNC_3(VAR_3);
 else
  FUNC_2(VAR_3);
}
