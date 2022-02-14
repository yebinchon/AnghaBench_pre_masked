
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath9k_tx_queue_info {int dummy; } ;
struct ath9k_htc_priv {int ah; } ;
typedef int qi ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,struct ath9k_tx_queue_info*) ;
 int FUNC_2 (struct ath9k_tx_queue_info*,int ,int) ;

int FUNC_3(struct ath9k_htc_priv *VAR_1)
{
 struct ath9k_tx_queue_info VAR_2;

 FUNC_2(&VAR_2, 0, sizeof(VAR_2));
 FUNC_0(0);

 return FUNC_1(VAR_1->ah, VAR_0, &VAR_2);
}
