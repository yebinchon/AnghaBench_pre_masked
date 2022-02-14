
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_perag {unsigned int pag_sick; unsigned int pag_checked; int pag_state_lock; int pag_agno; int pag_mount; } ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,unsigned int) ;

void
FUNC_4(
 struct xfs_perag *VAR_1,
 unsigned int VAR_2)
{
 FUNC_0(!(VAR_2 & ~VAR_0));
 FUNC_3(VAR_1->pag_mount, VAR_1->pag_agno, VAR_2);

 FUNC_1(&VAR_1->pag_state_lock);
 VAR_1->pag_sick |= VAR_2;
 VAR_1->pag_checked |= VAR_2;
 FUNC_2(&VAR_1->pag_state_lock);
}
