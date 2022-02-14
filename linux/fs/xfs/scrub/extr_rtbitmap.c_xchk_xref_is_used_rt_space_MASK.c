
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ xfs_rtblock_t ;
typedef scalar_t__ xfs_extlen_t ;
struct xfs_scrub {TYPE_2__* mp; int tp; int sm; } ;
struct TYPE_7__ {int i_ino; } ;
struct TYPE_5__ {int sb_rextsize; } ;
struct TYPE_6__ {TYPE_3__* m_rbmip; TYPE_1__ m_sb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (struct xfs_scrub*,int ) ;
 int FUNC_2 (struct xfs_scrub*,int*,int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*,int) ;
 int FUNC_5 (TYPE_3__*,int) ;
 int FUNC_6 (TYPE_2__*,int ,scalar_t__,scalar_t__,int*) ;

void
FUNC_7(
 struct xfs_scrub *VAR_2,
 xfs_rtblock_t VAR_3,
 xfs_extlen_t VAR_4)
{
 xfs_rtblock_t VAR_5;
 xfs_rtblock_t VAR_6;
 xfs_rtblock_t VAR_7;
 bool VAR_8;
 int VAR_9;

 if (FUNC_3(VAR_2->sm))
  return;

 VAR_5 = VAR_3;
 VAR_6 = VAR_3 + VAR_4 - 1;
 FUNC_0(VAR_5, VAR_2->mp->m_sb.sb_rextsize);
 FUNC_0(VAR_6, VAR_2->mp->m_sb.sb_rextsize);
 VAR_7 = VAR_6 - VAR_5 + 1;
 FUNC_4(VAR_2->mp->m_rbmip, VAR_1 | VAR_0);
 VAR_9 = FUNC_6(VAR_2->mp, VAR_2->tp, VAR_5, VAR_7,
   &VAR_8);
 if (!FUNC_2(VAR_2, &VAR_9, ((void*)0)))
  goto out_unlock;
 if (VAR_8)
  FUNC_1(VAR_2, VAR_2->mp->m_rbmip->i_ino);
out_unlock:
 FUNC_5(VAR_2->mp->m_rbmip, VAR_1 | VAR_0);
}
