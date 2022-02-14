
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xfs_lsn_t ;
struct xfs_log_vec {struct xfs_log_item* lv_item; struct xfs_log_vec* lv_next; } ;
struct xfs_log_item {TYPE_1__* li_ops; int li_lsn; int li_flags; } ;
struct xfs_ail_cursor {int dummy; } ;
struct xfs_ail {int ail_lock; int ail_mount; } ;
struct TYPE_2__ {int flags; int (* iop_unpin ) (struct xfs_log_item*,int) ;int (* iop_committed ) (struct xfs_log_item*,int ) ;int (* iop_release ) (struct xfs_log_item*) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct xfs_log_item*) ;
 int FUNC_7 (struct xfs_log_item*,int ) ;
 int FUNC_8 (struct xfs_log_item*,int) ;
 int FUNC_9 (struct xfs_log_item*,int) ;
 int FUNC_10 (struct xfs_ail*,struct xfs_ail_cursor*,struct xfs_log_item**,int,int ) ;
 int FUNC_11 (struct xfs_ail_cursor*) ;
 int FUNC_12 (struct xfs_ail*,struct xfs_ail_cursor*,int ) ;
 int FUNC_13 (struct xfs_ail*,struct xfs_log_item*,int ) ;

void
FUNC_14(
 struct xfs_ail *VAR_3,
 struct xfs_log_vec *VAR_4,
 xfs_lsn_t VAR_5,
 bool VAR_6)
{

 struct xfs_log_item *VAR_7[32];
 struct xfs_log_vec *VAR_8;
 struct xfs_ail_cursor VAR_9;
 int VAR_10 = 0;

 FUNC_4(&VAR_3->ail_lock);
 FUNC_12(VAR_3, &VAR_9, VAR_5);
 FUNC_5(&VAR_3->ail_lock);


 for (VAR_8 = VAR_4; VAR_8; VAR_8 = VAR_8->lv_next ) {
  struct xfs_log_item *VAR_11 = VAR_8->lv_item;
  xfs_lsn_t VAR_12;

  if (VAR_6)
   FUNC_3(VAR_2, &VAR_11->li_flags);

  if (VAR_11->li_ops->flags & VAR_1) {
   VAR_11->li_ops->iop_release(VAR_11);
   continue;
  }

  if (VAR_11->li_ops->iop_committed)
   VAR_12 = VAR_11->li_ops->iop_committed(VAR_11, VAR_5);
  else
   VAR_12 = VAR_5;


  if (FUNC_2(VAR_12, (xfs_lsn_t)-1) == 0)
   continue;





  if (VAR_6) {
   FUNC_0(FUNC_1(VAR_3->ail_mount));
   if (VAR_11->li_ops->iop_unpin)
    VAR_11->li_ops->iop_unpin(VAR_11, 1);
   continue;
  }

  if (VAR_12 != VAR_5) {
   FUNC_4(&VAR_3->ail_lock);
   if (FUNC_2(VAR_12, VAR_11->li_lsn) > 0)
    FUNC_13(VAR_3, VAR_11, VAR_12);
   else
    FUNC_5(&VAR_3->ail_lock);
   if (VAR_11->li_ops->iop_unpin)
    VAR_11->li_ops->iop_unpin(VAR_11, 0);
   continue;
  }


  VAR_7[VAR_10++] = VAR_8->lv_item;
  if (VAR_10 >= 32) {
   FUNC_10(VAR_3, &VAR_9, VAR_7,
     32, VAR_5);
   VAR_10 = 0;
  }
 }


 if (VAR_10)
  FUNC_10(VAR_3, &VAR_9, VAR_7, VAR_10, VAR_5);

 FUNC_4(&VAR_3->ail_lock);
 FUNC_11(&VAR_9);
 FUNC_5(&VAR_3->ail_lock);
}
