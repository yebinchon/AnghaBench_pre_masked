
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff_head {int dummy; } ;
struct ieee80211_rx_status {int dummy; } ;
struct TYPE_2__ {int lock; } ;
struct ath10k_htt {int rx_confused; TYPE_1__ rx_ring; struct ieee80211_rx_status rx_status; struct ath10k* ar; } ;
struct ath10k {int dummy; } ;
typedef enum ath10k_pkt_rx_err { ____Placeholder_ath10k_pkt_rx_err } ath10k_pkt_rx_err ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff_head*) ;
 int FUNC_1 (struct sk_buff_head*) ;
 int FUNC_2 (struct ath10k_htt*,struct sk_buff_head*) ;
 int FUNC_3 (struct ath10k*,struct sk_buff_head*,struct ieee80211_rx_status*) ;
 int FUNC_4 (struct ath10k*,struct sk_buff_head*,struct ieee80211_rx_status*,unsigned long*) ;
 int FUNC_5 (struct ath10k*,struct sk_buff_head*,struct ieee80211_rx_status*,int,int *,int*) ;
 int FUNC_6 (struct ath10k*,struct sk_buff_head*,struct ieee80211_rx_status*,int) ;
 int FUNC_7 (struct ath10k*,struct sk_buff_head*,unsigned long*,unsigned long*) ;
 int FUNC_8 (struct ath10k*,int *,unsigned long,int,unsigned long,unsigned long,unsigned long,unsigned long) ;
 int FUNC_9 (struct ath10k*,char*,int) ;
 unsigned long FUNC_10 (struct sk_buff_head*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct ath10k_htt *VAR_3)
{
 struct ath10k *VAR_4 = VAR_3->ar;
 struct ieee80211_rx_status *VAR_5 = &VAR_3->rx_status;
 struct sk_buff_head VAR_6;
 int VAR_7;
 unsigned long VAR_8 = 0;
 unsigned long VAR_9 = 0;
 unsigned long VAR_10 = 0;
 unsigned long VAR_11, VAR_12;
 enum ath10k_pkt_rx_err VAR_13 = VAR_0;
 u8 VAR_14[VAR_2];

 FUNC_0(&VAR_6);

 FUNC_11(&VAR_3->rx_ring.lock);
 if (VAR_3->rx_confused) {
  FUNC_12(&VAR_3->rx_ring.lock);
  return -VAR_1;
 }
 VAR_7 = FUNC_2(VAR_3, &VAR_6);
 FUNC_12(&VAR_3->rx_ring.lock);

 if (VAR_7 < 0) {
  FUNC_9(VAR_4, "rx ring became corrupted: %d\n", VAR_7);
  FUNC_1(&VAR_6);



  VAR_3->rx_confused = 1;
  return VAR_7;
 }

 VAR_12 = FUNC_10(&VAR_6);

 FUNC_6(VAR_4, &VAR_6, VAR_5, 0xffff);


 if (VAR_7 > 0)
  FUNC_7(VAR_4, &VAR_6, &VAR_8, &VAR_9);

 FUNC_4(VAR_4, &VAR_6, VAR_5, &VAR_10);
 FUNC_5(VAR_4, &VAR_6, VAR_5, 1, VAR_14, &VAR_13);
 VAR_11 = FUNC_10(&VAR_6);
 FUNC_3(VAR_4, &VAR_6, VAR_5);

 FUNC_8(VAR_4, VAR_14, VAR_12, VAR_13,
           VAR_9, VAR_8, VAR_10,
           VAR_11);

 return 0;
}
