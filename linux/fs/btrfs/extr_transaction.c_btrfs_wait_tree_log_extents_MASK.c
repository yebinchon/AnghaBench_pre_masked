
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct extent_io_tree {int dummy; } ;
struct TYPE_2__ {scalar_t__ objectid; } ;
struct btrfs_root {TYPE_1__ root_key; struct extent_io_tree dirty_log_pages; struct btrfs_fs_info* fs_info; } ;
struct btrfs_fs_info {int flags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct btrfs_fs_info*,struct extent_io_tree*) ;
 scalar_t__ FUNC_2 (int ,int *) ;

int FUNC_3(struct btrfs_root *VAR_6, int VAR_7)
{
 struct btrfs_fs_info *VAR_8 = VAR_6->fs_info;
 struct extent_io_tree *VAR_9 = &VAR_6->dirty_log_pages;
 bool VAR_10 = 0;
 int VAR_11;

 FUNC_0(VAR_6->root_key.objectid == VAR_2);

 VAR_11 = FUNC_1(VAR_8, VAR_9);
 if ((VAR_7 & VAR_4) &&
     FUNC_2(VAR_0, &VAR_8->flags))
  VAR_10 = 1;

 if ((VAR_7 & VAR_5) &&
     FUNC_2(VAR_1, &VAR_8->flags))
  VAR_10 = 1;

 if (VAR_10 && !VAR_11)
  VAR_11 = -VAR_3;
 return VAR_11;
}
