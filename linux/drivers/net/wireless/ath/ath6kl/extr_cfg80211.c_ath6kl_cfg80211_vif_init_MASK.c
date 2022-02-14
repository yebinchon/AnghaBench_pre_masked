
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath6kl_vif {int mc_filter; int if_lock; int flags; int sched_scan_timer; int disconnect_timer; int aggr_cntxt; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (struct ath6kl_vif*) ;
 int FUNC_2 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct ath6kl_vif *VAR_4)
{
 VAR_4->aggr_cntxt = FUNC_1(VAR_4);
 if (!VAR_4->aggr_cntxt) {
  FUNC_2("failed to initialize aggr\n");
  return -VAR_0;
 }

 FUNC_5(&VAR_4->disconnect_timer, VAR_3, 0);
 FUNC_5(&VAR_4->sched_scan_timer, VAR_2, 0);

 FUNC_3(VAR_1, &VAR_4->flags);
 FUNC_4(&VAR_4->if_lock);

 FUNC_0(&VAR_4->mc_filter);

 return 0;
}
