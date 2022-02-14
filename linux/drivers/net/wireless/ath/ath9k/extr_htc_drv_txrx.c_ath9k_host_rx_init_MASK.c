
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_common {int op_flags; } ;
struct ath9k_htc_priv {int ah; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath9k_htc_priv*) ;
 struct ath_common* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int *) ;

void FUNC_5(struct ath9k_htc_priv *VAR_1)
{
 struct ath_common *VAR_2 = FUNC_1(VAR_1->ah);
 FUNC_2(VAR_1->ah);
 FUNC_0(VAR_1);
 FUNC_3(VAR_1->ah, FUNC_4(VAR_0, &VAR_2->op_flags));
}
