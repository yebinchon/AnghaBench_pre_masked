
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfs_log_item {struct xfs_buf* li_buf; int li_flags; TYPE_1__* li_ailp; } ;
struct xfs_buf {int dummy; } ;
struct TYPE_2__ {int ail_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct xfs_buf*) ;

__attribute__((used)) static inline void
FUNC_3(
 struct xfs_log_item *VAR_1,
 struct xfs_buf *VAR_2)
{
 FUNC_0(&VAR_1->li_ailp->ail_lock);

 if (!FUNC_1(VAR_0, &VAR_1->li_flags)) {
  FUNC_2(VAR_2);
  VAR_1->li_buf = VAR_2;
 }
}
