
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int sb_agblocks; } ;
struct xfs_mount {TYPE_1__ m_sb; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (struct xfs_mount*,int ) ;
 int FUNC_1 (struct xfs_mount*,int) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;

unsigned int
FUNC_5(
 struct xfs_mount *VAR_1)
{
 unsigned int VAR_2;

 VAR_2 = FUNC_0(VAR_1, FUNC_1(VAR_1, 4));
 VAR_2 += VAR_0;
 VAR_2 += 3;
 if (FUNC_2(&VAR_1->m_sb))
  VAR_2++;
 if (FUNC_4(&VAR_1->m_sb))
  VAR_2++;
 if (FUNC_3(&VAR_1->m_sb))
  VAR_2++;

 return VAR_1->m_sb.sb_agblocks - VAR_2;
}
