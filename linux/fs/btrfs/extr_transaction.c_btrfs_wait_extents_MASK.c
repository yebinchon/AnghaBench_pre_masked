
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct extent_io_tree {int dummy; } ;
struct btrfs_fs_info {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct btrfs_fs_info*,struct extent_io_tree*) ;
 scalar_t__ FUNC_1 (int ,int *) ;

int FUNC_2(struct btrfs_fs_info *VAR_2,
         struct extent_io_tree *VAR_3)
{
 bool VAR_4 = 0;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2, VAR_3);
 if (FUNC_1(VAR_0, &VAR_2->flags))
  VAR_4 = 1;

 if (VAR_4 && !VAR_5)
  VAR_5 = -VAR_1;
 return VAR_5;
}
