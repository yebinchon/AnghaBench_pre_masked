
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int d_lock; struct dentry* d_parent; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (struct dentry*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static struct dentry *FUNC_7(struct dentry *VAR_1)
{
 struct dentry *VAR_2;
 FUNC_1();
 FUNC_5(&VAR_1->d_lock);
again:
 VAR_2 = FUNC_0(VAR_1->d_parent);
 FUNC_3(&VAR_2->d_lock);
 if (FUNC_6(VAR_2 != VAR_1->d_parent)) {
  FUNC_5(&VAR_2->d_lock);
  goto again;
 }
 FUNC_2();
 if (VAR_2 != VAR_1)
  FUNC_4(&VAR_1->d_lock, VAR_0);
 else
  VAR_2 = ((void*)0);
 return VAR_2;
}
