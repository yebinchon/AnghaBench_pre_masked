
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_buf {struct xfs_buf_log_item* b_log_item; int b_error; struct xfs_trans* b_transp; int b_flags; } ;
typedef struct xfs_buf xfs_buf_t ;
typedef int xfs_buf_flags_t ;
struct xfs_trans {int t_mountp; } ;
struct xfs_buftarg {int dummy; } ;
struct xfs_buf_map {int dummy; } ;
struct xfs_buf_log_item {int bli_recur; int bli_refcount; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct xfs_trans*,struct xfs_buf*,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct xfs_buf_log_item*) ;
 int FUNC_5 (struct xfs_buf_log_item*) ;
 struct xfs_buf* FUNC_6 (struct xfs_buftarg*,struct xfs_buf_map*,int,int ) ;
 int FUNC_7 (struct xfs_buf*) ;
 int FUNC_8 (struct xfs_buf*) ;
 struct xfs_buf* FUNC_9 (struct xfs_trans*,struct xfs_buftarg*,struct xfs_buf_map*,int) ;

struct xfs_buf *
FUNC_10(
 struct xfs_trans *VAR_1,
 struct xfs_buftarg *VAR_2,
 struct xfs_buf_map *VAR_3,
 int VAR_4,
 xfs_buf_flags_t VAR_5)
{
 xfs_buf_t *VAR_6;
 struct xfs_buf_log_item *VAR_7;

 if (!VAR_1)
  return FUNC_6(VAR_2, VAR_3, VAR_4, VAR_5);







 VAR_6 = FUNC_9(VAR_1, VAR_2, VAR_3, VAR_4);
 if (VAR_6 != ((void*)0)) {
  FUNC_0(FUNC_7(VAR_6));
  if (FUNC_1(VAR_1->t_mountp)) {
   FUNC_8(VAR_6);
   VAR_6->b_flags |= VAR_0;
  }

  FUNC_0(VAR_6->b_transp == VAR_1);
  VAR_7 = VAR_6->b_log_item;
  FUNC_0(VAR_7 != ((void*)0));
  FUNC_0(FUNC_3(&VAR_7->bli_refcount) > 0);
  VAR_7->bli_recur++;
  FUNC_5(VAR_7);
  return VAR_6;
 }

 VAR_6 = FUNC_6(VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_6 == ((void*)0)) {
  return ((void*)0);
 }

 FUNC_0(!VAR_6->b_error);

 FUNC_2(VAR_1, VAR_6, 1);
 FUNC_4(VAR_6->b_log_item);
 return VAR_6;
}
