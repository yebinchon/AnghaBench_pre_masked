
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl {int a_count; } ;
struct inode {int dummy; } ;
struct fuse_conn {int user_ns; scalar_t__ no_setxattr; int posix_acl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 char* VAR_8 ;
 char* VAR_9 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*,char const*) ;
 int FUNC_3 (struct inode*,char const*,void*,size_t,int ) ;
 struct fuse_conn* FUNC_4 (struct inode*) ;
 int FUNC_5 (void*) ;
 void* FUNC_6 (size_t,int ) ;
 int FUNC_7 (int ,struct posix_acl*,void*,size_t) ;
 size_t FUNC_8 (int ) ;

int FUNC_9(struct inode *VAR_10, struct posix_acl *VAR_11, int VAR_12)
{
 struct fuse_conn *VAR_13 = FUNC_4(VAR_10);
 const char *VAR_14;
 int VAR_15;

 if (!VAR_13->posix_acl || VAR_13->no_setxattr)
  return -VAR_5;

 if (VAR_12 == VAR_0)
  VAR_14 = VAR_8;
 else if (VAR_12 == VAR_1)
  VAR_14 = VAR_9;
 else
  return -VAR_3;

 if (VAR_11) {







  size_t VAR_16 = FUNC_8(VAR_11->a_count);
  void *VAR_17;

  if (VAR_16 > VAR_7)
   return -VAR_2;

  VAR_17 = FUNC_6(VAR_16, VAR_6);
  if (!VAR_17)
   return -VAR_4;

  VAR_15 = FUNC_7(VAR_13->user_ns, VAR_11, VAR_17, VAR_16);
  if (VAR_15 < 0) {
   FUNC_5(VAR_17);
   return VAR_15;
  }

  VAR_15 = FUNC_3(VAR_10, VAR_14, VAR_17, VAR_16, 0);
  FUNC_5(VAR_17);
 } else {
  VAR_15 = FUNC_2(VAR_10, VAR_14);
 }
 FUNC_0(VAR_10);
 FUNC_1(VAR_10);

 return VAR_15;
}
