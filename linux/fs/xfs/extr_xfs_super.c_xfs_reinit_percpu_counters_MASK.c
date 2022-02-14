
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sb_fdblocks; int sb_ifree; int sb_icount; } ;
struct xfs_mount {TYPE_1__ m_sb; int m_fdblocks; int m_ifree; int m_icount; } ;


 int FUNC_0 (int *,int ) ;

void
FUNC_1(
 struct xfs_mount *VAR_0)
{
 FUNC_0(&VAR_0->m_icount, VAR_0->m_sb.sb_icount);
 FUNC_0(&VAR_0->m_ifree, VAR_0->m_sb.sb_ifree);
 FUNC_0(&VAR_0->m_fdblocks, VAR_0->m_sb.sb_fdblocks);
}
