
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_log_item {int li_lsn; } ;
struct xfs_ail {int ail_empty; int ail_lock; int ail_task; int ail_target; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_1 ;
 int FUNC_6 (int ) ;
 struct xfs_log_item* FUNC_7 (struct xfs_ail*) ;

void
FUNC_8(
 struct xfs_ail *VAR_2)
{
 struct xfs_log_item *VAR_3;
 FUNC_0(VAR_1);

 FUNC_4(&VAR_2->ail_lock);
 while ((VAR_3 = FUNC_7(VAR_2)) != ((void*)0)) {
  FUNC_2(&VAR_2->ail_empty, &VAR_1, VAR_0);
  VAR_2->ail_target = VAR_3->li_lsn;
  FUNC_6(VAR_2->ail_task);
  FUNC_5(&VAR_2->ail_lock);
  FUNC_3();
  FUNC_4(&VAR_2->ail_lock);
 }
 FUNC_5(&VAR_2->ail_lock);

 FUNC_1(&VAR_2->ail_empty, &VAR_1);
}
