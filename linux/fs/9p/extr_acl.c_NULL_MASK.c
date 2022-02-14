
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v9fs_session_info {int flags; } ;
struct posix_acl {int dummy; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct posix_acl* FUNC_0 (struct inode*,int) ;
 struct v9fs_session_info* FUNC_1 (struct inode*) ;

struct posix_acl *FUNC_2(struct inode *VAR_4, int VAR_5)
{
 struct v9fs_session_info *VAR_6;

 VAR_6 = FUNC_1(VAR_4);
 if (((VAR_6->flags & VAR_1) != VAR_0) ||
   ((VAR_6->flags & VAR_2) != VAR_3)) {




  return ((void*)0);
 }
 return FUNC_0(VAR_4, VAR_5);

}
