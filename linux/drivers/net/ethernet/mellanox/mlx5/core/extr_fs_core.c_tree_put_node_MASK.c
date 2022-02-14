
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fs_node {int (* del_sw_func ) (struct fs_node*) ;int list; int (* del_hw_func ) (struct fs_node*) ;int refcount; struct fs_node* parent; } ;


 int FUNC_0 (struct fs_node*,int) ;
 int FUNC_1 (struct fs_node*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct fs_node*) ;
 int FUNC_5 (struct fs_node*) ;
 int FUNC_6 (struct fs_node*,int) ;

__attribute__((used)) static void FUNC_7(struct fs_node *VAR_0, bool VAR_1)
{
 struct fs_node *VAR_2 = VAR_0->parent;

 if (FUNC_3(&VAR_0->refcount)) {
  if (VAR_0->del_hw_func)
   VAR_0->del_hw_func(VAR_0);
  if (VAR_2) {



   FUNC_0(VAR_2, VAR_1);
   FUNC_2(&VAR_0->list);
   if (VAR_0->del_sw_func)
    VAR_0->del_sw_func(VAR_0);
   FUNC_6(VAR_2, VAR_1);
  } else {
   FUNC_1(VAR_0);
  }
  VAR_0 = ((void*)0);
 }
 if (!VAR_0 && VAR_2)
  FUNC_7(VAR_2, VAR_1);
}
