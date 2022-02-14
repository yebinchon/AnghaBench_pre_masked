
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int umode_t ;
struct user_namespace {int dummy; } ;
struct path {TYPE_2__* dentry; } ;
struct dentry {int dummy; } ;
struct TYPE_4__ {int d_inode; TYPE_1__* d_sb; } ;
struct TYPE_3__ {struct user_namespace* s_user_ns; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct user_namespace*,int ) ;
 int FUNC_4 (struct user_namespace*,int ) ;
 int FUNC_5 (int ,struct dentry*,int ) ;
 int FUNC_6 (struct path const*,struct dentry*,int ,int ) ;

__attribute__((used)) static int FUNC_7(const struct path *VAR_3, struct dentry *VAR_4, umode_t VAR_5)
{
 struct user_namespace *VAR_6;
 int VAR_7 = FUNC_6(VAR_3, VAR_4, VAR_5, 0);
 if (VAR_7)
  return VAR_7;

 VAR_6 = VAR_3->dentry->d_sb->s_user_ns;
 if (!FUNC_4(VAR_6, FUNC_1()) ||
     !FUNC_3(VAR_6, FUNC_0()))
  return -VAR_0;

 VAR_7 = FUNC_2(VAR_3->dentry->d_inode, VAR_2 | VAR_1);
 if (VAR_7)
  return VAR_7;

 return FUNC_5(VAR_3->dentry->d_inode, VAR_4, VAR_5);
}
