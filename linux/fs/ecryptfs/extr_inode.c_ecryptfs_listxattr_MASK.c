
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct dentry {int dummy; } ;
typedef int ssize_t ;
struct TYPE_6__ {TYPE_1__* i_op; } ;
struct TYPE_5__ {int (* listxattr ) (struct dentry*,char*,size_t) ;} ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct dentry*) ;
 struct dentry* FUNC_1 (struct dentry*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct dentry*,char*,size_t) ;

__attribute__((used)) static ssize_t
FUNC_5(struct dentry *VAR_1, char *VAR_2, size_t VAR_3)
{
 int VAR_4 = 0;
 struct dentry *VAR_5;

 VAR_5 = FUNC_1(VAR_1);
 if (!FUNC_0(VAR_5)->i_op->listxattr) {
  VAR_4 = -VAR_0;
  goto out;
 }
 FUNC_2(FUNC_0(VAR_5));
 VAR_4 = FUNC_0(VAR_5)->i_op->listxattr(VAR_5, VAR_2, VAR_3);
 FUNC_3(FUNC_0(VAR_5));
out:
 return VAR_4;
}
