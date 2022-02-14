
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnfs_layout_segment {int pls_flags; int pls_list; } ;
struct pnfs_layout_hdr {int plh_flags; int plh_outstanding; int plh_segs; int plh_refcount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int ,int *) ;

__attribute__((used)) static void
FUNC_8(struct pnfs_layout_hdr *VAR_6,
  struct pnfs_layout_segment *VAR_7)
{
 FUNC_0(FUNC_7(VAR_5, &VAR_7->pls_flags));
 FUNC_3(&VAR_7->pls_list);

 FUNC_5(&VAR_6->plh_refcount);
 if (FUNC_7(VAR_4, &VAR_7->pls_flags))
  return;
 if (FUNC_4(&VAR_6->plh_segs) &&
     !FUNC_7(VAR_3, &VAR_6->plh_flags) &&
     !FUNC_7(VAR_2, &VAR_6->plh_flags)) {
  if (FUNC_1(&VAR_6->plh_outstanding) == 0)
   FUNC_6(VAR_1, &VAR_6->plh_flags);
  FUNC_2(VAR_0, &VAR_6->plh_flags);
 }
}
