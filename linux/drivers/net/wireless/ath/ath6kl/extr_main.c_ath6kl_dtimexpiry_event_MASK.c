
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ath6kl_vif {int fw_vif_idx; int flags; int ndev; struct ath6kl* ar; } ;
struct ath6kl {int wmi; int mcastpsq_lock; int mcastpsq; int sta_list_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;
 struct sk_buff* FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct ath6kl_vif *VAR_2)
{
 bool VAR_3 = 0;
 struct sk_buff *VAR_4;
 struct ath6kl *VAR_5 = VAR_2->ar;
 if (!VAR_5->sta_list_index)
  return;

 FUNC_6(&VAR_5->mcastpsq_lock);
 VAR_3 = FUNC_5(&VAR_5->mcastpsq);
 FUNC_7(&VAR_5->mcastpsq_lock);

 if (VAR_3)
  return;


 FUNC_3(VAR_0, &VAR_2->flags);

 FUNC_6(&VAR_5->mcastpsq_lock);
 while ((VAR_4 = FUNC_4(&VAR_5->mcastpsq)) != ((void*)0)) {
  FUNC_7(&VAR_5->mcastpsq_lock);

  FUNC_0(VAR_4, VAR_2->ndev);

  FUNC_6(&VAR_5->mcastpsq_lock);
 }
 FUNC_7(&VAR_5->mcastpsq_lock);

 FUNC_2(VAR_0, &VAR_2->flags);


 FUNC_1(VAR_5->wmi, VAR_2->fw_vif_idx, VAR_1, 0);
}
