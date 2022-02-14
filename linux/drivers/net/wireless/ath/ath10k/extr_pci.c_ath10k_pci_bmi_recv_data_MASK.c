
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bmi_xfer {unsigned int resp_len; int rx_done; int wait_for_resp; } ;
struct ath10k_ce_pipe {struct ath10k* ar; } ;
struct ath10k {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct ath10k_ce_pipe*,void**,unsigned int*) ;
 int FUNC_2 (struct ath10k*,char*) ;

__attribute__((used)) static void FUNC_3(struct ath10k_ce_pipe *VAR_0)
{
 struct ath10k *VAR_1 = VAR_0->ar;
 struct bmi_xfer *VAR_2;
 unsigned int VAR_3;

 if (FUNC_1(VAR_0, (void **)&VAR_2,
       &VAR_3))
  return;

 if (FUNC_0(!VAR_2))
  return;

 if (!VAR_2->wait_for_resp) {
  FUNC_2(VAR_1, "unexpected: BMI data received; ignoring\n");
  return;
 }

 VAR_2->resp_len = VAR_3;
 VAR_2->rx_done = 1;
}
