
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sb_agcount; } ;
struct xfs_mount {TYPE_1__ m_sb; } ;


 int VAR_0 ;

unsigned int
FUNC_0(
 struct xfs_mount *VAR_1)
{
 return VAR_1->m_sb.sb_agcount * (VAR_0 + 4);
}
