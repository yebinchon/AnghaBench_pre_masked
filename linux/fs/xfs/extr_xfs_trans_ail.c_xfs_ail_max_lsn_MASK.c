
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_lsn_t ;
struct xfs_log_item {int li_lsn; } ;
struct xfs_ail {int ail_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct xfs_log_item* FUNC_2 (struct xfs_ail*) ;

__attribute__((used)) static xfs_lsn_t
FUNC_3(
 struct xfs_ail *VAR_0)
{
 xfs_lsn_t VAR_1 = 0;
 struct xfs_log_item *VAR_2;

 FUNC_0(&VAR_0->ail_lock);
 VAR_2 = FUNC_2(VAR_0);
 if (VAR_2)
  VAR_1 = VAR_2->li_lsn;
 FUNC_1(&VAR_0->ail_lock);

 return VAR_1;
}
