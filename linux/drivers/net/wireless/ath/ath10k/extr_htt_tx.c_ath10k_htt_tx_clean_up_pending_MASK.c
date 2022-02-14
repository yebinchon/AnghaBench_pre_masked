
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct htt_tx_done {int msdu_id; int status; int member_0; } ;
struct ath10k_htt {int dummy; } ;
struct ath10k {struct ath10k_htt htt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath10k*,int ,char*,int) ;
 int FUNC_1 (struct ath10k_htt*,struct htt_tx_done*) ;

__attribute__((used)) static int FUNC_2(int VAR_2, void *VAR_3, void *VAR_4)
{
 struct ath10k *VAR_5 = VAR_4;
 struct ath10k_htt *VAR_6 = &VAR_5->htt;
 struct htt_tx_done VAR_7 = {0};

 FUNC_0(VAR_5, VAR_0, "force cleanup msdu_id %hu\n", VAR_2);

 VAR_7.msdu_id = VAR_2;
 VAR_7.status = VAR_1;

 FUNC_1(VAR_6, &VAR_7);

 return 0;
}
