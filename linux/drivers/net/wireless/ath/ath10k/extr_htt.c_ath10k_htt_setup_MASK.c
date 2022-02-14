
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k_htt {int max_num_amsdu; int max_num_ampdu; int target_version_received; struct ath10k* ar; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath10k_htt*,int ,int ) ;
 int FUNC_1 (struct ath10k_htt*) ;
 int FUNC_2 (struct ath10k_htt*) ;
 int FUNC_3 (struct ath10k_htt*) ;
 int FUNC_4 (struct ath10k_htt*) ;
 int FUNC_5 (struct ath10k*,char*,...) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;

int FUNC_8(struct ath10k_htt *VAR_2)
{
 struct ath10k *VAR_3 = VAR_2->ar;
 int VAR_4;

 FUNC_6(&VAR_2->target_version_received);

 VAR_4 = FUNC_1(VAR_2);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_7(&VAR_2->target_version_received,
          VAR_1);
 if (VAR_4 == 0) {
  FUNC_5(VAR_3, "htt version request timed out\n");
  return -VAR_0;
 }

 VAR_4 = FUNC_4(VAR_2);
 if (VAR_4) {
  FUNC_5(VAR_3, "failed to verify htt version: %d\n",
       VAR_4);
  return VAR_4;
 }

 VAR_4 = FUNC_2(VAR_2);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_3(VAR_2);
 if (VAR_4) {
  FUNC_5(VAR_3, "failed to setup rx ring: %d\n",
       VAR_4);
  return VAR_4;
 }

 VAR_4 = FUNC_0(VAR_2,
          VAR_2->max_num_ampdu,
          VAR_2->max_num_amsdu);
 if (VAR_4) {
  FUNC_5(VAR_3, "failed to setup amsdu/ampdu limit: %d\n",
       VAR_4);
  return VAR_4;
 }

 return 0;
}
