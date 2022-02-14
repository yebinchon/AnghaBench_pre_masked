
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_agnumber_t ;
struct xfs_perag {int pag_ref; } ;
struct xfs_mount {int m_perag_tree; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 struct xfs_perag* FUNC_3 (int *,int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct xfs_mount*,int ,int,int ) ;

struct xfs_perag *
FUNC_7(
 struct xfs_mount *VAR_1,
 xfs_agnumber_t VAR_2)
{
 struct xfs_perag *VAR_3;
 int VAR_4 = 0;

 FUNC_4();
 VAR_3 = FUNC_3(&VAR_1->m_perag_tree, VAR_2);
 if (VAR_3) {
  FUNC_0(FUNC_2(&VAR_3->pag_ref) >= 0);
  VAR_4 = FUNC_1(&VAR_3->pag_ref);
 }
 FUNC_5();
 FUNC_6(VAR_1, VAR_2, VAR_4, VAR_0);
 return VAR_3;
}
