
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct user_namespace {int dummy; } ;
struct inode {TYPE_1__* i_sb; } ;
struct dentry {scalar_t__ d_inode; } ;
struct TYPE_2__ {struct user_namespace* s_user_ns; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct inode*,struct dentry*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct inode*,int) ;
 int FUNC_5 (struct user_namespace*,int ) ;
 int FUNC_6 (struct user_namespace*,int ) ;

__attribute__((used)) static inline int FUNC_7(struct inode *VAR_6, struct dentry *VAR_7)
{
 struct user_namespace *VAR_8;
 FUNC_1(VAR_6, VAR_7, VAR_0);
 if (VAR_7->d_inode)
  return -VAR_1;
 if (FUNC_0(VAR_6))
  return -VAR_2;
 VAR_8 = VAR_6->i_sb->s_user_ns;
 if (!FUNC_6(VAR_8, FUNC_3()) ||
     !FUNC_5(VAR_8, FUNC_2()))
  return -VAR_3;
 return FUNC_4(VAR_6, VAR_5 | VAR_4);
}
