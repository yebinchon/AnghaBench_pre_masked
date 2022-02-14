
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xfs_scrub {TYPE_2__* sm; struct xchk_fscounters* buf; struct xfs_mount* mp; } ;
struct TYPE_3__ {scalar_t__ sb_dblocks; } ;
struct xfs_mount {int m_fdblocks; int m_ifree; int m_icount; TYPE_1__ m_sb; } ;
struct xchk_fscounters {scalar_t__ icount_min; scalar_t__ icount_max; int fdblocks; int ifree; int icount; } ;
typedef scalar_t__ int64_t ;
struct TYPE_4__ {int sm_flags; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct xfs_mount*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct xfs_scrub*,struct xchk_fscounters*) ;
 int FUNC_3 (struct xfs_scrub*,scalar_t__,int *,int ) ;
 int FUNC_4 (struct xfs_scrub*,int ,int ,int*) ;
 int FUNC_5 (struct xfs_scrub*) ;

int
FUNC_6(
 struct xfs_scrub *VAR_2)
{
 struct xfs_mount *VAR_3 = VAR_2->mp;
 struct xchk_fscounters *VAR_4 = VAR_2->buf;
 int64_t VAR_5, VAR_6, VAR_7;
 int VAR_8;


 VAR_5 = FUNC_1(&VAR_3->m_icount);
 VAR_6 = FUNC_1(&VAR_3->m_ifree);
 VAR_7 = FUNC_1(&VAR_3->m_fdblocks);


 if (VAR_5 < 0 || VAR_6 < 0 || VAR_7 < 0)
  FUNC_5(VAR_2);


 if (VAR_5 < VAR_4->icount_min || VAR_5 > VAR_4->icount_max)
  FUNC_5(VAR_2);


 if (VAR_7 > VAR_3->m_sb.sb_dblocks)
  FUNC_5(VAR_2);





 if (VAR_6 > VAR_5 && VAR_6 - VAR_5 > VAR_0)
  FUNC_5(VAR_2);


 VAR_8 = FUNC_2(VAR_2, VAR_4);
 if (!FUNC_4(VAR_2, 0, FUNC_0(VAR_3), &VAR_8))
  return VAR_8;
 if (VAR_2->sm->sm_flags & VAR_1)
  return 0;


 if (!FUNC_3(VAR_2, VAR_5, &VAR_3->m_icount, VAR_4->icount))
  FUNC_5(VAR_2);

 if (!FUNC_3(VAR_2, VAR_6, &VAR_3->m_ifree, VAR_4->ifree))
  FUNC_5(VAR_2);

 if (!FUNC_3(VAR_2, VAR_7, &VAR_3->m_fdblocks,
   VAR_4->fdblocks))
  FUNC_5(VAR_2);

 return 0;
}
