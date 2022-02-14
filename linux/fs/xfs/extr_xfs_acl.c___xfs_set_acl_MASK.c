
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_inode {int i_mount; } ;
struct xfs_acl_entry {int dummy; } ;
struct xfs_acl {int dummy; } ;
struct posix_acl {int a_count; } ;
struct inode {int i_mode; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned char* VAR_5 ;
 unsigned char* VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct xfs_inode* FUNC_3 (struct inode*) ;
 int FUNC_4 (struct xfs_acl*) ;
 struct xfs_acl* FUNC_5 (int,int ) ;
 int FUNC_6 (struct inode*,int,struct posix_acl*) ;
 int FUNC_7 (struct xfs_acl*,struct posix_acl*) ;
 int FUNC_8 (struct xfs_inode*,unsigned char*,int ) ;
 int FUNC_9 (struct xfs_inode*,unsigned char*,unsigned char*,int,int ) ;

int
FUNC_10(struct inode *VAR_7, struct posix_acl *VAR_8, int VAR_9)
{
 struct xfs_inode *VAR_10 = FUNC_3(VAR_7);
 unsigned char *VAR_11;
 int VAR_12;

 switch (VAR_9) {
 case 129:
  VAR_11 = VAR_6;
  break;
 case 128:
  if (!FUNC_0(VAR_7->i_mode))
   return VAR_8 ? -VAR_1 : 0;
  VAR_11 = VAR_5;
  break;
 default:
  return -VAR_2;
 }

 if (VAR_8) {
  struct xfs_acl *VAR_13;
  int VAR_14 = FUNC_2(VAR_10->i_mount);

  VAR_13 = FUNC_5(VAR_14, 0);
  if (!VAR_13)
   return -VAR_4;

  FUNC_7(VAR_13, VAR_8);


  VAR_14 -= sizeof(struct xfs_acl_entry) *
    (FUNC_1(VAR_10->i_mount) - VAR_8->a_count);

  VAR_12 = FUNC_9(VAR_10, VAR_11, (unsigned char *)VAR_13,
    VAR_14, VAR_0);

  FUNC_4(VAR_13);
 } else {



  VAR_12 = FUNC_8(VAR_10, VAR_11, VAR_0);




  if (VAR_12 == -VAR_3)
   VAR_12 = 0;
 }

 if (!VAR_12)
  FUNC_6(VAR_7, VAR_9, VAR_8);
 return VAR_12;
}
