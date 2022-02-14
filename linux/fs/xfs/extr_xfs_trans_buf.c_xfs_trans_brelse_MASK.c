
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfs_trans {int dummy; } ;
struct TYPE_2__ {scalar_t__ li_type; int li_flags; } ;
struct xfs_buf_log_item {scalar_t__ bli_recur; int bli_flags; TYPE_1__ bli_item; int bli_refcount; } ;
struct xfs_buf {struct xfs_trans* b_transp; struct xfs_buf_log_item* b_log_item; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int FUNC_3 (struct xfs_buf_log_item*) ;
 int FUNC_4 (struct xfs_buf_log_item*) ;
 int FUNC_5 (struct xfs_buf*) ;
 int FUNC_6 (TYPE_1__*) ;

void
FUNC_7(
 struct xfs_trans *VAR_5,
 struct xfs_buf *VAR_6)
{
 struct xfs_buf_log_item *VAR_7 = VAR_6->b_log_item;

 FUNC_0(VAR_6->b_transp == VAR_5);

 if (!VAR_5) {
  FUNC_5(VAR_6);
  return;
 }

 FUNC_3(VAR_7);
 FUNC_0(VAR_7->bli_item.li_type == VAR_3);
 FUNC_0(FUNC_1(&VAR_7->bli_refcount) > 0);





 if (VAR_7->bli_recur > 0) {
  VAR_7->bli_recur--;
  return;
 }





 if (FUNC_2(VAR_4, &VAR_7->bli_item.li_flags))
  return;
 if (VAR_7->bli_flags & VAR_2)
  return;





 FUNC_0(!(VAR_7->bli_flags & VAR_1));
 FUNC_6(&VAR_7->bli_item);
 VAR_7->bli_flags &= ~VAR_0;


 FUNC_4(VAR_7);

 VAR_6->b_transp = ((void*)0);
 FUNC_5(VAR_6);
}
