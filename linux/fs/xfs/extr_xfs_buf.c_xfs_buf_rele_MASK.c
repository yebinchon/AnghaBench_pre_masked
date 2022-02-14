
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int b_flags; int b_state; int b_lock; int b_rhash_head; int b_lru; TYPE_1__* b_target; int b_hold; int b_lru_ref; struct xfs_perag* b_pag; } ;
typedef TYPE_2__ xfs_buf_t ;
struct xfs_perag {int pag_buf_lock; int pag_buf_hash; } ;
struct TYPE_8__ {int bt_lru; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int *,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (TYPE_2__*,int ) ;
 int FUNC_13 (TYPE_2__*) ;
 int VAR_4 ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (struct xfs_perag*) ;

void
FUNC_16(
 xfs_buf_t *VAR_5)
{
 struct xfs_perag *VAR_6 = VAR_5->b_pag;
 bool VAR_7;
 bool VAR_8 = 0;

 FUNC_12(VAR_5, VAR_2);

 if (!VAR_6) {
  FUNC_0(FUNC_6(&VAR_5->b_lru));
  if (FUNC_3(&VAR_5->b_hold)) {
   FUNC_14(VAR_5);
   FUNC_13(VAR_5);
  }
  return;
 }

 FUNC_0(FUNC_5(&VAR_5->b_hold) > 0);
 FUNC_10(&VAR_5->b_lock);
 VAR_7 = FUNC_2(&VAR_5->b_hold, &VAR_6->pag_buf_lock);
 if (!VAR_7) {






  if ((FUNC_5(&VAR_5->b_hold) == 1) && !FUNC_6(&VAR_5->b_lru))
   FUNC_1(VAR_5);
  goto out_unlock;
 }


 FUNC_1(VAR_5);
 if (!(VAR_5->b_flags & VAR_0) && FUNC_5(&VAR_5->b_lru_ref)) {





  if (FUNC_7(&VAR_5->b_target->bt_lru, &VAR_5->b_lru)) {
   VAR_5->b_state &= ~VAR_1;
   FUNC_4(&VAR_5->b_hold);
  }
  FUNC_11(&VAR_6->pag_buf_lock);
 } else {






  if (!(VAR_5->b_state & VAR_1)) {
   FUNC_8(&VAR_5->b_target->bt_lru, &VAR_5->b_lru);
  } else {
   FUNC_0(FUNC_6(&VAR_5->b_lru));
  }

  FUNC_0(!(VAR_5->b_flags & VAR_3));
  FUNC_9(&VAR_6->pag_buf_hash, &VAR_5->b_rhash_head,
           VAR_4);
  FUNC_11(&VAR_6->pag_buf_lock);
  FUNC_15(VAR_6);
  VAR_8 = 1;
 }

out_unlock:
 FUNC_11(&VAR_5->b_lock);

 if (VAR_8)
  FUNC_13(VAR_5);
}
