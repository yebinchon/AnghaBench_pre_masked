
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sb_agblocks; } ;
struct xfs_mount {TYPE_1__ m_sb; int m_refc_mnr; int m_refc_maxlevels; } ;


 int FUNC_0 (int ,int ) ;

void
FUNC_1(
 struct xfs_mount *VAR_0)
{
 VAR_0->m_refc_maxlevels = FUNC_0(
   VAR_0->m_refc_mnr, VAR_0->m_sb.sb_agblocks);
}
