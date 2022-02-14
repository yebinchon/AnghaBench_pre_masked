
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * b_iodone; int b_li_list; struct xfs_buf_log_item* b_log_item; } ;
typedef TYPE_2__ xfs_buf_t ;
struct TYPE_6__ {int li_flags; } ;
struct xfs_buf_log_item {TYPE_1__ bli_item; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (struct xfs_buf_log_item*) ;
 int FUNC_4 (TYPE_2__*) ;

void
FUNC_5(
 xfs_buf_t *VAR_2)
{
 struct xfs_buf_log_item *VAR_3 = VAR_2->b_log_item;

 FUNC_2(VAR_2, VAR_1);
 FUNC_0(!(VAR_3->bli_item.li_flags & VAR_0));

 VAR_2->b_log_item = ((void*)0);
 if (FUNC_1(&VAR_2->b_li_list))
  VAR_2->b_iodone = ((void*)0);

 FUNC_4(VAR_2);
 FUNC_3(VAR_3);
}
