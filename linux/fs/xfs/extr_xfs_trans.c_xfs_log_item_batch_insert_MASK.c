
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xfs_lsn_t ;
struct xfs_log_item {TYPE_1__* li_ops; } ;
struct xfs_ail_cursor {int dummy; } ;
struct xfs_ail {int ail_lock; } ;
struct TYPE_2__ {int (* iop_unpin ) (struct xfs_log_item*,int ) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct xfs_log_item*,int ) ;
 int FUNC_2 (struct xfs_ail*,struct xfs_ail_cursor*,struct xfs_log_item**,int,int ) ;

__attribute__((used)) static inline void
FUNC_3(
 struct xfs_ail *VAR_0,
 struct xfs_ail_cursor *VAR_1,
 struct xfs_log_item **VAR_2,
 int VAR_3,
 xfs_lsn_t VAR_4)
{
 int VAR_5;

 FUNC_0(&VAR_0->ail_lock);

 FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  struct xfs_log_item *VAR_6 = VAR_2[VAR_5];

  if (VAR_6->li_ops->iop_unpin)
   VAR_6->li_ops->iop_unpin(VAR_6, 0);
 }
}
