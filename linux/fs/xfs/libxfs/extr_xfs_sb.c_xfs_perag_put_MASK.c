
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_perag {int pag_agno; int pag_mount; int pag_ref; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int,int ) ;

void
FUNC_4(
 struct xfs_perag *VAR_1)
{
 int VAR_2;

 FUNC_0(FUNC_2(&VAR_1->pag_ref) > 0);
 VAR_2 = FUNC_1(&VAR_1->pag_ref);
 FUNC_3(VAR_1->pag_mount, VAR_1->pag_agno, VAR_2, VAR_0);
}
