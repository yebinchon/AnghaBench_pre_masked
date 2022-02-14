
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfs_buf {int b_state; TYPE_1__* b_target; int b_lock; } ;
struct TYPE_2__ {int bt_io_count; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void
FUNC_2(
 struct xfs_buf *VAR_1)
{
 FUNC_0(&VAR_1->b_lock);

 if (VAR_1->b_state & VAR_0) {
  VAR_1->b_state &= ~VAR_0;
  FUNC_1(&VAR_1->b_target->bt_io_count);
 }
}
