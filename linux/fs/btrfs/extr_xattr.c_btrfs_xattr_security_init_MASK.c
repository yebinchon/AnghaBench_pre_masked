
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {int dummy; } ;
struct inode {int dummy; } ;
struct btrfs_trans_handle {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*,struct inode*,struct qstr const*,int *,struct btrfs_trans_handle*) ;

int FUNC_1(struct btrfs_trans_handle *VAR_1,
         struct inode *VAR_2, struct inode *VAR_3,
         const struct qstr *VAR_4)
{
 return FUNC_0(VAR_2, VAR_3, VAR_4,
         &VAR_0, VAR_1);
}
