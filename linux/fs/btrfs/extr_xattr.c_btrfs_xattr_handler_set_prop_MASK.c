
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xattr_handler {int dummy; } ;
struct inode {int i_ctime; } ;
struct dentry {int dummy; } ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {int dummy; } ;
struct TYPE_2__ {struct btrfs_root* root; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct btrfs_trans_handle*) ;
 int FUNC_3 (struct btrfs_trans_handle*) ;
 int FUNC_4 (struct btrfs_trans_handle*) ;
 int FUNC_5 (struct btrfs_trans_handle*,struct inode*,char const*,void const*,size_t,int) ;
 struct btrfs_trans_handle* FUNC_6 (struct btrfs_root*,int) ;
 int FUNC_7 (struct btrfs_trans_handle*,struct btrfs_root*,struct inode*) ;
 int FUNC_8 (char const*,void const*,size_t) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct inode*) ;
 char* FUNC_11 (struct xattr_handler const*,char const*) ;

__attribute__((used)) static int FUNC_12(const struct xattr_handler *VAR_0,
     struct dentry *VAR_1, struct inode *VAR_2,
     const char *VAR_3, const void *VAR_4,
     size_t VAR_5, int VAR_6)
{
 int VAR_7;
 struct btrfs_trans_handle *VAR_8;
 struct btrfs_root *VAR_9 = FUNC_0(VAR_2)->root;

 VAR_3 = FUNC_11(VAR_0, VAR_3);
 VAR_7 = FUNC_8(VAR_3, VAR_4, VAR_5);
 if (VAR_7)
  return VAR_7;

 VAR_8 = FUNC_6(VAR_9, 2);
 if (FUNC_2(VAR_8))
  return FUNC_3(VAR_8);

 VAR_7 = FUNC_5(VAR_8, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 if (!VAR_7) {
  FUNC_10(VAR_2);
  VAR_2->i_ctime = FUNC_9(VAR_2);
  VAR_7 = FUNC_7(VAR_8, VAR_9, VAR_2);
  FUNC_1(VAR_7);
 }

 FUNC_4(VAR_8);

 return VAR_7;
}
