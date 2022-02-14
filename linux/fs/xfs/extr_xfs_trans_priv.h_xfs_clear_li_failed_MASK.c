
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfs_log_item {struct xfs_buf* li_buf; int li_flags; TYPE_1__* li_ailp; } ;
struct xfs_buf {int dummy; } ;
struct TYPE_2__ {int ail_lock; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct xfs_buf*) ;

__attribute__((used)) static inline void
FUNC_5(
 struct xfs_log_item *VAR_2)
{
 struct xfs_buf *VAR_3 = VAR_2->li_buf;

 FUNC_0(FUNC_3(VAR_1, &VAR_2->li_flags));
 FUNC_1(&VAR_2->li_ailp->ail_lock);

 if (FUNC_2(VAR_0, &VAR_2->li_flags)) {
  VAR_2->li_buf = ((void*)0);
  FUNC_4(VAR_3);
 }
}
