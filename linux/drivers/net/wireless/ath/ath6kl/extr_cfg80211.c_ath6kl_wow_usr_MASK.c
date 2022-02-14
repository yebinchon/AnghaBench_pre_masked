
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef size_t u16 ;
struct cfg80211_wowlan {size_t n_patterns; scalar_t__ four_way_handshake; scalar_t__ eap_identity_req; scalar_t__ gtk_rekey_failure; scalar_t__ magic_pkt; scalar_t__ disconnect; TYPE_1__* patterns; } ;
struct ath6kl_vif {int fw_vif_idx; } ;
struct ath6kl {int wmi; } ;
typedef int mask ;
struct TYPE_2__ {int pattern_len; int* mask; int pattern; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int ,int,int ,int ,int*) ;
 int FUNC_1 (int**,int ,int) ;

__attribute__((used)) static int FUNC_2(struct ath6kl *VAR_7, struct ath6kl_vif *VAR_8,
     struct cfg80211_wowlan *VAR_9, u32 *VAR_10)
{
 int VAR_11, VAR_12;
 u8 VAR_13[VAR_6];
 u16 VAR_14;


 for (VAR_14 = 0; VAR_14 < VAR_9->n_patterns; VAR_14++) {
  FUNC_1(&VAR_13, 0, sizeof(VAR_13));
  for (VAR_12 = 0; VAR_12 < VAR_9->patterns[VAR_14].pattern_len; VAR_12++) {
   if (VAR_9->patterns[VAR_14].mask[VAR_12 / 8] & (0x1 << (VAR_12 % 8)))
    VAR_13[VAR_12] = 0xFF;
  }






  VAR_11 = FUNC_0(VAR_7->wmi,
    VAR_8->fw_vif_idx, VAR_5,
    VAR_9->patterns[VAR_14].pattern_len,
    0 ,
    VAR_9->patterns[VAR_14].pattern, VAR_13);
  if (VAR_11)
   return VAR_11;
 }

 if (VAR_9->disconnect)
  *VAR_10 |= VAR_4;

 if (VAR_9->magic_pkt)
  *VAR_10 |= VAR_3;

 if (VAR_9->gtk_rekey_failure)
  *VAR_10 |= VAR_2;

 if (VAR_9->eap_identity_req)
  *VAR_10 |= VAR_1;

 if (VAR_9->four_way_handshake)
  *VAR_10 |= VAR_0;

 return 0;
}
