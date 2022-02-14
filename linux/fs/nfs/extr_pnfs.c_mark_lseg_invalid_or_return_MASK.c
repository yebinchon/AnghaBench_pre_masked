
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnfs_layout_segment {int pls_layout; } ;
struct list_head {int dummy; } ;


 int FUNC_0 (struct pnfs_layout_segment*,struct list_head*) ;
 int FUNC_1 (int ,struct pnfs_layout_segment*) ;

__attribute__((used)) static int
FUNC_2(struct pnfs_layout_segment *VAR_0,
  struct list_head *VAR_1)
{
 if (!FUNC_0(VAR_0, VAR_1))
  return 0;
 FUNC_1(VAR_0->pls_layout, VAR_0);
 return 1;
}
