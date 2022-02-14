
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnfs_layout_segment {int pls_list; int pls_layout; int pls_refcount; } ;
struct list_head {int dummy; } ;


 int FUNC_0 (int *,struct list_head*) ;
 int FUNC_1 (int ,struct pnfs_layout_segment*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static bool FUNC_3(struct pnfs_layout_segment *VAR_0,
  struct list_head *VAR_1)
{
 if (!FUNC_2(&VAR_0->pls_refcount))
  return 0;
 FUNC_1(VAR_0->pls_layout, VAR_0);
 FUNC_0(&VAR_0->pls_list, VAR_1);
 return 1;
}
