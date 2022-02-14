
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw {int dummy; } ;
struct ath_common {int dummy; } ;
struct ath9k_tx_queue_info {int dummy; } ;
struct ath9k_htc_priv {int* hwq_map; struct ath_hw* ah; } ;
typedef int qi ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 struct ath_common* FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (struct ath_hw*,int) ;
 int FUNC_4 (struct ath_hw*,int ,struct ath9k_tx_queue_info*) ;
 int FUNC_5 (struct ath_common*,char*,int,int) ;
 int FUNC_6 (struct ath9k_tx_queue_info*,int ,int) ;

bool FUNC_7(struct ath9k_htc_priv *VAR_1, int VAR_2)
{
 struct ath_hw *VAR_3 = VAR_1->ah;
 struct ath_common *VAR_4 = FUNC_2(VAR_3);
 struct ath9k_tx_queue_info VAR_5;
 int VAR_6;

 FUNC_6(&VAR_5, 0, sizeof(VAR_5));
 FUNC_1(VAR_2);

 VAR_6 = FUNC_4(VAR_1->ah, VAR_0, &VAR_5);
 if (VAR_6 == -1)
  return 0;

 if (VAR_6 >= FUNC_0(VAR_1->hwq_map)) {
  FUNC_5(VAR_4, "qnum %u out of range, max %zu!\n",
   VAR_6, FUNC_0(VAR_1->hwq_map));
  FUNC_3(VAR_3, VAR_6);
  return 0;
 }

 VAR_1->hwq_map[VAR_2] = VAR_6;
 return 1;
}
