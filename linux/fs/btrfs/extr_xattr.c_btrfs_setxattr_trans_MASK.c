
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_ctime; } ;
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
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*) ;

int FUNC_10(struct inode *VAR_0, const char *VAR_1,
    const void *VAR_2, size_t VAR_3, int VAR_4)
{
 struct btrfs_root *VAR_5 = FUNC_0(VAR_0)->root;
 struct btrfs_trans_handle *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_6(VAR_5, 2);
 if (FUNC_2(VAR_6))
  return FUNC_3(VAR_6);

 VAR_7 = FUNC_5(VAR_6, VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 if (VAR_7)
  goto out;

 FUNC_9(VAR_0);
 VAR_0->i_ctime = FUNC_8(VAR_0);
 VAR_7 = FUNC_7(VAR_6, VAR_5, VAR_0);
 FUNC_1(VAR_7);
out:
 FUNC_4(VAR_6);
 return VAR_7;
}
