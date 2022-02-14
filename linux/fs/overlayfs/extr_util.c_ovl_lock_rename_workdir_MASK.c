
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int dummy; } ;


 int VAR_0 ;
 int * FUNC_0 (struct dentry*,struct dentry*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct dentry*,struct dentry*) ;

int FUNC_3(struct dentry *VAR_1, struct dentry *VAR_2)
{

 if (VAR_1 == VAR_2)
  goto err;


 if (FUNC_0(VAR_1, VAR_2) != ((void*)0))
  goto err_unlock;

 return 0;

err_unlock:
 FUNC_2(VAR_1, VAR_2);
err:
 FUNC_1("overlayfs: failed to lock workdir+upperdir\n");
 return -VAR_0;
}
