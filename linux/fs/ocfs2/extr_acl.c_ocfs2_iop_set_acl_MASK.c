
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct posix_acl {int dummy; } ;
struct ocfs2_lock_holder {int dummy; } ;
struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct inode*,struct buffer_head*,int *,int ) ;
 int FUNC_2 (struct inode*,struct buffer_head**,int,struct ocfs2_lock_holder*) ;
 int FUNC_3 (struct inode*,int,struct ocfs2_lock_holder*,int) ;
 int FUNC_4 (int *,struct inode*,struct buffer_head*,int,struct posix_acl*,int *,int *) ;
 int FUNC_5 (struct inode*,int *,struct posix_acl**) ;

int FUNC_6(struct inode *VAR_1, struct posix_acl *VAR_2, int VAR_3)
{
 struct buffer_head *VAR_4 = ((void*)0);
 int VAR_5, VAR_6;
 struct ocfs2_lock_holder VAR_7;

 VAR_6 = FUNC_2(VAR_1, &VAR_4, 1, &VAR_7);
 if (VAR_6 < 0)
  return VAR_6;
 if (VAR_3 == VAR_0 && VAR_2) {
  umode_t VAR_8;

  VAR_5 = FUNC_5(VAR_1, &VAR_8, &VAR_2);
  if (VAR_5)
   goto unlock;

  VAR_5 = FUNC_1(VAR_1, VAR_4, ((void*)0), VAR_8);
  if (VAR_5)
   goto unlock;
 }
 VAR_5 = FUNC_4(((void*)0), VAR_1, VAR_4, VAR_3, VAR_2, ((void*)0), ((void*)0));
unlock:
 FUNC_3(VAR_1, 1, &VAR_7, VAR_6);
 FUNC_0(VAR_4);
 return VAR_5;
}
