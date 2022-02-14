
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct sk_buff {scalar_t__ data; } ;
struct ethhdr {int h_dest; } ;
struct ath6kl_vif {int fw_vif_idx; int flags; struct ath6kl* ar; } ;
struct ath6kl_sta {int sta_flags; } ;
struct ath6kl {int mcastpsq_lock; int mcastpsq; int wmi; TYPE_1__* sta_list; } ;
struct TYPE_2__ {int sta_flags; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct ath6kl_sta* FUNC_0 (struct ath6kl_vif*,int ) ;
 int FUNC_1 (struct ath6kl_sta*,struct ath6kl_vif*,struct sk_buff*,int*) ;
 int FUNC_2 (struct ath6kl_sta*,struct ath6kl_vif*,struct sk_buff*,int*) ;
 int FUNC_3 (int ,int ,int ,int) ;
 int FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,struct sk_buff*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int *) ;

__attribute__((used)) static bool FUNC_11(struct ath6kl_vif *VAR_6, struct sk_buff *VAR_7,
    u32 *VAR_8)
{
 struct ethhdr *VAR_9 = (struct ethhdr *) VAR_7->data;
 struct ath6kl_sta *VAR_10 = ((void*)0);
 bool VAR_11 = 0;
 struct ath6kl *VAR_12 = VAR_6->ar;

 if (FUNC_5(VAR_9->h_dest)) {
  u8 VAR_13 = 0;
  bool VAR_14 = 0;

  for (VAR_13 = 0; VAR_13 < VAR_0; VAR_13++) {
   if (VAR_12->sta_list[VAR_13].sta_flags & VAR_3) {
    VAR_14 = 1;
    break;
   }
  }

  if (VAR_14) {




   if (!FUNC_10(VAR_1, &VAR_6->flags)) {
    bool VAR_15 = 0;

    FUNC_8(&VAR_12->mcastpsq_lock);
    VAR_15 =
     FUNC_6(&VAR_12->mcastpsq);
    FUNC_7(&VAR_12->mcastpsq, VAR_7);
    FUNC_9(&VAR_12->mcastpsq_lock);






    if (VAR_15)
     FUNC_3(VAR_12->wmi,
              VAR_6->fw_vif_idx,
              VAR_2, 1);

    VAR_11 = 1;
   } else {




    FUNC_8(&VAR_12->mcastpsq_lock);
    if (!FUNC_6(&VAR_12->mcastpsq))
     *VAR_8 |= VAR_4;
    FUNC_9(&VAR_12->mcastpsq_lock);
   }
  }
 } else {
  VAR_10 = FUNC_0(VAR_6, VAR_9->h_dest);
  if (!VAR_10) {
   FUNC_4(VAR_7);


   return 1;
  }

  if (VAR_10->sta_flags & VAR_3) {
   VAR_11 = FUNC_2(VAR_10,
      VAR_6, VAR_7, VAR_8);
   if (!(*VAR_8 & VAR_5))
    VAR_11 = FUNC_1(VAR_10,
      VAR_6, VAR_7, VAR_8);
  }
 }
 return VAR_11;
}
