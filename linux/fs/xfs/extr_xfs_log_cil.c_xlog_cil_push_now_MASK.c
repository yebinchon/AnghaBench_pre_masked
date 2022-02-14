
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ xfs_lsn_t ;
struct xlog {TYPE_1__* l_mp; struct xfs_cil* l_cilp; } ;
struct xfs_cil {scalar_t__ xc_current_sequence; scalar_t__ xc_push_seq; int xc_push_lock; int xc_push_work; int xc_cil; } ;
struct TYPE_2__ {int m_cil_workqueue; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(
 struct xlog *VAR_0,
 xfs_lsn_t VAR_1)
{
 struct xfs_cil *VAR_2 = VAR_0->l_cilp;

 if (!VAR_2)
  return;

 FUNC_0(VAR_1 && VAR_1 <= VAR_2->xc_current_sequence);


 FUNC_1(&VAR_2->xc_push_work);





 FUNC_4(&VAR_2->xc_push_lock);
 if (FUNC_2(&VAR_2->xc_cil) || VAR_1 <= VAR_2->xc_push_seq) {
  FUNC_5(&VAR_2->xc_push_lock);
  return;
 }

 VAR_2->xc_push_seq = VAR_1;
 FUNC_3(VAR_0->l_mp->m_cil_workqueue, &VAR_2->xc_push_work);
 FUNC_5(&VAR_2->xc_push_lock);
}
