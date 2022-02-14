
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfs_buf {int b_state; int b_lock; int b_hold; int b_lru; TYPE_1__* b_target; int b_lru_ref; int b_flags; } ;
struct TYPE_2__ {int bt_lru; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct xfs_buf*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct xfs_buf*) ;

void
FUNC_9(
 struct xfs_buf *VAR_3)
{
 FUNC_0(FUNC_8(VAR_3));

 VAR_3->b_flags |= VAR_0;






 VAR_3->b_flags &= ~VAR_2;







 FUNC_6(&VAR_3->b_lock);
 FUNC_1(VAR_3);

 FUNC_4(&VAR_3->b_lru_ref, 0);
 if (!(VAR_3->b_state & VAR_1) &&
     (FUNC_5(&VAR_3->b_target->bt_lru, &VAR_3->b_lru)))
  FUNC_2(&VAR_3->b_hold);

 FUNC_0(FUNC_3(&VAR_3->b_hold) >= 1);
 FUNC_7(&VAR_3->b_lock);
}
