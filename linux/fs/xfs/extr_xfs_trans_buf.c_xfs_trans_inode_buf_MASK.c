
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int xfs_trans_t ;
struct TYPE_4__ {int * b_transp; struct xfs_buf_log_item* b_log_item; } ;
typedef TYPE_1__ xfs_buf_t ;
struct xfs_buf_log_item {int bli_flags; int bli_refcount; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_1__*,int ) ;

void
FUNC_3(
 xfs_trans_t *VAR_2,
 xfs_buf_t *VAR_3)
{
 struct xfs_buf_log_item *VAR_4 = VAR_3->b_log_item;

 FUNC_0(VAR_3->b_transp == VAR_2);
 FUNC_0(VAR_4 != ((void*)0));
 FUNC_0(FUNC_1(&VAR_4->bli_refcount) > 0);

 VAR_4->bli_flags |= VAR_1;
 FUNC_2(VAR_2, VAR_3, VAR_0);
}
