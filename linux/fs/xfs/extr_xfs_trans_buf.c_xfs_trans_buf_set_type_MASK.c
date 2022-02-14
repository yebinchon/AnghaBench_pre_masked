
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_trans {int dummy; } ;
struct xfs_buf_log_item {int __bli_format; int bli_refcount; } ;
struct xfs_buf {struct xfs_trans* b_transp; struct xfs_buf_log_item* b_log_item; } ;
typedef enum xfs_blft { ____Placeholder_xfs_blft } xfs_blft ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;

void
FUNC_3(
 struct xfs_trans *VAR_0,
 struct xfs_buf *VAR_1,
 enum xfs_blft VAR_2)
{
 struct xfs_buf_log_item *VAR_3 = VAR_1->b_log_item;

 if (!VAR_0)
  return;

 FUNC_0(VAR_1->b_transp == VAR_0);
 FUNC_0(VAR_3 != ((void*)0));
 FUNC_0(FUNC_1(&VAR_3->bli_refcount) > 0);

 FUNC_2(&VAR_3->__bli_format, VAR_2);
}
