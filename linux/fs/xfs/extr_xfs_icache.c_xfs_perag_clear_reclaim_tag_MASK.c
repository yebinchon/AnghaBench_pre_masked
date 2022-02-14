
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_perag {int pag_agno; scalar_t__ pag_ici_reclaimable; int pag_ici_lock; struct xfs_mount* pag_mount; } ;
struct xfs_mount {int m_perag_lock; int m_perag_tree; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct xfs_mount*,int ,int,int ) ;

__attribute__((used)) static void
FUNC_5(
 struct xfs_perag *VAR_2)
{
 struct xfs_mount *VAR_3 = VAR_2->pag_mount;

 FUNC_0(&VAR_2->pag_ici_lock);
 if (--VAR_2->pag_ici_reclaimable)
  return;


 FUNC_2(&VAR_3->m_perag_lock);
 FUNC_1(&VAR_3->m_perag_tree, VAR_2->pag_agno,
        VAR_0);
 FUNC_3(&VAR_3->m_perag_lock);
 FUNC_4(VAR_3, VAR_2->pag_agno, -1, VAR_1);
}
