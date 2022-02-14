
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_log_item {int dummy; } ;
struct xfs_ail_cursor {struct xfs_log_item* item; } ;
struct xfs_ail {int dummy; } ;


 struct xfs_log_item* FUNC_0 (struct xfs_ail*) ;
 struct xfs_log_item* FUNC_1 (struct xfs_ail*,struct xfs_log_item*) ;

struct xfs_log_item *
FUNC_2(
 struct xfs_ail *VAR_0,
 struct xfs_ail_cursor *VAR_1)
{
 struct xfs_log_item *VAR_2 = VAR_1->item;

 if ((uintptr_t)VAR_2 & 1)
  VAR_2 = FUNC_0(VAR_0);
 if (VAR_2)
  VAR_1->item = FUNC_1(VAR_0, VAR_2);
 return VAR_2;
}
