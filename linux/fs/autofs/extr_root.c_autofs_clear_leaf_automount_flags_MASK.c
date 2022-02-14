
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int * prev; int * next; } ;
struct dentry {int d_subdirs; struct list_head d_child; struct dentry* d_parent; } ;


 scalar_t__ FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;

__attribute__((used)) static void FUNC_3(struct dentry *VAR_0)
{
 struct list_head *VAR_1;
 struct dentry *VAR_2;


 if (FUNC_0(VAR_0->d_parent))
  return;

 FUNC_1(VAR_0);

 VAR_2 = VAR_0->d_parent;

 if (FUNC_0(VAR_2->d_parent))
  return;
 VAR_1 = &VAR_0->d_child;

 if (VAR_1->next == &VAR_2->d_subdirs &&
     VAR_1->prev == &VAR_2->d_subdirs)
  FUNC_2(VAR_2);
}
