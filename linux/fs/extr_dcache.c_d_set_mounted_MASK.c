
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int d_lock; int d_flags; struct dentry* d_parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct dentry*) ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct dentry *VAR_4)
{
 struct dentry *VAR_5;
 int VAR_6 = -VAR_2;
 FUNC_7(&VAR_3);
 for (VAR_5 = VAR_4->d_parent; !FUNC_0(VAR_5); VAR_5 = VAR_5->d_parent) {

  FUNC_4(&VAR_5->d_lock);
  if (FUNC_6(FUNC_2(VAR_5))) {
   FUNC_5(&VAR_5->d_lock);
   goto out;
  }
  FUNC_5(&VAR_5->d_lock);
 }
 FUNC_4(&VAR_4->d_lock);
 if (!FUNC_3(VAR_4)) {
  VAR_6 = -VAR_1;
  if (!FUNC_1(VAR_4)) {
   VAR_4->d_flags |= VAR_0;
   VAR_6 = 0;
  }
 }
  FUNC_5(&VAR_4->d_lock);
out:
 FUNC_8(&VAR_3);
 return VAR_6;
}
