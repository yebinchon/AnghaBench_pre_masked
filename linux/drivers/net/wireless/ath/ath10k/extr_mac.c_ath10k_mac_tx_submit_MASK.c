
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ath10k_htt {int dummy; } ;
struct ath10k {int hw; struct ath10k_htt htt; } ;
typedef enum ath10k_mac_tx_path { ____Placeholder_ath10k_mac_tx_path } ath10k_mac_tx_path ;
typedef enum ath10k_hw_txrx_mode { ____Placeholder_ath10k_hw_txrx_mode } ath10k_hw_txrx_mode ;






 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ath10k_htt*,struct sk_buff*) ;
 int FUNC_2 (struct ath10k_htt*,int,struct sk_buff*) ;
 int FUNC_3 (struct ath10k*,struct sk_buff*) ;
 int FUNC_4 (struct ath10k*,char*,int) ;
 int FUNC_5 (int ,struct sk_buff*) ;

__attribute__((used)) static int FUNC_6(struct ath10k *VAR_1,
    enum ath10k_hw_txrx_mode VAR_2,
    enum ath10k_mac_tx_path VAR_3,
    struct sk_buff *VAR_4)
{
 struct ath10k_htt *VAR_5 = &VAR_1->htt;
 int VAR_6 = -VAR_0;

 switch (VAR_3) {
 case 131:
  VAR_6 = FUNC_2(VAR_5, VAR_2, VAR_4);
  break;
 case 130:
  VAR_6 = FUNC_1(VAR_5, VAR_4);
  break;
 case 128:
  VAR_6 = FUNC_3(VAR_1, VAR_4);
  break;
 case 129:
  FUNC_0(1);
  VAR_6 = -VAR_0;
  break;
 }

 if (VAR_6) {
  FUNC_4(VAR_1, "failed to transmit packet, dropping: %d\n",
       VAR_6);
  FUNC_5(VAR_1->hw, VAR_4);
 }

 return VAR_6;
}
