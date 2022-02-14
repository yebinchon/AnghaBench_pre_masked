
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int xfs_rtalloc_query_range_fn ;
struct xfs_trans {TYPE_1__* t_mountp; } ;
struct xfs_rtalloc_rec {scalar_t__ ar_extcount; scalar_t__ ar_startext; } ;
struct TYPE_4__ {scalar_t__ sb_rextents; } ;
struct TYPE_3__ {TYPE_2__ m_sb; } ;


 int FUNC_0 (struct xfs_trans*,struct xfs_rtalloc_rec*,struct xfs_rtalloc_rec*,int ,void*) ;

int
FUNC_1(
 struct xfs_trans *VAR_0,
 xfs_rtalloc_query_range_fn VAR_1,
 void *VAR_2)
{
 struct xfs_rtalloc_rec VAR_3[2];

 VAR_3[0].ar_startext = 0;
 VAR_3[1].ar_startext = VAR_0->t_mountp->m_sb.sb_rextents - 1;
 VAR_3[0].ar_extcount = VAR_3[1].ar_extcount = 0;

 return FUNC_0(VAR_0, &VAR_3[0], &VAR_3[1], VAR_1, VAR_2);
}
