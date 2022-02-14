
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bmi_xfer {int tx_done; } ;
struct ath10k_ce_pipe {int dummy; } ;


 scalar_t__ FUNC_0 (struct ath10k_ce_pipe*,void**) ;

__attribute__((used)) static void FUNC_1(struct ath10k_ce_pipe *VAR_0)
{
 struct bmi_xfer *VAR_1;

 if (FUNC_0(VAR_0, (void **)&VAR_1))
  return;

 VAR_1->tx_done = 1;
}
