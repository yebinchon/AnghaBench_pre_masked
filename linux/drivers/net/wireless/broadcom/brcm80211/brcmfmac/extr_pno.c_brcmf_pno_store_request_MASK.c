
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfg80211_sched_scan_request {int reqid; } ;
struct brcmf_pno_info {scalar_t__ n_reqs; int req_lock; struct cfg80211_sched_scan_request** reqs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,char*) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct brcmf_pno_info *VAR_3,
       struct cfg80211_sched_scan_request *VAR_4)
{
 if (FUNC_0(VAR_3->n_reqs == VAR_0,
   "pno request storage full\n"))
  return -VAR_1;

 FUNC_1(VAR_2, "reqid=%llu\n", VAR_4->reqid);
 FUNC_2(&VAR_3->req_lock);
 VAR_3->reqs[VAR_3->n_reqs++] = VAR_4;
 FUNC_3(&VAR_3->req_lock);
 return 0;
}
