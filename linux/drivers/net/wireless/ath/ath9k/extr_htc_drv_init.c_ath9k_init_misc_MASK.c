
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ath_common {int last_rssi; int bssidmask; } ;
struct TYPE_4__ {int short_repeat; int count; int endless; int period; int fft_period; scalar_t__ enabled; } ;
struct TYPE_5__ {TYPE_1__ spec_config; TYPE_3__* ah; } ;
struct ath9k_htc_priv {TYPE_2__ spec_priv; TYPE_3__* ah; } ;
struct TYPE_6__ {int opmode; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ath_common* FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct ath9k_htc_priv *VAR_2)
{
 struct ath_common *VAR_3 = FUNC_0(VAR_2->ah);

 FUNC_1(VAR_3->bssidmask);

 VAR_3->last_rssi = VAR_0;
 VAR_2->ah->opmode = VAR_1;

 VAR_2->spec_priv.ah = VAR_2->ah;
 VAR_2->spec_priv.spec_config.enabled = 0;
 VAR_2->spec_priv.spec_config.short_repeat = 1;
 VAR_2->spec_priv.spec_config.count = 8;
 VAR_2->spec_priv.spec_config.endless = 0;
 VAR_2->spec_priv.spec_config.period = 0x12;
 VAR_2->spec_priv.spec_config.fft_period = 0x02;
}
