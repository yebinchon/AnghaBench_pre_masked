
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_buf_log_item {int __bli_format; } ;
struct xfs_buf {struct xfs_buf_log_item* b_log_item; } ;
typedef enum xfs_blft { ____Placeholder_xfs_blft } xfs_blft ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;

void
FUNC_2(
 struct xfs_buf *VAR_0,
 struct xfs_buf *VAR_1)
{
 struct xfs_buf_log_item *VAR_2 = VAR_1->b_log_item;
 struct xfs_buf_log_item *VAR_3 = VAR_0->b_log_item;
 enum xfs_blft VAR_4;

 VAR_4 = FUNC_0(&VAR_2->__bli_format);
 FUNC_1(&VAR_3->__bli_format, VAR_4);
}
