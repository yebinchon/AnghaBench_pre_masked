
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnfs_layout_segment {int pls_flags; } ;
struct list_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct pnfs_layout_segment*,struct list_head*) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static void
FUNC_3(struct pnfs_layout_segment *VAR_4,
  struct list_head *VAR_5)
{
 FUNC_0(VAR_2, &VAR_4->pls_flags);
 FUNC_0(VAR_1, &VAR_4->pls_flags);
 if (FUNC_2(VAR_3, &VAR_4->pls_flags))
  FUNC_1(VAR_4, VAR_5);
 if (FUNC_2(VAR_0, &VAR_4->pls_flags))
  FUNC_1(VAR_4, VAR_5);
}
