
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {int dummy; } ;
struct dentry {int d_lock; int d_subdirs; int d_child; struct dentry* d_parent; int d_sb; } ;


 struct dentry* FUNC_0 (int ,struct qstr const*) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

struct dentry *FUNC_5(struct dentry * VAR_0, const struct qstr *VAR_1)
{
 struct dentry *VAR_2 = FUNC_0(VAR_0->d_sb, VAR_1);
 if (!VAR_2)
  return ((void*)0);
 FUNC_3(&VAR_0->d_lock);




 FUNC_1(VAR_0);
 VAR_2->d_parent = VAR_0;
 FUNC_2(&VAR_2->d_child, &VAR_0->d_subdirs);
 FUNC_4(&VAR_0->d_lock);

 return VAR_2;
}
