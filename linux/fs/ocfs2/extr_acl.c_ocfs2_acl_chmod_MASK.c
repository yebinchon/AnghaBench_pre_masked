
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct posix_acl {int dummy; } ;
struct ocfs2_super {int s_mount_opt; } ;
struct inode {int i_mode; int i_sb; } ;
struct buffer_head {int dummy; } ;
struct TYPE_2__ {int ip_xattr_sem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct posix_acl*) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int VAR_3 ;
 struct ocfs2_super* FUNC_2 (int ) ;
 int FUNC_3 (struct posix_acl*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct posix_acl**,int ,int ) ;
 int FUNC_6 (int *) ;
 struct posix_acl* FUNC_7 (struct inode*,int ,struct buffer_head*) ;
 int FUNC_8 (int *,struct inode*,int *,int ,struct posix_acl*,int *,int *) ;
 int FUNC_9 (struct posix_acl*) ;
 int FUNC_10 (int *) ;

int FUNC_11(struct inode *VAR_4, struct buffer_head *VAR_5)
{
 struct ocfs2_super *VAR_6 = FUNC_2(VAR_4->i_sb);
 struct posix_acl *VAR_7;
 int VAR_8;

 if (FUNC_4(VAR_4->i_mode))
  return -VAR_1;

 if (!(VAR_6->s_mount_opt & VAR_3))
  return 0;

 FUNC_6(&FUNC_1(VAR_4)->ip_xattr_sem);
 VAR_7 = FUNC_7(VAR_4, VAR_0, VAR_5);
 FUNC_10(&FUNC_1(VAR_4)->ip_xattr_sem);
 if (FUNC_0(VAR_7) || !VAR_7)
  return FUNC_3(VAR_7);
 VAR_8 = FUNC_5(&VAR_7, VAR_2, VAR_4->i_mode);
 if (VAR_8)
  return VAR_8;
 VAR_8 = FUNC_8(((void*)0), VAR_4, ((void*)0), VAR_0,
       VAR_7, ((void*)0), ((void*)0));
 FUNC_9(VAR_7);
 return VAR_8;
}
