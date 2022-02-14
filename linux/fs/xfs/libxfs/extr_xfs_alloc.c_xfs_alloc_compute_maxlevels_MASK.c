
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sb_agblocks; } ;
struct TYPE_5__ {TYPE_1__ m_sb; int m_alloc_mnr; int m_ag_maxlevels; } ;
typedef TYPE_2__ xfs_mount_t ;


 int FUNC_0 (int ,int) ;

void
FUNC_1(
 xfs_mount_t *VAR_0)
{
 VAR_0->m_ag_maxlevels = FUNC_0(VAR_0->m_alloc_mnr,
   (VAR_0->m_sb.sb_agblocks + 1) / 2);
}
