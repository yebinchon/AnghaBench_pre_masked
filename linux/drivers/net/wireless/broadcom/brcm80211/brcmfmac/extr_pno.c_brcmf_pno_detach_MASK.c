
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcmf_pno_info {int req_lock; int n_reqs; } ;
struct brcmf_cfg80211_info {struct brcmf_pno_info* pno; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct brcmf_pno_info*) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct brcmf_cfg80211_info *VAR_1)
{
 struct brcmf_pno_info *VAR_2;

 FUNC_1(VAR_0, "enter\n");
 VAR_2 = VAR_1->pno;
 VAR_1->pno = ((void*)0);

 FUNC_0(VAR_2->n_reqs);
 FUNC_3(&VAR_2->req_lock);
 FUNC_2(VAR_2);
}
