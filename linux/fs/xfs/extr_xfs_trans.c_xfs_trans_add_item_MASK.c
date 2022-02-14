
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfs_trans {int t_items; TYPE_1__* t_mountp; } ;
struct xfs_log_item {scalar_t__ li_ailp; int li_trans; int li_flags; TYPE_1__* li_mountp; } ;
struct TYPE_2__ {scalar_t__ m_ail; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct xfs_trans*,int ) ;

void
FUNC_5(
 struct xfs_trans *VAR_2,
 struct xfs_log_item *VAR_3)
{
 FUNC_0(VAR_3->li_mountp == VAR_2->t_mountp);
 FUNC_0(VAR_3->li_ailp == VAR_2->t_mountp->m_ail);
 FUNC_0(FUNC_2(&VAR_3->li_trans));
 FUNC_0(!FUNC_3(VAR_0, &VAR_3->li_flags));

 FUNC_1(&VAR_3->li_trans, &VAR_2->t_items);
 FUNC_4(VAR_2, VAR_1);
}
