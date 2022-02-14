
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v9fs_session_info {int flags; } ;
struct posix_acl {int dummy; } ;
struct p9_fid {int dummy; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct posix_acl*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct posix_acl* FUNC_1 (struct p9_fid*,int ) ;
 int FUNC_2 (struct posix_acl*) ;
 int FUNC_3 (struct inode*,int ,struct posix_acl*) ;
 struct v9fs_session_info* FUNC_4 (struct inode*) ;

int FUNC_5(struct inode *VAR_9, struct p9_fid *VAR_10)
{
 int VAR_11 = 0;
 struct posix_acl *VAR_12, *VAR_13;
 struct v9fs_session_info *VAR_14;

 VAR_14 = FUNC_4(VAR_9);
 if (((VAR_14->flags & VAR_4) != VAR_3) ||
   ((VAR_14->flags & VAR_5) != VAR_6)) {
  FUNC_3(VAR_9, VAR_1, ((void*)0));
  FUNC_3(VAR_9, VAR_0, ((void*)0));
  return 0;
 }

 VAR_13 = FUNC_1(VAR_10, VAR_8);
 VAR_12 = FUNC_1(VAR_10, VAR_7);

 if (!FUNC_0(VAR_13) && !FUNC_0(VAR_12)) {
  FUNC_3(VAR_9, VAR_1, VAR_13);
  FUNC_3(VAR_9, VAR_0, VAR_12);
 } else
  VAR_11 = -VAR_2;

 if (!FUNC_0(VAR_13))
  FUNC_2(VAR_13);

 if (!FUNC_0(VAR_12))
  FUNC_2(VAR_12);

 return VAR_11;
}
