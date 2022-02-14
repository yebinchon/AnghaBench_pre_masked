
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct ath6kl_vif {int fw_vif_idx; int ndev; struct ath6kl* ar; } ;
struct ath6kl_sta {int apsd_info; int aid; int sta_flags; int psq_lock; int apsdq; } ;
struct ath6kl {int wmi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sk_buff*,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int) ;
 struct sk_buff* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct ath6kl_vif *VAR_6,
       struct ath6kl_sta *VAR_7)
{
 struct ath6kl *VAR_8 = VAR_6->ar;
 bool VAR_9, VAR_10;
 u32 VAR_11, VAR_12;
 struct sk_buff *VAR_13 = ((void*)0);
 VAR_11 = (VAR_7->apsd_info >> VAR_2) &
          VAR_1;






 if (!VAR_11)
  VAR_11 = VAR_0;

 FUNC_4(&VAR_7->psq_lock);
 VAR_9 = FUNC_3(&VAR_7->apsdq);
 FUNC_5(&VAR_7->psq_lock);
 VAR_10 = VAR_9;

 while ((!VAR_9) && (VAR_11)) {
  FUNC_4(&VAR_7->psq_lock);
  VAR_13 = FUNC_2(&VAR_7->apsdq);
  VAR_9 = FUNC_3(&VAR_7->apsdq);
  FUNC_5(&VAR_7->psq_lock);





  VAR_7->sta_flags |= VAR_4;
  VAR_11--;


  if ((VAR_9) || (!VAR_11))
   VAR_7->sta_flags |= VAR_3;

  FUNC_0(VAR_13, VAR_6->ndev);
  VAR_7->sta_flags &= ~(VAR_4);
  VAR_7->sta_flags &= ~(VAR_3);
 }

 if (VAR_9) {
  if (VAR_10)
   VAR_12 = VAR_5;
  else
   VAR_12 = 0;

  FUNC_1(VAR_8->wmi,
           VAR_6->fw_vif_idx,
           VAR_7->aid, 0, VAR_12);
 }

 return;
}
