
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k {int dummy; } ;
typedef enum htt_rx_mpdu_encrypt_type { ____Placeholder_htt_rx_mpdu_encrypt_type } htt_rx_mpdu_encrypt_type ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ath10k*,char*,int) ;

__attribute__((used)) static int FUNC_1(struct ath10k *VAR_5,
       enum htt_rx_mpdu_encrypt_type VAR_6)
{
 switch (VAR_6) {
 case 134:
  return 0;
 case 128:
 case 130:
  return VAR_4;
 case 133:
 case 132:
  return VAR_3;
 case 137:
  return VAR_1;
 case 138:
  return VAR_0;
 case 135:
 case 136:
  return VAR_2;
 case 129:
 case 131:
  break;
 }

 FUNC_0(VAR_5, "unsupported encryption type %d\n", VAR_6);
 return 0;
}
