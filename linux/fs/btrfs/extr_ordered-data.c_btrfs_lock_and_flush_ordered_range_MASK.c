
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct extent_state {int refs; } ;
struct extent_io_tree {int dummy; } ;
struct btrfs_ordered_extent {int dummy; } ;
struct btrfs_inode {int vfs_inode; } ;


 struct btrfs_ordered_extent* FUNC_0 (struct btrfs_inode*,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct btrfs_ordered_extent*) ;
 int FUNC_2 (int *,struct btrfs_ordered_extent*,int) ;
 int FUNC_3 (struct extent_io_tree*,scalar_t__,scalar_t__,struct extent_state**) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct extent_io_tree*,scalar_t__,scalar_t__,struct extent_state**) ;

void FUNC_6(struct extent_io_tree *VAR_0,
     struct btrfs_inode *VAR_1, u64 VAR_2,
     u64 VAR_3,
     struct extent_state **VAR_4)
{
 struct btrfs_ordered_extent *VAR_5;
 struct extent_state *VAR_6 = ((void*)0);
 struct extent_state **VAR_7 = &VAR_6;

 if (VAR_4)
  VAR_7 = VAR_4;

 while (1) {
  FUNC_3(VAR_0, VAR_2, VAR_3, VAR_7);
  VAR_5 = FUNC_0(VAR_1, VAR_2,
           VAR_3 - VAR_2 + 1);
  if (!VAR_5) {





   if (!VAR_4)
    FUNC_4(&VAR_6->refs);
   break;
  }
  FUNC_5(VAR_0, VAR_2, VAR_3, VAR_7);
  FUNC_2(&VAR_1->vfs_inode, VAR_5, 1);
  FUNC_1(VAR_5);
 }
}
