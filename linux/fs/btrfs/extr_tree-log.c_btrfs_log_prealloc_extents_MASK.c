
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct extent_buffer {int dummy; } ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {int log_root; } ;
struct btrfs_path {int* slots; struct extent_buffer** nodes; } ;
struct btrfs_key {scalar_t__ objectid; scalar_t__ type; scalar_t__ offset; } ;
struct btrfs_inode {int flags; int vfs_inode; struct btrfs_root* root; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 struct btrfs_path* FUNC_1 () ;
 int FUNC_2 (struct btrfs_path*) ;
 int FUNC_3 (struct extent_buffer*) ;
 scalar_t__ FUNC_4 (struct btrfs_inode*) ;
 int FUNC_5 (struct extent_buffer*,struct btrfs_key*,int) ;
 int FUNC_6 (struct btrfs_root*,struct btrfs_path*) ;
 int FUNC_7 (struct btrfs_path*) ;
 int FUNC_8 (int *,struct btrfs_root*,struct btrfs_key*,struct btrfs_path*,int ,int ) ;
 int FUNC_9 (struct btrfs_trans_handle*,int ,int *,scalar_t__ const,scalar_t__) ;
 int FUNC_10 (struct btrfs_trans_handle*,struct btrfs_inode*,struct btrfs_path*,struct btrfs_path*,scalar_t__*,int,int,int,int ) ;
 scalar_t__ FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct btrfs_trans_handle *VAR_4,
          struct btrfs_inode *VAR_5,
          struct btrfs_path *VAR_6)
{
 struct btrfs_root *VAR_7 = VAR_5->root;
 struct btrfs_key VAR_8;
 const u64 VAR_9 = FUNC_11(&VAR_5->vfs_inode);
 const u64 VAR_10 = FUNC_4(VAR_5);
 struct btrfs_path *VAR_11 = ((void*)0);
 u64 VAR_12 = (u64)-1;
 int VAR_13 = 0;
 int VAR_14;
 int VAR_15;

 if (!(VAR_5->flags & VAR_1))
  return 0;

 VAR_8.objectid = VAR_10;
 VAR_8.type = VAR_0;
 VAR_8.offset = VAR_9;
 VAR_15 = FUNC_8(((void*)0), VAR_7, &VAR_8, VAR_6, 0, 0);
 if (VAR_15 < 0)
  goto out;

 while (1) {
  struct extent_buffer *VAR_16 = VAR_6->nodes[0];
  int VAR_17 = VAR_6->slots[0];

  if (VAR_17 >= FUNC_3(VAR_16)) {
   if (VAR_13 > 0) {
    VAR_15 = FUNC_10(VAR_4, VAR_5, VAR_11, VAR_6,
       &VAR_12, VAR_14,
       VAR_13, 1, 0);
    if (VAR_15 < 0)
     goto out;
    VAR_13 = 0;
   }
   VAR_15 = FUNC_6(VAR_7, VAR_6);
   if (VAR_15 < 0)
    goto out;
   if (VAR_15 > 0) {
    VAR_15 = 0;
    break;
   }
   continue;
  }

  FUNC_5(VAR_16, &VAR_8, VAR_17);
  if (VAR_8.objectid > VAR_10)
   break;
  if (FUNC_0(VAR_8.objectid < VAR_10) ||
      VAR_8.type < VAR_0 ||
      VAR_8.offset < VAR_9) {
   VAR_6->slots[0]++;
   continue;
  }
  if (VAR_12 == (u64)-1) {
   VAR_12 = VAR_8.offset;




   do {
    VAR_15 = FUNC_9(VAR_4,
        VAR_7->log_root,
        &VAR_5->vfs_inode,
        VAR_9,
        VAR_0);
   } while (VAR_15 == -VAR_2);
   if (VAR_15)
    goto out;
  }
  if (VAR_13 == 0)
   VAR_14 = VAR_17;
  VAR_13++;
  VAR_6->slots[0]++;
  if (!VAR_11) {
   VAR_11 = FUNC_1();
   if (!VAR_11) {
    VAR_15 = -VAR_3;
    goto out;
   }
  }
 }
 if (VAR_13 > 0) {
  VAR_15 = FUNC_10(VAR_4, VAR_5, VAR_11, VAR_6, &VAR_12,
     VAR_14, VAR_13, 1, 0);
  if (VAR_15 > 0)
   VAR_15 = 0;
 }
out:
 FUNC_7(VAR_6);
 FUNC_2(VAR_11);
 return VAR_15;
}
