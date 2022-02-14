
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xfs_mount {int m_flags; TYPE_2__* m_super; } ;
struct TYPE_3__ {int frozen; } ;
struct TYPE_4__ {TYPE_1__ s_writers; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct xfs_mount*) ;
 int VAR_1 ;

bool
FUNC_2(
 struct xfs_mount *VAR_2,
 int VAR_3)
{
 FUNC_0(VAR_3 > VAR_0);
 if ((VAR_2->m_super->s_writers.frozen >= VAR_3) ||
     FUNC_1(VAR_2) || (VAR_2->m_flags & VAR_1))
  return 0;

 return 1;
}
