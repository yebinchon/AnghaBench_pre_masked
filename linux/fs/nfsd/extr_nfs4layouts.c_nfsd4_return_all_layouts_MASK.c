
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_layout_stateid {int ls_lock; int ls_layouts; } ;
struct list_head {int dummy; } ;


 int FUNC_0 (int *,struct list_head*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct nfs4_layout_stateid *VAR_0,
  struct list_head *VAR_1)
{
 FUNC_1(&VAR_0->ls_lock);
 FUNC_0(&VAR_0->ls_layouts, VAR_1);
 FUNC_2(&VAR_0->ls_lock);
}
