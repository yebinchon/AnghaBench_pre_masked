
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path {int * mnt; struct dentry* dentry; } ;
struct mount {int mnt; int mnt_mountpoint; struct mount* mnt_parent; } ;
struct dentry {int dummy; } ;


 struct dentry* FUNC_0 (int ) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct mount* FUNC_6 (int *) ;

int FUNC_7(struct path *VAR_1)
{
 struct mount *VAR_2 = FUNC_6(VAR_1->mnt);
 struct mount *VAR_3;
 struct dentry *VAR_4;

 FUNC_4(&VAR_0);
 VAR_3 = VAR_2->mnt_parent;
 if (VAR_3 == VAR_2) {
  FUNC_5(&VAR_0);
  return 0;
 }
 FUNC_2(&VAR_3->mnt);
 VAR_4 = FUNC_0(VAR_2->mnt_mountpoint);
 FUNC_5(&VAR_0);
 FUNC_1(VAR_1->dentry);
 VAR_1->dentry = VAR_4;
 FUNC_3(VAR_1->mnt);
 VAR_1->mnt = &VAR_3->mnt;
 return 1;
}
