
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_log_item {int li_ail; } ;
struct xfs_ail {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct xfs_ail*,struct xfs_log_item*) ;
 int FUNC_2 (struct xfs_ail*,struct xfs_log_item*) ;

__attribute__((used)) static void
FUNC_3(
 struct xfs_ail *VAR_0,
 struct xfs_log_item *VAR_1)
{
 FUNC_1(VAR_0, VAR_1);
 FUNC_0(&VAR_1->li_ail);
 FUNC_2(VAR_0, VAR_1);
}
