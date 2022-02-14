
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int xfs_trans_t ;
struct TYPE_5__ {struct xfs_buf_log_item* b_log_item; int * b_transp; } ;
typedef TYPE_1__ xfs_buf_t ;
struct xfs_mount {TYPE_1__* m_sb_bp; } ;
struct xfs_buf_log_item {int bli_recur; int bli_refcount; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_1__*,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct xfs_buf_log_item*) ;
 int FUNC_4 (struct xfs_buf_log_item*) ;
 TYPE_1__* FUNC_5 (struct xfs_mount*) ;

xfs_buf_t *
FUNC_6(
 xfs_trans_t *VAR_0,
 struct xfs_mount *VAR_1)
{
 xfs_buf_t *VAR_2;
 struct xfs_buf_log_item *VAR_3;





 if (VAR_0 == ((void*)0))
  return FUNC_5(VAR_1);







 VAR_2 = VAR_1->m_sb_bp;
 if (VAR_2->b_transp == VAR_0) {
  VAR_3 = VAR_2->b_log_item;
  FUNC_0(VAR_3 != ((void*)0));
  FUNC_0(FUNC_2(&VAR_3->bli_refcount) > 0);
  VAR_3->bli_recur++;
  FUNC_4(VAR_3);
  return VAR_2;
 }

 VAR_2 = FUNC_5(VAR_1);
 if (VAR_2 == ((void*)0))
  return ((void*)0);

 FUNC_1(VAR_0, VAR_2, 1);
 FUNC_3(VAR_2->b_log_item);
 return VAR_2;
}
