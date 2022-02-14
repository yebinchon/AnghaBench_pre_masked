
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int xfs_extlen_t ;
typedef scalar_t__ xfs_agnumber_t ;
typedef scalar_t__ xfs_agblock_t ;
typedef int uint64_t ;
struct TYPE_3__ {int sb_inopblock; scalar_t__ sb_logblocks; scalar_t__ sb_logstart; } ;
struct xfs_mount {TYPE_1__ m_sb; } ;
struct TYPE_4__ {scalar_t__* inobt_mxr; int inobt_mnr; } ;


 TYPE_2__* FUNC_0 (struct xfs_mount*) ;
 scalar_t__ FUNC_1 (struct xfs_mount*,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct xfs_mount*,scalar_t__) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static xfs_extlen_t
FUNC_4(
 struct xfs_mount *VAR_1,
 xfs_agnumber_t VAR_2)
{
 xfs_agblock_t VAR_3 = FUNC_2(VAR_1, VAR_2);


 if (FUNC_0(VAR_1)->inobt_mxr[0] == 0)
  return 0;






 if (VAR_1->m_sb.sb_logstart &&
     FUNC_1(VAR_1, VAR_1->m_sb.sb_logstart) == VAR_2)
  VAR_3 -= VAR_1->m_sb.sb_logblocks;

 return FUNC_3(FUNC_0(VAR_1)->inobt_mnr,
    (uint64_t)VAR_3 * VAR_1->m_sb.sb_inopblock /
     VAR_0);
}
