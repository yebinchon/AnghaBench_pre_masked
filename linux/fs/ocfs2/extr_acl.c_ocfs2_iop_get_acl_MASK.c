
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct posix_acl {int dummy; } ;
struct ocfs2_super {int s_mount_opt; } ;
struct ocfs2_lock_holder {int dummy; } ;
struct inode {int i_sb; } ;
struct buffer_head {int dummy; } ;
struct TYPE_2__ {int ip_xattr_sem; } ;


 struct posix_acl* FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int VAR_0 ;
 struct ocfs2_super* FUNC_2 (int ) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (int *) ;
 struct posix_acl* FUNC_5 (struct inode*,int,struct buffer_head*) ;
 int FUNC_6 (struct inode*,struct buffer_head**,int ,struct ocfs2_lock_holder*) ;
 int FUNC_7 (struct inode*,int ,struct ocfs2_lock_holder*,int) ;
 int FUNC_8 (int *) ;

struct posix_acl *FUNC_9(struct inode *VAR_1, int VAR_2)
{
 struct ocfs2_super *VAR_3;
 struct buffer_head *VAR_4 = ((void*)0);
 struct posix_acl *VAR_5;
 int VAR_6;
 struct ocfs2_lock_holder VAR_7;

 VAR_3 = FUNC_2(VAR_1->i_sb);
 if (!(VAR_3->s_mount_opt & VAR_0))
  return ((void*)0);

 VAR_6 = FUNC_6(VAR_1, &VAR_4, 0, &VAR_7);
 if (VAR_6 < 0)
  return FUNC_0(VAR_6);

 FUNC_4(&FUNC_1(VAR_1)->ip_xattr_sem);
 VAR_5 = FUNC_5(VAR_1, VAR_2, VAR_4);
 FUNC_8(&FUNC_1(VAR_1)->ip_xattr_sem);

 FUNC_7(VAR_1, 0, &VAR_7, VAR_6);
 FUNC_3(VAR_4);
 return VAR_5;
}
