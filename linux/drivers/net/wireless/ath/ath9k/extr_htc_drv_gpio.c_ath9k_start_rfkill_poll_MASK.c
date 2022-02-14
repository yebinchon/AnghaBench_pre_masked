
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ath9k_htc_priv {TYPE_3__* hw; TYPE_2__* ah; } ;
struct TYPE_6__ {int wiphy; } ;
struct TYPE_4__ {int hw_caps; } ;
struct TYPE_5__ {TYPE_1__ caps; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

void FUNC_1(struct ath9k_htc_priv *VAR_1)
{
 if (VAR_1->ah->caps.hw_caps & VAR_0)
  FUNC_0(VAR_1->hw->wiphy);
}
