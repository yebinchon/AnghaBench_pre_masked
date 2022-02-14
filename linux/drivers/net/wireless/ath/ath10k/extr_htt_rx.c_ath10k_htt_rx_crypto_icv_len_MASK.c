
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k {int dummy; } ;
typedef enum htt_rx_mpdu_encrypt_type { ____Placeholder_htt_rx_mpdu_encrypt_type } htt_rx_mpdu_encrypt_type ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath10k*,char*,int) ;

__attribute__((used)) static int FUNC_1(struct ath10k *VAR_2,
     enum htt_rx_mpdu_encrypt_type VAR_3)
{
 switch (VAR_3) {
 case 134:
 case 137:
 case 138:
 case 135:
 case 136:
  return 0;
 case 128:
 case 130:
  return VAR_1;
 case 133:
 case 132:
  return VAR_0;
 case 129:
 case 131:
  break;
 }

 FUNC_0(VAR_2, "unsupported encryption type %d\n", VAR_3);
 return 0;
}
