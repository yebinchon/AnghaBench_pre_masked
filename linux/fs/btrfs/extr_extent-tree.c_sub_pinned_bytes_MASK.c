
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct btrfs_space_info {int total_bytes_pinned; } ;
struct btrfs_ref {int len; } ;
struct btrfs_fs_info {int dummy; } ;


 int FUNC_0 (struct btrfs_space_info*) ;
 int VAR_0 ;
 struct btrfs_space_info* FUNC_1 (struct btrfs_fs_info*,int ) ;
 int FUNC_2 (struct btrfs_ref*) ;
 int FUNC_3 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct btrfs_fs_info *VAR_1,
        struct btrfs_ref *VAR_2)
{
 struct btrfs_space_info *VAR_3;
 u64 VAR_4 = FUNC_2(VAR_2);

 VAR_3 = FUNC_1(VAR_1, VAR_4);
 FUNC_0(VAR_3);
 FUNC_3(&VAR_3->total_bytes_pinned, -VAR_2->len,
      VAR_0);
}
