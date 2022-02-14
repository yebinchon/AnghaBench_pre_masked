
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_log_item {int li_flags; struct xfs_ail* li_ailp; } ;
struct xfs_ail {int ail_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int FUNC_3 (struct xfs_ail*,struct xfs_log_item*,int) ;

__attribute__((used)) static inline void
FUNC_4(
 struct xfs_log_item *VAR_1,
 int VAR_2)
{
 struct xfs_ail *VAR_3 = VAR_1->li_ailp;

 FUNC_0(&VAR_3->ail_lock);

 if (FUNC_2(VAR_0, &VAR_1->li_flags))
  FUNC_3(VAR_3, VAR_1, VAR_2);
 else
  FUNC_1(&VAR_3->ail_lock);
}
