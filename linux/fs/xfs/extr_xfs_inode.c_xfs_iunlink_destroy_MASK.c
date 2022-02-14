
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_perag {int pag_mount; int pagi_unlinked_hash; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int*) ;
 int VAR_0 ;

void
FUNC_3(
 struct xfs_perag *VAR_1)
{
 bool VAR_2 = 0;

 FUNC_2(&VAR_1->pagi_unlinked_hash,
   VAR_0, &VAR_2);

 FUNC_0(VAR_2 == 0 || FUNC_1(VAR_1->pag_mount));
}
