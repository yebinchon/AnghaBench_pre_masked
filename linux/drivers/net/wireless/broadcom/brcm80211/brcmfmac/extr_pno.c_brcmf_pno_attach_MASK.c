
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcmf_pno_info {int req_lock; } ;
struct brcmf_cfg80211_info {struct brcmf_pno_info* pno; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 struct brcmf_pno_info* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct brcmf_cfg80211_info *VAR_3)
{
 struct brcmf_pno_info *VAR_4;

 FUNC_0(VAR_2, "enter\n");
 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_3->pno = VAR_4;
 FUNC_2(&VAR_4->req_lock);
 return 0;
}
