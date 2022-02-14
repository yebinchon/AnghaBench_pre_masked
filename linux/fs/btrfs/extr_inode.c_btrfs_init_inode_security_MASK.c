
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {int dummy; } ;
struct inode {int dummy; } ;
struct btrfs_trans_handle {int dummy; } ;


 int FUNC_0 (struct btrfs_trans_handle*,struct inode*,struct inode*) ;
 int FUNC_1 (struct btrfs_trans_handle*,struct inode*,struct inode*,struct qstr const*) ;

__attribute__((used)) static int FUNC_2(struct btrfs_trans_handle *VAR_0,
         struct inode *VAR_1, struct inode *VAR_2,
         const struct qstr *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (!VAR_4)
  VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
 return VAR_4;
}
