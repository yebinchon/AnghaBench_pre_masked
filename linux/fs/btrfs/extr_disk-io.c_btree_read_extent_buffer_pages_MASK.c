
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct extent_io_tree {int dummy; } ;
struct extent_buffer {int read_mirror; int len; int start; int bflags; struct btrfs_fs_info* fs_info; } ;
struct btrfs_key {int dummy; } ;
struct btrfs_fs_info {int btree_inode; } ;
struct TYPE_2__ {struct extent_io_tree io_tree; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct btrfs_fs_info*,int ,int ) ;
 int FUNC_2 (struct extent_buffer*,int) ;
 scalar_t__ FUNC_3 (struct extent_buffer*,int,struct btrfs_key*,int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct extent_buffer*,int ,int) ;
 scalar_t__ FUNC_6 (struct extent_io_tree*,struct extent_buffer*,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct extent_buffer *VAR_4,
       u64 VAR_5, int VAR_6,
       struct btrfs_key *VAR_7)
{
 struct btrfs_fs_info *VAR_8 = VAR_4->fs_info;
 struct extent_io_tree *VAR_9;
 int VAR_10 = 0;
 int VAR_11;
 int VAR_12 = 0;
 int VAR_13 = 0;
 int VAR_14 = 0;

 VAR_9 = &FUNC_0(VAR_8->btree_inode)->io_tree;
 while (1) {
  FUNC_4(VAR_2, &VAR_4->bflags);
  VAR_11 = FUNC_5(VAR_4, VAR_3, VAR_13);
  if (!VAR_11) {
   if (FUNC_6(VAR_9, VAR_4,
         VAR_5, 0))
    VAR_11 = -VAR_0;
   else if (FUNC_3(VAR_4, VAR_6,
      VAR_7, VAR_5))
    VAR_11 = -VAR_1;
   else
    break;
  }

  VAR_12 = FUNC_1(VAR_8,
           VAR_4->start, VAR_4->len);
  if (VAR_12 == 1)
   break;

  if (!VAR_14) {
   VAR_10 = 1;
   VAR_14 = VAR_4->read_mirror;
  }

  VAR_13++;
  if (VAR_13 == VAR_14)
   VAR_13++;

  if (VAR_13 > VAR_12)
   break;
 }

 if (VAR_10 && !VAR_11 && VAR_14)
  FUNC_2(VAR_4, VAR_14);

 return VAR_11;
}
