
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int xfs_trans_t ;
struct TYPE_5__ {int * b_transp; struct xfs_buf_log_item* b_log_item; } ;
typedef TYPE_2__ xfs_buf_t ;
struct TYPE_4__ {int blf_flags; } ;
struct xfs_buf_log_item {int bli_flags; int bli_refcount; TYPE_1__ __bli_format; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct xfs_buf_log_item*) ;

void
FUNC_3(
 xfs_trans_t *VAR_3,
 xfs_buf_t *VAR_4)
{
 struct xfs_buf_log_item *VAR_5 = VAR_4->b_log_item;

 FUNC_0(VAR_4->b_transp == VAR_3);
 FUNC_0(VAR_5 != ((void*)0));
 FUNC_0(!(VAR_5->bli_flags & VAR_2));
 FUNC_0(!(VAR_5->__bli_format.blf_flags & VAR_0));
 FUNC_0(FUNC_1(&VAR_5->bli_refcount) > 0);
 FUNC_0(VAR_5->bli_flags & VAR_1);

 VAR_5->bli_flags &= ~VAR_1;
 FUNC_2(VAR_5);
}
