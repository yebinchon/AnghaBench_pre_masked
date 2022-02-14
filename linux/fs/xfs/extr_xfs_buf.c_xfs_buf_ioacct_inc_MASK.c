
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfs_buf {int b_flags; int b_state; int b_lock; TYPE_1__* b_target; } ;
struct TYPE_2__ {int bt_io_count; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline void
FUNC_4(
 struct xfs_buf *VAR_3)
{
 if (VAR_3->b_flags & VAR_1)
  return;

 FUNC_0(VAR_3->b_flags & VAR_0);
 FUNC_2(&VAR_3->b_lock);
 if (!(VAR_3->b_state & VAR_2)) {
  VAR_3->b_state |= VAR_2;
  FUNC_1(&VAR_3->b_target->bt_io_count);
 }
 FUNC_3(&VAR_3->b_lock);
}
