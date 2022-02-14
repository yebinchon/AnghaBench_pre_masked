
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ sb_qflags; } ;
struct xfs_mount {int m_sb_lock; TYPE_1__ m_sb; scalar_t__ m_qflags; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct xfs_mount*,int ) ;
 int FUNC_3 (struct xfs_mount*,int) ;

int
FUNC_4(
 struct xfs_mount *VAR_1)
{
 VAR_1->m_qflags = 0;


 if (VAR_1->m_sb.sb_qflags == 0)
  return 0;
 FUNC_0(&VAR_1->m_sb_lock);
 VAR_1->m_sb.sb_qflags = 0;
 FUNC_1(&VAR_1->m_sb_lock);

 if (!FUNC_2(VAR_1, VAR_0))
  return 0;

 return FUNC_3(VAR_1, 0);
}
