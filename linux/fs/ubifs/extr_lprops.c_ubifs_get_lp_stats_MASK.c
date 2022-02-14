
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_lp_stats {int dummy; } ;
struct ubifs_info {int space_lock; int lst; } ;


 int FUNC_0 (struct ubifs_lp_stats*,int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct ubifs_info *VAR_0, struct ubifs_lp_stats *VAR_1)
{
 FUNC_1(&VAR_0->space_lock);
 FUNC_0(VAR_1, &VAR_0->lst, sizeof(struct ubifs_lp_stats));
 FUNC_2(&VAR_0->space_lock);
}
