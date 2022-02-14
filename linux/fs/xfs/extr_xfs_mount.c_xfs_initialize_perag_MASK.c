
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {int pag_ici_reclaim_lock; int pag_state_lock; int pagb_tree; scalar_t__ pagb_count; int pagb_lock; int pagb_wait; int pag_ici_root; int pag_ici_lock; TYPE_2__* pag_mount; scalar_t__ pag_agno; } ;
typedef TYPE_1__ xfs_perag_t ;
struct TYPE_18__ {int m_perag_tree; int m_ag_prealloc_blocks; int m_perag_lock; } ;
typedef TYPE_2__ xfs_mount_t ;
typedef scalar_t__ xfs_agnumber_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 TYPE_1__* FUNC_7 (int *,scalar_t__) ;
 scalar_t__ FUNC_8 (int *,scalar_t__,TYPE_1__*) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 () ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (TYPE_1__*) ;
 scalar_t__ FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (TYPE_1__*) ;
 TYPE_1__* FUNC_18 (TYPE_2__*,scalar_t__) ;
 int FUNC_19 (TYPE_1__*) ;
 int FUNC_20 (TYPE_2__*) ;
 scalar_t__ FUNC_21 (TYPE_2__*,scalar_t__) ;

int
FUNC_22(
 xfs_mount_t *VAR_7,
 xfs_agnumber_t VAR_8,
 xfs_agnumber_t *VAR_9)
{
 xfs_agnumber_t VAR_10;
 xfs_agnumber_t VAR_11 = VAR_5;
 xfs_perag_t *VAR_12;
 int VAR_13 = -VAR_1;






 for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++) {
  VAR_12 = FUNC_18(VAR_7, VAR_10);
  if (VAR_12) {
   FUNC_19(VAR_12);
   continue;
  }

  VAR_12 = FUNC_4(sizeof(*VAR_12), VAR_4);
  if (!VAR_12)
   goto out_unwind_new_pags;
  VAR_12->pag_agno = VAR_10;
  VAR_12->pag_mount = VAR_7;
  FUNC_12(&VAR_12->pag_ici_lock);
  FUNC_6(&VAR_12->pag_ici_reclaim_lock);
  FUNC_0(&VAR_12->pag_ici_root, VAR_2);
  if (FUNC_15(VAR_12))
   goto out_free_pag;
  FUNC_2(&VAR_12->pagb_wait);
  FUNC_12(&VAR_12->pagb_lock);
  VAR_12->pagb_count = 0;
  VAR_12->pagb_tree = VAR_6;

  if (FUNC_9(VAR_3))
   goto out_hash_destroy;

  FUNC_11(&VAR_7->m_perag_lock);
  if (FUNC_8(&VAR_7->m_perag_tree, VAR_10, VAR_12)) {
   FUNC_1(1);
   FUNC_13(&VAR_7->m_perag_lock);
   FUNC_10();
   VAR_13 = -VAR_0;
   goto out_hash_destroy;
  }
  FUNC_13(&VAR_7->m_perag_lock);
  FUNC_10();

  if (VAR_11 == VAR_5)
   VAR_11 = VAR_10;
  VAR_13 = FUNC_17(VAR_12);
  if (VAR_13)
   goto out_hash_destroy;
  FUNC_12(&VAR_12->pag_state_lock);
 }

 VAR_10 = FUNC_21(VAR_7, VAR_8);

 if (VAR_9)
  *VAR_9 = VAR_10;

 VAR_7->m_ag_prealloc_blocks = FUNC_20(VAR_7);
 return 0;

out_hash_destroy:
 FUNC_14(VAR_12);
out_free_pag:
 FUNC_5(&VAR_12->pag_ici_reclaim_lock);
 FUNC_3(VAR_12);
out_unwind_new_pags:

 for (VAR_10 = VAR_11; VAR_10 < VAR_8; VAR_10++) {
  VAR_12 = FUNC_7(&VAR_7->m_perag_tree, VAR_10);
  if (!VAR_12)
   break;
  FUNC_14(VAR_12);
  FUNC_16(VAR_12);
  FUNC_5(&VAR_12->pag_ici_reclaim_lock);
  FUNC_3(VAR_12);
 }
 return VAR_13;
}
