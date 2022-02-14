
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct inode {int i_sb; } ;
struct extent_state {unsigned int state; scalar_t__ start; scalar_t__ end; } ;
struct TYPE_2__ {scalar_t__ objectid; } ;
struct btrfs_root {TYPE_1__ root_key; } ;
struct btrfs_inode {scalar_t__ delalloc_bytes; int lock; scalar_t__ new_delalloc_bytes; int runtime_flags; int vfs_inode; struct btrfs_root* root; scalar_t__ defrag_bytes; } ;
struct btrfs_fs_info {int delalloc_batch; int delalloc_bytes; struct btrfs_root* tree_root; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 struct btrfs_inode* FUNC_1 (struct inode*) ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct btrfs_root*,struct btrfs_inode*) ;
 int FUNC_3 (struct btrfs_inode*,scalar_t__,int) ;
 int FUNC_4 (int *,scalar_t__,scalar_t__) ;
 int FUNC_5 (struct btrfs_inode*) ;
 scalar_t__ FUNC_6 (struct btrfs_fs_info*) ;
 int FUNC_7 (struct btrfs_inode*,int ) ;
 struct btrfs_fs_info* FUNC_8 (int ) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int *,scalar_t__,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int ,int *) ;

void FUNC_14(struct inode *VAR_8,
     struct extent_state *VAR_9, unsigned *VAR_10)
{
 struct btrfs_inode *VAR_11 = FUNC_1(VAR_8);
 struct btrfs_fs_info *VAR_12 = FUNC_8(VAR_8->i_sb);
 u64 VAR_13 = VAR_9->end + 1 - VAR_9->start;
 u32 VAR_14 = FUNC_9(VAR_13);

 if ((VAR_9->state & VAR_4) && (*VAR_10 & VAR_4)) {
  FUNC_11(&VAR_11->lock);
  VAR_11->defrag_bytes -= VAR_13;
  FUNC_12(&VAR_11->lock);
 }






 if ((VAR_9->state & VAR_5) && (*VAR_10 & VAR_5)) {
  struct btrfs_root *VAR_15 = VAR_11->root;
  bool VAR_16 = !FUNC_5(VAR_11);

  FUNC_11(&VAR_11->lock);
  FUNC_7(VAR_11, -VAR_14);
  FUNC_12(&VAR_11->lock);






  if (*VAR_10 & VAR_3 &&
      VAR_15 != VAR_12->tree_root)
   FUNC_3(VAR_11, VAR_13, 0);


  if (FUNC_6(VAR_12))
   return;

  if (VAR_15->root_key.objectid != VAR_0 &&
      VAR_16 && !(VAR_9->state & VAR_7) &&
      (*VAR_10 & VAR_2))
   FUNC_4(
     &VAR_11->vfs_inode,
     VAR_9->start, VAR_13);

  FUNC_10(&VAR_12->delalloc_bytes, -VAR_13,
      VAR_12->delalloc_batch);
  FUNC_11(&VAR_11->lock);
  VAR_11->delalloc_bytes -= VAR_13;
  if (VAR_16 && VAR_11->delalloc_bytes == 0 &&
      FUNC_13(VAR_1,
     &VAR_11->runtime_flags))
   FUNC_2(VAR_15, VAR_11);
  FUNC_12(&VAR_11->lock);
 }

 if ((VAR_9->state & VAR_6) &&
     (*VAR_10 & VAR_6)) {
  FUNC_11(&VAR_11->lock);
  FUNC_0(VAR_11->new_delalloc_bytes >= VAR_13);
  VAR_11->new_delalloc_bytes -= VAR_13;
  FUNC_12(&VAR_11->lock);
 }
}
