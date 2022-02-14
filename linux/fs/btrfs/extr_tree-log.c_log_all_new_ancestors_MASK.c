
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct extent_buffer {int dummy; } ;
struct dentry {int dummy; } ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {int* slots; struct extent_buffer** nodes; } ;
struct btrfs_log_ctx {int dummy; } ;
struct btrfs_key {scalar_t__ objectid; scalar_t__ type; scalar_t__ offset; } ;
struct TYPE_2__ {int i_nlink; } ;
struct btrfs_inode {TYPE_1__ vfs_inode; struct btrfs_root* root; } ;
typedef int search_key ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct btrfs_path* FUNC_0 () ;
 int FUNC_1 (struct btrfs_path*) ;
 int FUNC_2 (struct extent_buffer*) ;
 scalar_t__ FUNC_3 (struct btrfs_inode*) ;
 int FUNC_4 (struct extent_buffer*,struct btrfs_key*,int) ;
 int FUNC_5 (struct btrfs_root*,struct btrfs_path*) ;
 int FUNC_6 (struct btrfs_path*) ;
 int FUNC_7 (int *,struct btrfs_root*,struct btrfs_key*,struct btrfs_path*,int ,int ) ;
 int FUNC_8 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_path*,struct btrfs_log_ctx*) ;
 int FUNC_9 (struct btrfs_trans_handle*,struct btrfs_inode*,struct dentry*,struct btrfs_log_ctx*) ;
 int FUNC_10 (struct btrfs_key*,struct btrfs_key*,int) ;

__attribute__((used)) static int FUNC_11(struct btrfs_trans_handle *VAR_4,
     struct btrfs_inode *VAR_5,
     struct dentry *VAR_6,
     struct btrfs_log_ctx *VAR_7)
{
 struct btrfs_root *VAR_8 = VAR_5->root;
 const u64 VAR_9 = FUNC_3(VAR_5);
 struct btrfs_path *VAR_10;
 struct btrfs_key VAR_11;
 int VAR_12;





 if (VAR_5->vfs_inode.i_nlink < 2)
  return FUNC_9(VAR_4, VAR_5, VAR_6, VAR_7);

 VAR_10 = FUNC_0();
 if (!VAR_10)
  return -VAR_3;

 VAR_11.objectid = VAR_9;
 VAR_11.type = VAR_1;
 VAR_11.offset = 0;
again:
 VAR_12 = FUNC_7(((void*)0), VAR_8, &VAR_11, VAR_10, 0, 0);
 if (VAR_12 < 0)
  goto out;
 if (VAR_12 == 0)
  VAR_10->slots[0]++;

 while (1) {
  struct extent_buffer *VAR_13 = VAR_10->nodes[0];
  int VAR_14 = VAR_10->slots[0];
  struct btrfs_key VAR_15;

  if (VAR_14 >= FUNC_2(VAR_13)) {
   VAR_12 = FUNC_5(VAR_8, VAR_10);
   if (VAR_12 < 0)
    goto out;
   else if (VAR_12 > 0)
    break;
   continue;
  }

  FUNC_4(VAR_13, &VAR_15, VAR_14);
  if (VAR_15.objectid != VAR_9 ||
      VAR_15.type > VAR_0)
   break;
  if (VAR_15.type == VAR_0) {
   VAR_12 = -VAR_2;
   goto out;
  }







  FUNC_10(&VAR_11, &VAR_15, sizeof(VAR_11));

  VAR_12 = FUNC_8(VAR_4, VAR_8, VAR_10, VAR_7);
  if (VAR_12)
   goto out;
  FUNC_6(VAR_10);
  goto again;
 }
 VAR_12 = 0;
out:
 FUNC_1(VAR_10);
 return VAR_12;
}
