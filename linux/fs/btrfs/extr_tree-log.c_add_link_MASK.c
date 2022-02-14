
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct inode {scalar_t__ i_nlink; } ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {int * nodes; } ;
struct btrfs_key {int objectid; } ;
struct btrfs_dir_item {int dummy; } ;


 int FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct btrfs_dir_item*) ;
 int FUNC_2 (struct btrfs_dir_item*) ;
 int FUNC_3 (struct btrfs_trans_handle*,int ,int ,char const*,int,int ,int ) ;
 struct btrfs_path* FUNC_4 () ;
 int FUNC_5 (int ,struct btrfs_dir_item*,struct btrfs_key*) ;
 int FUNC_6 (struct btrfs_path*) ;
 int FUNC_7 (int ) ;
 struct btrfs_dir_item* FUNC_8 (int *,struct btrfs_root*,struct btrfs_path*,int ,char const*,int,int ) ;
 int FUNC_9 (struct btrfs_path*) ;
 int FUNC_10 (struct btrfs_trans_handle*) ;
 int FUNC_11 (struct btrfs_trans_handle*,struct btrfs_root*,int ,int ,char const*,int) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (struct inode*) ;
 struct inode* FUNC_14 (struct btrfs_root*,int ) ;

__attribute__((used)) static int FUNC_15(struct btrfs_trans_handle *VAR_2, struct btrfs_root *VAR_3,
      struct inode *VAR_4, struct inode *VAR_5, const char *VAR_6,
      int VAR_7, u64 VAR_8)
{
 struct btrfs_dir_item *VAR_9;
 struct btrfs_key VAR_10;
 struct btrfs_path *VAR_11;
 struct inode *VAR_12 = ((void*)0);
 int VAR_13;

 VAR_11 = FUNC_4();
 if (!VAR_11)
  return -VAR_1;

 VAR_9 = FUNC_8(((void*)0), VAR_3, VAR_11,
      FUNC_7(FUNC_0(VAR_4)),
      VAR_6, VAR_7, 0);
 if (!VAR_9) {
  FUNC_9(VAR_11);
  goto add_link;
 } else if (FUNC_1(VAR_9)) {
  VAR_13 = FUNC_2(VAR_9);
  goto out;
 }






 FUNC_5(VAR_11->nodes[0], VAR_9, &VAR_10);
 FUNC_9(VAR_11);
 VAR_12 = FUNC_14(VAR_3, VAR_10.objectid);
 if (!VAR_12) {
  VAR_13 = -VAR_0;
  goto out;
 }
 VAR_13 = FUNC_11(VAR_2, VAR_3, FUNC_0(VAR_4), FUNC_0(VAR_12),
     VAR_6, VAR_7);
 if (VAR_13)
  goto out;




 if (VAR_12->i_nlink == 0)
  FUNC_12(VAR_12);

 VAR_13 = FUNC_10(VAR_2);
 if (VAR_13)
  goto out;
add_link:
 VAR_13 = FUNC_3(VAR_2, FUNC_0(VAR_4), FUNC_0(VAR_5),
        VAR_6, VAR_7, 0, VAR_8);
out:
 FUNC_13(VAR_12);
 FUNC_6(VAR_11);

 return VAR_13;
}
