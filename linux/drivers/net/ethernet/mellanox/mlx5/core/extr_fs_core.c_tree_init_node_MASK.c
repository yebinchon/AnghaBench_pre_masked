
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fs_node {void (* del_hw_func ) (struct fs_node*) ;void (* del_sw_func ) (struct fs_node*) ;int active; int lock; int children; int list; int refcount; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static void FUNC_3(struct fs_node *VAR_0,
      void (*VAR_1)(struct fs_node *),
      void (*VAR_2)(struct fs_node *))
{
 FUNC_2(&VAR_0->refcount, 1);
 FUNC_0(&VAR_0->list);
 FUNC_0(&VAR_0->children);
 FUNC_1(&VAR_0->lock);
 VAR_0->del_hw_func = VAR_1;
 VAR_0->del_sw_func = VAR_2;
 VAR_0->active = 0;
}
