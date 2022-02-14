
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef void* u32 ;
struct ieee80211_mgmt {int da; } ;
struct ath6kl_vif {int fw_vif_idx; struct ath6kl* ar; } ;
struct ath6kl_sta {int sta_flags; scalar_t__ mgmt_psq_len; int psq_lock; int psq; int aid; int mgmt_psq; } ;
struct ath6kl_mgmt_buff {size_t len; int no_cck; int list; int buf; void* wait; void* freq; void* id; } ;
struct ath6kl {int wmi; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 struct ath6kl_sta* FUNC_1 (struct ath6kl_vif*,int ) ;
 int FUNC_2 (int ,int ,int ,int) ;
 scalar_t__ FUNC_3 (int ) ;
 struct ath6kl_mgmt_buff* FUNC_4 (size_t,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int ,int const*,size_t) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static bool FUNC_10(struct ath6kl_vif *VAR_3,
         u32 VAR_4,
         u32 VAR_5,
         u32 VAR_6,
         const u8 *VAR_7,
         size_t VAR_8,
         bool *VAR_9,
         bool VAR_10)
{
 struct ieee80211_mgmt *VAR_11;
 struct ath6kl_sta *VAR_12;
 bool VAR_13 = 0;
 struct ath6kl_mgmt_buff *VAR_14;
 size_t VAR_15;
 struct ath6kl *VAR_16 = VAR_3->ar;

 VAR_11 = (struct ieee80211_mgmt *) VAR_7;
 if (FUNC_3(VAR_11->da))
  return 0;

 VAR_12 = FUNC_1(VAR_3, VAR_11->da);
 if (!VAR_12)
  return 0;

 if (VAR_12->sta_flags & VAR_2) {
  if (!(VAR_12->sta_flags & VAR_1)) {

   VAR_15 = VAR_8 + sizeof(struct ath6kl_mgmt_buff);
   VAR_14 = FUNC_4(VAR_15, VAR_0);
   if (!VAR_14)
    return 0;

   FUNC_0(&VAR_14->list);
   VAR_14->id = VAR_4;
   VAR_14->freq = VAR_5;
   VAR_14->wait = VAR_6;
   VAR_14->len = VAR_8;
   VAR_14->no_cck = VAR_10;
   FUNC_6(VAR_14->buf, VAR_7, VAR_8);
   FUNC_8(&VAR_12->psq_lock);
   VAR_13 = FUNC_7(&VAR_12->psq) &&
     (VAR_12->mgmt_psq_len == 0);
   FUNC_5(&VAR_14->list, &VAR_12->mgmt_psq);
   VAR_12->mgmt_psq_len++;
   FUNC_9(&VAR_12->psq_lock);






   if (VAR_13)
    FUNC_2(VAR_16->wmi, VAR_3->fw_vif_idx,
             VAR_12->aid, 1);
   return 1;
  }





  FUNC_8(&VAR_12->psq_lock);
  if (!FUNC_7(&VAR_12->psq) || (VAR_12->mgmt_psq_len != 0))
   *VAR_9 = 1;
  FUNC_9(&VAR_12->psq_lock);
 }

 return 0;
}
