
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint ;
struct xfs_scrub {int tp; TYPE_2__* mp; } ;
struct TYPE_3__ {int sb_qflags; } ;
struct TYPE_4__ {int m_qflags; int m_sb_lock; TYPE_1__ m_sb; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;

void
FUNC_4(
 struct xfs_scrub *VAR_0,
 uint VAR_1)
{
 uint VAR_2;

 VAR_2 = FUNC_3(VAR_1);
 if (!(VAR_2 & VAR_0->mp->m_qflags))
  return;

 VAR_0->mp->m_qflags &= ~VAR_2;
 FUNC_0(&VAR_0->mp->m_sb_lock);
 VAR_0->mp->m_sb.sb_qflags &= ~VAR_2;
 FUNC_1(&VAR_0->mp->m_sb_lock);
 FUNC_2(VAR_0->tp);
}
