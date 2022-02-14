
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath9k_htc_priv {TYPE_1__* ah; } ;
struct TYPE_2__ {scalar_t__ rfkill_polarity; int rfkill_gpio; } ;


 int FUNC_0 (struct ath9k_htc_priv*) ;
 int FUNC_1 (struct ath9k_htc_priv*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static bool FUNC_3(struct ath9k_htc_priv *VAR_0)
{
 bool VAR_1;

 FUNC_1(VAR_0);
 VAR_1 = FUNC_2(VAR_0->ah, VAR_0->ah->rfkill_gpio) ==
       VAR_0->ah->rfkill_polarity;
 FUNC_0(VAR_0);

 return VAR_1;
}
