
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw {scalar_t__ imask; } ;
struct ath_beacon_config {int ibss_creator; } ;
struct ath9k_htc_priv {struct ath_hw* ah; } ;


 int FUNC_0 (struct ath_hw*,struct ath_beacon_config*) ;
 int FUNC_1 (struct ath9k_htc_priv*,struct ath_beacon_config*,int ) ;

__attribute__((used)) static void FUNC_2(struct ath9k_htc_priv *VAR_0,
       struct ath_beacon_config *VAR_1)
{
 struct ath_hw *VAR_2 = VAR_0->ah;
 VAR_2->imask = 0;

 FUNC_0(VAR_2, VAR_1);
 FUNC_1(VAR_0, VAR_1, VAR_1->ibss_creator);
}
