
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff_head {int dummy; } ;
struct sk_buff {int len; scalar_t__ data; } ;
struct ieee80211_rx_status {int flag; } ;
struct htt_rx_offload_msdu {int vdev_id; int msdu_len; } ;
struct ath10k_htt {struct ieee80211_rx_status rx_status; } ;
struct ath10k {struct ath10k_htt htt; } ;


 int VAR_0 ;
 size_t FUNC_0 (int ) ;
 struct sk_buff* FUNC_1 (struct sk_buff_head*) ;
 int FUNC_2 (struct ath10k*,struct ieee80211_rx_status*,int *,int ) ;
 int FUNC_3 (struct ath10k*,struct ieee80211_rx_status*,struct sk_buff*) ;
 int FUNC_4 (struct ieee80211_rx_status*,struct sk_buff*) ;
 int FUNC_5 (struct ath10k*,char*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (scalar_t__,scalar_t__,int ) ;
 int FUNC_8 (struct ieee80211_rx_status*,int ,int) ;
 int FUNC_9 (struct sk_buff*,size_t) ;
 int FUNC_10 (struct sk_buff*,size_t) ;
 size_t FUNC_11 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_12(struct ath10k *VAR_1,
           struct sk_buff_head *VAR_2)
{
 struct ath10k_htt *VAR_3 = &VAR_1->htt;
 struct ieee80211_rx_status *VAR_4 = &VAR_3->rx_status;
 struct htt_rx_offload_msdu *VAR_5;
 struct sk_buff *VAR_6;
 size_t VAR_7;

 while ((VAR_6 = FUNC_1(VAR_2))) {




  VAR_5 = (void *)VAR_6->data;

  FUNC_10(VAR_6, sizeof(*VAR_5));
  FUNC_9(VAR_6, sizeof(*VAR_5));

  if (FUNC_11(VAR_6) < FUNC_0(VAR_5->msdu_len)) {
   FUNC_5(VAR_1, "dropping frame: offloaded rx msdu is too long!\n");
   FUNC_6(VAR_6);
   continue;
  }

  FUNC_10(VAR_6, FUNC_0(VAR_5->msdu_len));






  VAR_7 = 4 - ((unsigned long)VAR_6->data & 3);
  FUNC_10(VAR_6, VAR_7);
  FUNC_7(VAR_6->data + VAR_7, VAR_6->data, VAR_6->len);
  FUNC_9(VAR_6, VAR_7);





  FUNC_8(VAR_4, 0, sizeof(*VAR_4));
  VAR_4->flag |= VAR_0;

  FUNC_4(VAR_4, VAR_6);
  FUNC_2(VAR_1, VAR_4, ((void*)0), VAR_5->vdev_id);
  FUNC_3(VAR_1, VAR_4, VAR_6);
 }
}
