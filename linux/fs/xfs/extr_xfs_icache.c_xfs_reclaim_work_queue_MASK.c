
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_mount {int m_reclaim_work; int m_reclaim_workqueue; int m_perag_tree; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int *,int ) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_5(
 struct xfs_mount *VAR_2)
{

 FUNC_3();
 if (FUNC_2(&VAR_2->m_perag_tree, VAR_0)) {
  FUNC_1(VAR_2->m_reclaim_workqueue, &VAR_2->m_reclaim_work,
   FUNC_0(VAR_1 / 6 * 10));
 }
 FUNC_4();
}
