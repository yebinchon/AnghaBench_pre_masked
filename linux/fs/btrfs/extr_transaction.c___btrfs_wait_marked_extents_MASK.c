
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct extent_state {int dummy; } ;
struct extent_io_tree {int dummy; } ;
struct btrfs_fs_info {TYPE_1__* btree_inode; } ;
struct address_space {int dummy; } ;
struct TYPE_2__ {struct address_space* i_mapping; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct extent_io_tree*,scalar_t__,scalar_t__,int ,int ,int ,struct extent_state**) ;
 int FUNC_1 () ;
 int FUNC_2 (struct address_space*,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct extent_io_tree*,scalar_t__,scalar_t__*,scalar_t__*,int ,struct extent_state**) ;
 int FUNC_4 (struct extent_state*) ;

__attribute__((used)) static int FUNC_5(struct btrfs_fs_info *VAR_2,
           struct extent_io_tree *VAR_3)
{
 int VAR_4 = 0;
 int VAR_5 = 0;
 struct address_space *VAR_6 = VAR_2->btree_inode->i_mapping;
 struct extent_state *VAR_7 = ((void*)0);
 u64 VAR_8 = 0;
 u64 VAR_9;

 while (!FUNC_3(VAR_3, VAR_8, &VAR_8, &VAR_9,
          VAR_1, &VAR_7)) {
  VAR_4 = FUNC_0(VAR_3, VAR_8, VAR_9,
           VAR_1, 0, 0, &VAR_7);
  if (VAR_4 == -VAR_0)
   VAR_4 = 0;
  if (!VAR_4)
   VAR_4 = FUNC_2(VAR_6, VAR_8, VAR_9);
  if (VAR_4)
   VAR_5 = VAR_4;
  FUNC_4(VAR_7);
  VAR_7 = ((void*)0);
  FUNC_1();
  VAR_8 = VAR_9 + 1;
 }
 if (VAR_4)
  VAR_5 = VAR_4;
 return VAR_5;
}
