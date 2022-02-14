
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_lsn_t ;
struct xfs_log_item {int dummy; } ;
struct xfs_ail {int ail_task; int ail_target; int ail_mount; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 struct xfs_log_item* FUNC_4 (struct xfs_ail*) ;
 int FUNC_5 (struct xfs_ail*,int *,int *) ;

void
FUNC_6(
 struct xfs_ail *VAR_0,
 xfs_lsn_t VAR_1)
{
 struct xfs_log_item *VAR_2;

 VAR_2 = FUNC_4(VAR_0);
 if (!VAR_2 || FUNC_0(VAR_0->ail_mount) ||
     FUNC_1(VAR_1, VAR_0->ail_target) <= 0)
  return;





 FUNC_2();
 FUNC_5(VAR_0, &VAR_0->ail_target, &VAR_1);
 FUNC_2();

 FUNC_3(VAR_0->ail_task);
}
