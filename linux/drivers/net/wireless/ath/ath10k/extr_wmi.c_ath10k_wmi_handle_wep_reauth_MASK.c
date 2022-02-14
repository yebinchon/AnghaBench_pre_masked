
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int* data; unsigned int len; } ;
struct ieee80211_rx_status {int flag; } ;
struct ieee80211_hdr {int frame_control; } ;
struct ath10k {int data_lock; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ath10k*,int ,char*,int*) ;
 int FUNC_1 (struct ath10k*,int*,int) ;
 int* FUNC_2 (struct ieee80211_hdr*) ;
 int FUNC_3 (int ) ;
 unsigned int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct ath10k *VAR_4,
      struct sk_buff *VAR_5,
      struct ieee80211_rx_status *VAR_6)
{
 struct ieee80211_hdr *VAR_7 = (struct ieee80211_hdr *)VAR_5->data;
 unsigned int VAR_8;
 bool VAR_9;
 u8 *VAR_10, VAR_11;

 if (!FUNC_5(VAR_7->frame_control) ||
     !FUNC_3(VAR_7->frame_control))
  return;

 VAR_8 = FUNC_4(VAR_7->frame_control);
 if (VAR_5->len < (VAR_8 + VAR_1))
  return;

 VAR_11 = VAR_5->data[VAR_8 + (VAR_1 - 1)] >> VAR_3;
 VAR_10 = FUNC_2(VAR_7);

 FUNC_6(&VAR_4->data_lock);
 VAR_9 = FUNC_1(VAR_4, VAR_10, VAR_11);
 FUNC_7(&VAR_4->data_lock);

 if (VAR_9) {
  FUNC_0(VAR_4, VAR_0,
      "mac wep key present for peer %pM\n", VAR_10);
  VAR_6->flag |= VAR_2;
 }
}
