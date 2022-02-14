
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xfs_agnumber_t ;
typedef int xfs_agblock_t ;
struct TYPE_2__ {int sb_agcount; int sb_agblocks; int sb_dblocks; } ;
struct xfs_mount {TYPE_1__ m_sb; } ;


 int FUNC_0 (int) ;

xfs_agblock_t
FUNC_1(
 struct xfs_mount *VAR_0,
 xfs_agnumber_t VAR_1)
{
 FUNC_0(VAR_1 < VAR_0->m_sb.sb_agcount);

 if (VAR_1 < VAR_0->m_sb.sb_agcount - 1)
  return VAR_0->m_sb.sb_agblocks;
 return VAR_0->m_sb.sb_dblocks - (VAR_1 * VAR_0->m_sb.sb_agblocks);
}
