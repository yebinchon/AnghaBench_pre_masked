
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_log_item {void (* li_cb ) (struct xfs_buf*,struct xfs_log_item*) ;int li_bio_list; } ;
struct xfs_buf {int * b_iodone; int b_li_list; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 int * VAR_0 ;
 int FUNC_2 (struct xfs_buf*) ;

void
FUNC_3(
 struct xfs_buf *VAR_1,
 void (*VAR_2)(struct xfs_buf *, struct xfs_log_item *),
 struct xfs_log_item *VAR_3)
{
 FUNC_0(FUNC_2(VAR_1));

 VAR_3->li_cb = VAR_2;
 FUNC_1(&VAR_3->li_bio_list, &VAR_1->b_li_list);

 FUNC_0(VAR_1->b_iodone == ((void*)0) ||
        VAR_1->b_iodone == VAR_0);
 VAR_1->b_iodone = VAR_0;
}
