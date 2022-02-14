
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl {int dummy; } ;
struct inode {int i_mode; } ;
struct btrfs_trans_handle {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct btrfs_trans_handle*,struct inode*,struct posix_acl*,int ) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*,int *,struct posix_acl**,struct posix_acl**) ;
 int FUNC_3 (struct posix_acl*) ;

int FUNC_4(struct btrfs_trans_handle *VAR_2,
     struct inode *VAR_3, struct inode *VAR_4)
{
 struct posix_acl *VAR_5, *VAR_6;
 int VAR_7 = 0;


 if (!VAR_4)
  return 0;

 VAR_7 = FUNC_2(VAR_4, &VAR_3->i_mode, &VAR_5, &VAR_6);
 if (VAR_7)
  return VAR_7;

 if (VAR_5) {
  VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_5,
          VAR_1);
  FUNC_3(VAR_5);
 }

 if (VAR_6) {
  if (!VAR_7)
   VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_6,
           VAR_0);
  FUNC_3(VAR_6);
 }

 if (!VAR_5 && !VAR_6)
  FUNC_1(VAR_3);
 return VAR_7;
}
