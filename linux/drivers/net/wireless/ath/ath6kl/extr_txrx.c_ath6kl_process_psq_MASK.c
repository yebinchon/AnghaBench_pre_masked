
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct ath6kl_vif {int fw_vif_idx; struct ath6kl* ar; } ;
struct ath6kl_sta {int sta_flags; int aid; int psq_lock; int psq; } ;
struct ath6kl {int wmi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct sk_buff*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static bool FUNC_5(struct ath6kl_sta *VAR_2,
    struct ath6kl_vif *VAR_3,
    struct sk_buff *VAR_4,
    u32 *VAR_5)
{
 bool VAR_6 = 0;
 struct ath6kl *VAR_7 = VAR_3->ar;

 if (VAR_2->sta_flags & VAR_0) {
  FUNC_3(&VAR_2->psq_lock);
  if (!FUNC_1(&VAR_2->psq))
   *VAR_5 |= VAR_1;
  FUNC_4(&VAR_2->psq_lock);
  return 0;
 }


 FUNC_3(&VAR_2->psq_lock);
 VAR_6 = FUNC_1(&VAR_2->psq);
 FUNC_2(&VAR_2->psq, VAR_4);
 FUNC_4(&VAR_2->psq_lock);






 if (VAR_6)
  FUNC_0(VAR_7->wmi,
           VAR_3->fw_vif_idx,
           VAR_2->aid, 1);
 return 1;
}
