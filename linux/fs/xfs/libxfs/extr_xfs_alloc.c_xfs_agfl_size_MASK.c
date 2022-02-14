
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xfs_agblock_t ;
struct TYPE_2__ {unsigned int sb_sectsize; } ;
struct xfs_mount {TYPE_1__ m_sb; } ;
struct xfs_agfl {int dummy; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;

unsigned int
FUNC_1(
 struct xfs_mount *VAR_0)
{
 unsigned int VAR_1 = VAR_0->m_sb.sb_sectsize;

 if (FUNC_0(&VAR_0->m_sb))
  VAR_1 -= sizeof(struct xfs_agfl);

 return VAR_1 / sizeof(xfs_agblock_t);
}
