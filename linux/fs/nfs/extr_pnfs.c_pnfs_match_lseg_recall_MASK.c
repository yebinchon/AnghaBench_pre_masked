
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct pnfs_layout_segment {int pls_range; int pls_seq; } ;
struct pnfs_layout_range {int dummy; } ;


 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int *,struct pnfs_layout_range const*) ;

__attribute__((used)) static bool
FUNC_2(const struct pnfs_layout_segment *VAR_0,
  const struct pnfs_layout_range *VAR_1,
  u32 VAR_2)
{
 if (VAR_2 != 0 && FUNC_0(VAR_0->pls_seq, VAR_2))
  return 0;
 if (VAR_1 == ((void*)0))
  return 1;
 return FUNC_1(&VAR_0->pls_range, VAR_1);
}
