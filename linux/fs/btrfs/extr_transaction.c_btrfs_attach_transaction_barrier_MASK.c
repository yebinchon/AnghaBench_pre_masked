
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {int fs_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct btrfs_trans_handle* FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 struct btrfs_trans_handle* FUNC_2 (struct btrfs_root*,int ,int ,int ,int) ;

struct btrfs_trans_handle *
FUNC_3(struct btrfs_root *VAR_3)
{
 struct btrfs_trans_handle *VAR_4;

 VAR_4 = FUNC_2(VAR_3, 0, VAR_2,
      VAR_0, 1);
 if (VAR_4 == FUNC_0(-VAR_1))
  FUNC_1(VAR_3->fs_info, 0);

 return VAR_4;
}
