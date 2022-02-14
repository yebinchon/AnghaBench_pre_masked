
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct extent_state {int dummy; } ;
struct extent_io_tree {int dummy; } ;
struct btrfs_fs_info {TYPE_2__* btree_inode; } ;
struct address_space {int dummy; } ;
struct TYPE_4__ {struct address_space* i_mapping; } ;
struct TYPE_3__ {int sync_writers; } ;


 TYPE_1__* FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (struct extent_io_tree*,scalar_t__,scalar_t__,int ,int,struct extent_state**) ;
 int FUNC_5 (struct address_space*,scalar_t__,scalar_t__) ;
 int FUNC_6 (struct address_space*,scalar_t__,scalar_t__) ;
 int FUNC_7 (struct extent_io_tree*,scalar_t__,scalar_t__*,scalar_t__*,int,struct extent_state**) ;
 int FUNC_8 (struct extent_state*) ;

int FUNC_9(struct btrfs_fs_info *VAR_2,
          struct extent_io_tree *VAR_3, int VAR_4)
{
 int VAR_5 = 0;
 int VAR_6 = 0;
 struct address_space *VAR_7 = VAR_2->btree_inode->i_mapping;
 struct extent_state *VAR_8 = ((void*)0);
 u64 VAR_9 = 0;
 u64 VAR_10;

 FUNC_2(&FUNC_0(VAR_2->btree_inode)->sync_writers);
 while (!FUNC_7(VAR_3, VAR_9, &VAR_9, &VAR_10,
          VAR_4, &VAR_8)) {
  bool VAR_11 = 0;

  VAR_5 = FUNC_4(VAR_3, VAR_9, VAR_10,
      VAR_1,
      VAR_4, &VAR_8);
  if (VAR_5 == -VAR_0) {
   VAR_5 = 0;
   VAR_11 = 1;
  }
  if (!VAR_5)
   VAR_5 = FUNC_6(VAR_7, VAR_9, VAR_10);
  if (VAR_5)
   VAR_6 = VAR_5;
  else if (VAR_11)
   VAR_6 = FUNC_5(VAR_7, VAR_9, VAR_10);
  FUNC_8(VAR_8);
  VAR_8 = ((void*)0);
  FUNC_3();
  VAR_9 = VAR_10 + 1;
 }
 FUNC_1(&FUNC_0(VAR_2->btree_inode)->sync_writers);
 return VAR_6;
}
