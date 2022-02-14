
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_mount {unsigned int m_rt_sick; unsigned int m_rt_checked; int m_sb_lock; } ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct xfs_mount*,unsigned int) ;

void
FUNC_4(
 struct xfs_mount *VAR_1,
 unsigned int VAR_2)
{
 FUNC_0(!(VAR_2 & ~VAR_0));
 FUNC_3(VAR_1, VAR_2);

 FUNC_1(&VAR_1->m_sb_lock);
 VAR_1->m_rt_sick &= ~VAR_2;
 VAR_1->m_rt_checked |= VAR_2;
 FUNC_2(&VAR_1->m_sb_lock);
}
