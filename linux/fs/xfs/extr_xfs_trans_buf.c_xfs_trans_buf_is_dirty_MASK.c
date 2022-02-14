
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ li_type; int li_flags; } ;
struct xfs_buf_log_item {TYPE_1__ bli_item; } ;
struct xfs_buf {struct xfs_buf_log_item* b_log_item; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;

bool
FUNC_2(
 struct xfs_buf *VAR_2)
{
 struct xfs_buf_log_item *VAR_3 = VAR_2->b_log_item;

 if (!VAR_3)
  return 0;
 FUNC_0(VAR_3->bli_item.li_type == VAR_0);
 return FUNC_1(VAR_1, &VAR_3->bli_item.li_flags);
}
