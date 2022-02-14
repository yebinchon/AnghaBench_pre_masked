
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct page {TYPE_1__* mapping; } ;
struct inode {int i_state; } ;
struct extent_state {int dummy; } ;
struct extent_io_tree {int dummy; } ;
struct btrfs_ordered_inode_tree {int lock; } ;
struct btrfs_ordered_extent {scalar_t__ file_offset; scalar_t__ len; scalar_t__ truncated_len; int flags; } ;
struct TYPE_5__ {struct btrfs_ordered_inode_tree ordered_tree; struct extent_io_tree io_tree; } ;
struct TYPE_4__ {struct inode* host; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_3 (struct page*) ;
 scalar_t__ FUNC_4 (struct page*) ;
 scalar_t__ FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*,int ) ;
 scalar_t__ FUNC_7 (struct inode*,struct btrfs_ordered_extent**,scalar_t__,scalar_t__,int) ;
 int FUNC_8 (struct btrfs_ordered_extent*) ;
 struct btrfs_ordered_extent* FUNC_9 (TYPE_2__*,scalar_t__,scalar_t__) ;
 int FUNC_10 (struct btrfs_ordered_extent*) ;
 int FUNC_11 (struct inode*,int *,scalar_t__,scalar_t__) ;
 int FUNC_12 (struct page*,int ) ;
 int FUNC_13 (struct extent_io_tree*,scalar_t__,scalar_t__,int,int,int,struct extent_state**) ;
 int FUNC_14 (struct extent_io_tree*,scalar_t__,scalar_t__,struct extent_state**) ;
 scalar_t__ FUNC_15 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_16 (struct page*) ;
 int FUNC_17 (struct page*) ;
 int FUNC_18 (int ,int *) ;
 int FUNC_19 (struct page*,int ) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (struct page*) ;

__attribute__((used)) static void FUNC_23(struct page *VAR_9, unsigned int VAR_10,
     unsigned int VAR_11)
{
 struct inode *VAR_12 = VAR_9->mapping->host;
 struct extent_io_tree *VAR_13;
 struct btrfs_ordered_extent *VAR_14;
 struct extent_state *VAR_15 = ((void*)0);
 u64 VAR_16 = FUNC_16(VAR_9);
 u64 VAR_17 = VAR_16 + VAR_8 - 1;
 u64 VAR_18;
 u64 VAR_19;
 int VAR_20 = VAR_12->i_state & VAR_7;
 FUNC_22(VAR_9);

 VAR_13 = &FUNC_0(VAR_12)->io_tree;
 if (VAR_10) {
  FUNC_12(VAR_9, VAR_6);
  return;
 }

 if (!VAR_20)
  FUNC_14(VAR_13, VAR_16, VAR_17, &VAR_15);
again:
 VAR_18 = VAR_16;
 VAR_14 = FUNC_9(FUNC_0(VAR_12), VAR_18,
     VAR_17 - VAR_18 + 1);
 if (VAR_14) {
  VAR_19 = FUNC_15(VAR_17, VAR_14->file_offset + VAR_14->len - 1);




  if (!VAR_20)
   FUNC_13(VAR_13, VAR_18, VAR_19,
      VAR_2 | VAR_3 |
      VAR_5 | VAR_4 |
      VAR_1, 1, 0, &VAR_15);




  if (FUNC_5(VAR_9)) {
   struct btrfs_ordered_inode_tree *VAR_21;
   u64 VAR_22;

   VAR_21 = &FUNC_0(VAR_12)->ordered_tree;

   FUNC_20(&VAR_21->lock);
   FUNC_18(VAR_0, &VAR_14->flags);
   VAR_22 = VAR_18 - VAR_14->file_offset;
   if (VAR_22 < VAR_14->truncated_len)
    VAR_14->truncated_len = VAR_22;
   FUNC_21(&VAR_21->lock);

   if (FUNC_7(VAR_12, &VAR_14,
          VAR_18,
          VAR_19 - VAR_18 + 1, 1))
    FUNC_8(VAR_14);
  }
  FUNC_10(VAR_14);
  if (!VAR_20) {
   VAR_15 = ((void*)0);
   FUNC_14(VAR_13, VAR_18, VAR_19,
      &VAR_15);
  }

  VAR_18 = VAR_19 + 1;
  if (VAR_18 < VAR_17)
   goto again;
 }
 if (FUNC_3(VAR_9))
  FUNC_11(VAR_12, ((void*)0), VAR_16, VAR_8);
 if (!VAR_20) {
  FUNC_13(VAR_13, VAR_16, VAR_17, VAR_5 |
     VAR_2 | VAR_3 |
     VAR_4 | VAR_1, 1, 1,
     &VAR_15);

  FUNC_6(VAR_9, VAR_6);
 }

 FUNC_1(VAR_9);
 if (FUNC_4(VAR_9)) {
  FUNC_2(VAR_9);
  FUNC_19(VAR_9, 0);
  FUNC_17(VAR_9);
 }
}
