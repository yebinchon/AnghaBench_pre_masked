
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct extent_io_tree {int dummy; } ;
struct btrfs_trans_handle {TYPE_1__* transaction; struct btrfs_fs_info* fs_info; } ;
struct btrfs_fs_info {int dummy; } ;
struct blk_plug {int dummy; } ;
struct TYPE_2__ {struct extent_io_tree dirty_pages; } ;


 int VAR_0 ;
 int FUNC_0 (struct blk_plug*) ;
 int FUNC_1 (struct blk_plug*) ;
 int FUNC_2 (struct btrfs_fs_info*,struct extent_io_tree*) ;
 int FUNC_3 (struct btrfs_fs_info*,struct extent_io_tree*,int ) ;
 int FUNC_4 (struct extent_io_tree*) ;

__attribute__((used)) static int FUNC_5(struct btrfs_trans_handle *VAR_1)
{
 int VAR_2;
 int VAR_3;
 struct extent_io_tree *VAR_4 = &VAR_1->transaction->dirty_pages;
 struct btrfs_fs_info *VAR_5 = VAR_1->fs_info;
 struct blk_plug VAR_6;

 FUNC_1(&VAR_6);
 VAR_2 = FUNC_3(VAR_5, VAR_4, VAR_0);
 FUNC_0(&VAR_6);
 VAR_3 = FUNC_2(VAR_5, VAR_4);

 FUNC_4(&VAR_1->transaction->dirty_pages);

 if (VAR_2)
  return VAR_2;
 else if (VAR_3)
  return VAR_3;
 else
  return 0;
}
