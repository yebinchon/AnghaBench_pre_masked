
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int d_lock; struct dentry* d_parent; } ;


 scalar_t__ FUNC_0 (struct dentry*) ;
 struct dentry* FUNC_1 (struct dentry*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline struct dentry *FUNC_4(struct dentry *VAR_0)
{
 struct dentry *VAR_1 = VAR_0->d_parent;
 if (FUNC_0(VAR_0))
  return ((void*)0);
 if (FUNC_2(FUNC_3(&VAR_1->d_lock)))
  return VAR_1;
 return FUNC_1(VAR_0);
}
