
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sb_agblocks; } ;
struct xfs_mount {TYPE_1__ m_sb; int m_rmap_mnr; int m_rmap_maxlevels; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;

void
FUNC_2(
 struct xfs_mount *VAR_1)
{
 if (FUNC_1(&VAR_1->m_sb))
  VAR_1->m_rmap_maxlevels = VAR_0;
 else
  VAR_1->m_rmap_maxlevels = FUNC_0(
    VAR_1->m_rmap_mnr, VAR_1->m_sb.sb_agblocks);
}
