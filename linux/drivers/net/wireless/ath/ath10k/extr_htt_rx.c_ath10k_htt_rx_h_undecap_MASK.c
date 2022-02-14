
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {scalar_t__ data; } ;
struct ieee80211_rx_status {int dummy; } ;
struct TYPE_3__ {int info1; } ;
struct TYPE_4__ {TYPE_1__ common; } ;
struct htt_rx_desc {TYPE_2__ msdu_start; } ;
struct ath10k {int dummy; } ;
typedef enum rx_msdu_decap_format { ____Placeholder_rx_msdu_decap_format } rx_msdu_decap_format ;
typedef enum htt_rx_mpdu_encrypt_type { ____Placeholder_htt_rx_mpdu_encrypt_type } htt_rx_mpdu_encrypt_type ;


 int FUNC_0 (int ,int ) ;




 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ath10k*,struct sk_buff*,struct ieee80211_rx_status*,int *,int) ;
 int FUNC_3 (struct ath10k*,struct sk_buff*,struct ieee80211_rx_status*,int *,int) ;
 int FUNC_4 (struct ath10k*,struct sk_buff*,struct ieee80211_rx_status*,int,int,int *) ;
 int FUNC_5 (struct ath10k*,struct sk_buff*,struct ieee80211_rx_status*,int *,int) ;

__attribute__((used)) static void FUNC_6(struct ath10k *VAR_1,
        struct sk_buff *VAR_2,
        struct ieee80211_rx_status *VAR_3,
        u8 VAR_4[64],
        enum htt_rx_mpdu_encrypt_type VAR_5,
        bool VAR_6)
{
 struct htt_rx_desc *VAR_7;
 enum rx_msdu_decap_format VAR_8;
 VAR_7 = (void *)VAR_2->data - sizeof(*VAR_7);
 VAR_8 = FUNC_0(FUNC_1(VAR_7->msdu_start.common.info1),
     VAR_0);

 switch (VAR_8) {
 case 128:
  FUNC_4(VAR_1, VAR_2, VAR_3, VAR_5,
         VAR_6, VAR_4);
  break;
 case 129:
  FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4,
           VAR_5);
  break;
 case 130:
  FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
  break;
 case 131:
  FUNC_5(VAR_1, VAR_2, VAR_3, VAR_4,
          VAR_5);
  break;
 }
}
