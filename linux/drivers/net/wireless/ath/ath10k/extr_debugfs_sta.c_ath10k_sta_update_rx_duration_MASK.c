
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k_fw_stats {scalar_t__ extended; } ;
struct ath10k {int dummy; } ;


 int FUNC_0 (struct ath10k*,struct ath10k_fw_stats*) ;
 int FUNC_1 (struct ath10k*,struct ath10k_fw_stats*) ;

void FUNC_2(struct ath10k *VAR_0,
       struct ath10k_fw_stats *VAR_1)
{
 if (VAR_1->extended)
  FUNC_0(VAR_0, VAR_1);
 else
  FUNC_1(VAR_0, VAR_1);
}
