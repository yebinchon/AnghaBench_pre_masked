
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int xfs_trans_t ;
struct TYPE_6__ {int * b_transp; struct xfs_buf_log_item* b_log_item; } ;
typedef TYPE_2__ xfs_buf_t ;
struct TYPE_5__ {int li_cb; } ;
struct xfs_buf_log_item {TYPE_1__ bli_item; int bli_flags; int bli_refcount; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (int *,TYPE_2__*,int ) ;

void
FUNC_3(
 xfs_trans_t *VAR_3,
 xfs_buf_t *VAR_4)
{
 struct xfs_buf_log_item *VAR_5 = VAR_4->b_log_item;

 FUNC_0(VAR_4->b_transp == VAR_3);
 FUNC_0(VAR_5 != ((void*)0));
 FUNC_0(FUNC_1(&VAR_5->bli_refcount) > 0);

 VAR_5->bli_flags |= VAR_1;
 VAR_5->bli_item.li_cb = VAR_2;
 FUNC_2(VAR_3, VAR_4, VAR_0);
}
