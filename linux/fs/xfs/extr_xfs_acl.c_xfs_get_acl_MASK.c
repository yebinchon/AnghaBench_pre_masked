
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_inode {int i_mount; } ;
struct xfs_acl {int dummy; } ;
struct posix_acl {int dummy; } ;
struct inode {int dummy; } ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 struct posix_acl* FUNC_1 (int) ;
 unsigned char* VAR_3 ;
 unsigned char* VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct xfs_inode* FUNC_4 (struct inode*) ;
 int FUNC_5 (struct xfs_acl*) ;
 int FUNC_6 (struct xfs_inode*) ;
 struct posix_acl* FUNC_7 (struct xfs_acl*,int,int ) ;
 int FUNC_8 (struct xfs_inode*,unsigned char*,unsigned char**,int*,int) ;

struct posix_acl *
FUNC_9(struct inode *VAR_5, int VAR_6)
{
 struct xfs_inode *VAR_7 = FUNC_4(VAR_5);
 struct posix_acl *VAR_8 = ((void*)0);
 struct xfs_acl *VAR_9 = ((void*)0);
 unsigned char *VAR_10;
 int VAR_11;
 int VAR_12;

 FUNC_6(VAR_7);

 switch (VAR_6) {
 case 129:
  VAR_10 = VAR_4;
  break;
 case 128:
  VAR_10 = VAR_3;
  break;
 default:
  FUNC_0();
 }





 VAR_12 = FUNC_3(VAR_7->i_mount);
 VAR_11 = FUNC_8(VAR_7, VAR_10, (unsigned char **)&VAR_9, &VAR_12,
    VAR_0 | VAR_1);
 if (VAR_11) {




  if (VAR_11 != -VAR_2)
   VAR_8 = FUNC_1(VAR_11);
 } else {
  VAR_8 = FUNC_7(VAR_9, VAR_12,
     FUNC_2(VAR_7->i_mount));
  FUNC_5(VAR_9);
 }
 return VAR_8;
}
