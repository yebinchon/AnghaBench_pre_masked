
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl {int dummy; } ;
struct inode {int dummy; } ;
struct fuse_conn {scalar_t__ no_getxattr; int user_ns; int posix_acl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct posix_acl* FUNC_0 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 char* VAR_9 ;
 char* VAR_10 ;
 int FUNC_1 (struct inode*,char const*,void*,int ) ;
 struct fuse_conn* FUNC_2 (struct inode*) ;
 int FUNC_3 (void*) ;
 void* FUNC_4 (int ,int ) ;
 struct posix_acl* FUNC_5 (int ,void*,int) ;

struct posix_acl *FUNC_6(struct inode *VAR_11, int VAR_12)
{
 struct fuse_conn *VAR_13 = FUNC_2(VAR_11);
 int VAR_14;
 const char *VAR_15;
 void *VAR_16 = ((void*)0);
 struct posix_acl *VAR_17;

 if (!VAR_13->posix_acl || VAR_13->no_getxattr)
  return ((void*)0);

 if (VAR_12 == VAR_0)
  VAR_15 = VAR_9;
 else if (VAR_12 == VAR_1)
  VAR_15 = VAR_10;
 else
  return FUNC_0(-VAR_5);

 VAR_16 = FUNC_4(VAR_8, VAR_7);
 if (!VAR_16)
  return FUNC_0(-VAR_4);
 VAR_14 = FUNC_1(VAR_11, VAR_15, VAR_16, VAR_8);
 if (VAR_14 > 0)
  VAR_17 = FUNC_5(VAR_13->user_ns, VAR_16, VAR_14);
 else if ((VAR_14 == 0) || (VAR_14 == -VAR_3) ||
   (VAR_14 == -VAR_5 && VAR_13->no_getxattr))
  VAR_17 = ((void*)0);
 else if (VAR_14 == -VAR_6)
  VAR_17 = FUNC_0(-VAR_2);
 else
  VAR_17 = FUNC_0(VAR_14);

 FUNC_3(VAR_16);
 return VAR_17;
}
