
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int d_inode; int d_lock; } ;


 int FUNC_0 (struct dentry*) ;
 scalar_t__ FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*,struct dentry**,int ) ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct dentry*) ;
 int VAR_0 ;
 int FUNC_5 (struct dentry*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct dentry *VAR_1)
{
 bool VAR_2 = 0;
 FUNC_6(&VAR_1->d_lock);
 if (FUNC_1(VAR_1)) {
  FUNC_7(&VAR_1->d_lock);
  return;
 }
 FUNC_0(VAR_1);
 FUNC_7(&VAR_1->d_lock);


 if (!VAR_1->d_inode)
  return;

 FUNC_5(VAR_1);
 for (;;) {
  struct dentry *VAR_3 = ((void*)0);
  FUNC_2(VAR_1, &VAR_3, VAR_0);
  if (!VAR_3) {
   if (VAR_2)
    FUNC_5(VAR_1);
   return;
  }
  VAR_2 = 1;
  FUNC_3(VAR_3);
  FUNC_4(VAR_3);
 }
}
