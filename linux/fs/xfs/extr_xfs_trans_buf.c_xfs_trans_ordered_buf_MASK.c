
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_trans {int dummy; } ;
struct xfs_buf_log_item {int bli_flags; int bli_refcount; } ;
struct xfs_buf {struct xfs_trans* b_transp; struct xfs_buf_log_item* b_log_item; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct xfs_buf_log_item*) ;
 scalar_t__ FUNC_3 (struct xfs_buf_log_item*) ;
 int FUNC_4 (struct xfs_trans*,struct xfs_buf*) ;

bool
FUNC_5(
 struct xfs_trans *VAR_1,
 struct xfs_buf *VAR_2)
{
 struct xfs_buf_log_item *VAR_3 = VAR_2->b_log_item;

 FUNC_0(VAR_2->b_transp == VAR_1);
 FUNC_0(VAR_3 != ((void*)0));
 FUNC_0(FUNC_1(&VAR_3->bli_refcount) > 0);

 if (FUNC_3(VAR_3))
  return 0;

 VAR_3->bli_flags |= VAR_0;
 FUNC_2(VAR_3);





 FUNC_4(VAR_1, VAR_2);
 return 1;
}
