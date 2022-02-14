
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_rmap_irec {int rm_flags; } ;
struct xfs_fsmap {int fmr_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_0(
 struct xfs_rmap_irec *VAR_6,
 struct xfs_fsmap *VAR_7)
{
 VAR_6->rm_flags = 0;
 if (VAR_7->fmr_flags & VAR_0)
  VAR_6->rm_flags |= VAR_3;
 if (VAR_7->fmr_flags & VAR_1)
  VAR_6->rm_flags |= VAR_4;
 if (VAR_7->fmr_flags & VAR_2)
  VAR_6->rm_flags |= VAR_5;
}
