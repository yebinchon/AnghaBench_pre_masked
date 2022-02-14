
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct path {int dummy; } ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;
struct delayed_call {int dummy; } ;
struct TYPE_3__ {int (* proc_get_link ) (struct dentry*,struct path*) ;} ;
struct TYPE_4__ {TYPE_1__ op; } ;


 int VAR_0 ;
 int VAR_1 ;
 char const* FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct path*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct dentry*,struct path*) ;

__attribute__((used)) static const char *FUNC_5(struct dentry *VAR_2,
         struct inode *VAR_3,
         struct delayed_call *VAR_4)
{
 struct path VAR_5;
 int VAR_6 = -VAR_0;

 if (!VAR_2)
  return FUNC_0(-VAR_1);


 if (!FUNC_3(VAR_3))
  goto out;

 VAR_6 = FUNC_1(VAR_3)->op.proc_get_link(VAR_2, &VAR_5);
 if (VAR_6)
  goto out;

 FUNC_2(&VAR_5);
 return ((void*)0);
out:
 return FUNC_0(VAR_6);
}
