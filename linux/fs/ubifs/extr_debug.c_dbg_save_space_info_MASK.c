
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_lp_stats {int dummy; } ;
struct ubifs_info {int freeable_cnt; int space_lock; int idx_gc_cnt; int bi; int lst; struct ubifs_debug_info* dbg; } ;
struct ubifs_debug_info {int saved_free; int saved_idx_gc_cnt; int saved_bi; int saved_lst; } ;
struct ubifs_budg_info {int dummy; } ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ubifs_info*) ;

void FUNC_4(struct ubifs_info *VAR_0)
{
 struct ubifs_debug_info *VAR_1 = VAR_0->dbg;
 int VAR_2;

 FUNC_1(&VAR_0->space_lock);
 FUNC_0(&VAR_1->saved_lst, &VAR_0->lst, sizeof(struct ubifs_lp_stats));
 FUNC_0(&VAR_1->saved_bi, &VAR_0->bi, sizeof(struct ubifs_budg_info));
 VAR_1->saved_idx_gc_cnt = VAR_0->idx_gc_cnt;
 VAR_2 = VAR_0->freeable_cnt;
 VAR_0->freeable_cnt = 0;
 VAR_1->saved_free = FUNC_3(VAR_0);
 VAR_0->freeable_cnt = VAR_2;
 FUNC_2(&VAR_0->space_lock);
}
