
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path {struct dentry* dentry; } ;
struct dentry {int d_name; struct dentry* d_parent; int d_sb; } ;
struct autofs_sb_info {int type; } ;
struct autofs_info {int last_used; } ;


 struct autofs_info* FUNC_0 (struct dentry*) ;
 struct autofs_sb_info* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 struct dentry* FUNC_3 (struct dentry*,int *) ;
 scalar_t__ FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct dentry*) ;
 int VAR_0 ;

__attribute__((used)) static struct dentry *FUNC_6(struct path *VAR_1)
{
 struct dentry *VAR_2 = VAR_1->dentry;
 struct autofs_sb_info *VAR_3 = FUNC_1(VAR_2->d_sb);





 if (FUNC_2(VAR_3->type) && FUNC_4(VAR_2)) {
  struct dentry *VAR_4 = VAR_2->d_parent;
  struct autofs_info *VAR_5;
  struct dentry *VAR_6;

  VAR_6 = FUNC_3(VAR_4, &VAR_2->d_name);
  if (!VAR_6)
   return ((void*)0);
  VAR_5 = FUNC_0(VAR_6);
  VAR_5->last_used = VAR_0;
  FUNC_5(VAR_1->dentry);
  VAR_1->dentry = VAR_6;
 }
 return VAR_1->dentry;
}
