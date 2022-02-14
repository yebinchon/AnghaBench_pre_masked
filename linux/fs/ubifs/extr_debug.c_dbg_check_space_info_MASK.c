
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_lp_stats {int dummy; } ;
struct ubifs_info {int freeable_cnt; int bi; int space_lock; struct ubifs_debug_info* dbg; } ;
struct ubifs_debug_info {long long saved_free; int saved_idx_gc_cnt; int saved_bi; struct ubifs_lp_stats saved_lst; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ubifs_info*,int *) ;
 int FUNC_4 (struct ubifs_lp_stats*) ;
 int FUNC_5 (struct ubifs_info*,char*,long long,long long) ;
 long long FUNC_6 (struct ubifs_info*) ;
 int FUNC_7 (struct ubifs_info*,struct ubifs_lp_stats*) ;
 int FUNC_8 (struct ubifs_info*,char*,...) ;

int FUNC_9(struct ubifs_info *VAR_1)
{
 struct ubifs_debug_info *VAR_2 = VAR_1->dbg;
 struct ubifs_lp_stats VAR_3;
 long long VAR_4;
 int VAR_5;

 FUNC_1(&VAR_1->space_lock);
 VAR_5 = VAR_1->freeable_cnt;
 VAR_1->freeable_cnt = 0;
 VAR_4 = FUNC_6(VAR_1);
 VAR_1->freeable_cnt = VAR_5;
 FUNC_2(&VAR_1->space_lock);

 if (VAR_4 != VAR_2->saved_free) {
  FUNC_5(VAR_1, "free space changed from %lld to %lld",
     VAR_2->saved_free, VAR_4);
  goto out;
 }

 return 0;

out:
 FUNC_8(VAR_1, "saved lprops statistics dump");
 FUNC_4(&VAR_2->saved_lst);
 FUNC_8(VAR_1, "saved budgeting info dump");
 FUNC_3(VAR_1, &VAR_2->saved_bi);
 FUNC_8(VAR_1, "saved idx_gc_cnt %d", VAR_2->saved_idx_gc_cnt);
 FUNC_8(VAR_1, "current lprops statistics dump");
 FUNC_7(VAR_1, &VAR_3);
 FUNC_4(&VAR_3);
 FUNC_8(VAR_1, "current budgeting info dump");
 FUNC_3(VAR_1, &VAR_1->bi);
 FUNC_0();
 return -VAR_0;
}
