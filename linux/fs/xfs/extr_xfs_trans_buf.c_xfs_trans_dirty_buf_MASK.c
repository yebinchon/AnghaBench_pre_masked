
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xfs_trans {int t_flags; } ;
struct TYPE_4__ {int li_flags; int li_cb; } ;
struct TYPE_3__ {int blf_flags; } ;
struct xfs_buf_log_item {int bli_flags; TYPE_2__ bli_item; TYPE_1__ __bli_format; int bli_refcount; } ;
struct xfs_buf {int b_flags; int * b_iodone; struct xfs_trans* b_transp; struct xfs_buf_log_item* b_log_item; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int VAR_8 ;
 int * VAR_9 ;

void
FUNC_3(
 struct xfs_trans *VAR_10,
 struct xfs_buf *VAR_11)
{
 struct xfs_buf_log_item *VAR_12 = VAR_11->b_log_item;

 FUNC_0(VAR_11->b_transp == VAR_10);
 FUNC_0(VAR_12 != ((void*)0));
 FUNC_0(VAR_11->b_iodone == ((void*)0) ||
        VAR_11->b_iodone == VAR_9);
 VAR_11->b_flags |= VAR_0;

 FUNC_0(FUNC_1(&VAR_12->bli_refcount) > 0);
 VAR_11->b_iodone = VAR_9;
 VAR_12->bli_item.li_cb = VAR_8;







 if (VAR_12->bli_flags & VAR_5) {
  VAR_12->bli_flags &= ~VAR_5;
  FUNC_0(VAR_11->b_flags & VAR_1);
  VAR_11->b_flags &= ~VAR_1;
  VAR_12->__bli_format.blf_flags &= ~VAR_2;
 }
 VAR_12->bli_flags |= VAR_3 | VAR_4;

 VAR_10->t_flags |= VAR_7;
 FUNC_2(VAR_6, &VAR_12->bli_item.li_flags);
}
