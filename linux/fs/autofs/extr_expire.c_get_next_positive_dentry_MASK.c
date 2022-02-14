
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int d_lock; struct dentry* d_parent; int d_sb; } ;
struct autofs_sb_info {int lookup_lock; } ;


 struct autofs_sb_info* FUNC_0 (int ) ;
 struct dentry* FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 struct dentry* FUNC_3 (struct dentry*,struct dentry*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static struct dentry *FUNC_6(struct dentry *VAR_0,
            struct dentry *VAR_1)
{
 struct autofs_sb_info *VAR_2 = FUNC_0(VAR_1->d_sb);
 struct dentry *VAR_3 = VAR_0, *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);

 if (VAR_0 == ((void*)0))
  return FUNC_1(VAR_1);

 FUNC_4(&VAR_2->lookup_lock);
 FUNC_4(&VAR_3->d_lock);
 while (1) {
  struct dentry *VAR_6;

  VAR_4 = FUNC_3(VAR_3, VAR_5);
  if (VAR_4 || VAR_3 == VAR_1)
   break;
  VAR_6 = VAR_3->d_parent;
  FUNC_5(&VAR_3->d_lock);
  FUNC_4(&VAR_6->d_lock);
  VAR_5 = VAR_3;
  VAR_3 = VAR_6;
 }
 FUNC_5(&VAR_3->d_lock);
 FUNC_5(&VAR_2->lookup_lock);
 FUNC_2(VAR_0);
 return VAR_4;
}
