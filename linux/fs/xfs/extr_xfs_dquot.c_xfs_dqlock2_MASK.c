
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int d_id; } ;
struct TYPE_6__ {int q_qlock; TYPE_1__ q_core; } ;
typedef TYPE_2__ xfs_dquot_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;

void
FUNC_4(
 xfs_dquot_t *VAR_1,
 xfs_dquot_t *VAR_2)
{
 if (VAR_1 && VAR_2) {
  FUNC_0(VAR_1 != VAR_2);
  if (FUNC_1(VAR_1->q_core.d_id) >
      FUNC_1(VAR_2->q_core.d_id)) {
   FUNC_2(&VAR_2->q_qlock);
   FUNC_3(&VAR_1->q_qlock, VAR_0);
  } else {
   FUNC_2(&VAR_1->q_qlock);
   FUNC_3(&VAR_2->q_qlock, VAR_0);
  }
 } else if (VAR_1) {
  FUNC_2(&VAR_1->q_qlock);
 } else if (VAR_2) {
  FUNC_2(&VAR_2->q_qlock);
 }
}
