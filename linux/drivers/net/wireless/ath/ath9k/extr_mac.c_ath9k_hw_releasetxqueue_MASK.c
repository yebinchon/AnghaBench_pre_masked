
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct ath_hw {struct ath9k_tx_queue_info* txq; } ;
struct ath_common {int dummy; } ;
struct ath9k_tx_queue_info {scalar_t__ tqi_type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath_hw*,size_t) ;
 struct ath_common* FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (struct ath_hw*,struct ath9k_tx_queue_info*) ;
 int FUNC_3 (struct ath_common*,int ,char*,size_t) ;

bool FUNC_4(struct ath_hw *VAR_2, u32 VAR_3)
{
 struct ath_common *VAR_4 = FUNC_1(VAR_2);
 struct ath9k_tx_queue_info *VAR_5;

 VAR_5 = &VAR_2->txq[VAR_3];
 if (VAR_5->tqi_type == VAR_0) {
  FUNC_3(VAR_4, VAR_1, "Release TXQ, inactive queue: %u\n", VAR_3);
  return 0;
 }

 FUNC_3(VAR_4, VAR_1, "Release TX queue: %u\n", VAR_3);

 VAR_5->tqi_type = VAR_0;
 FUNC_0(VAR_2, VAR_3);
 FUNC_2(VAR_2, VAR_5);

 return 1;
}
