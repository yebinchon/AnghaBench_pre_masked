
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int short_repeat; int count; int endless; int period; int fft_period; scalar_t__ enabled; } ;
struct TYPE_13__ {TYPE_5__ spec_config; TYPE_7__* ah; } ;
struct TYPE_11__ {int count; } ;
struct TYPE_9__ {int slottime; int ** bslot; } ;
struct ath_softc {TYPE_6__ spec_priv; TYPE_7__* sc_ah; TYPE_4__ ant_comb; TYPE_2__ beacon; } ;
struct TYPE_8__ {int timer; } ;
struct ath_common {int bssidmask; int last_rssi; TYPE_1__ ani; } ;
struct TYPE_10__ {int hw_caps; } ;
struct TYPE_14__ {TYPE_3__ caps; } ;


 int FUNC_0 (int **) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ath_common* FUNC_1 (TYPE_7__*) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct ath_softc *VAR_4)
{
 struct ath_common *VAR_5 = FUNC_1(VAR_4->sc_ah);
 int VAR_6 = 0;

 FUNC_3(&VAR_5->ani.timer, VAR_3, 0);

 VAR_5->last_rssi = VAR_2;
 FUNC_2(VAR_5->bssidmask);
 VAR_4->beacon.slottime = 9;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_4->beacon.bslot); VAR_6++)
  VAR_4->beacon.bslot[VAR_6] = ((void*)0);

 if (VAR_4->sc_ah->caps.hw_caps & VAR_0)
  VAR_4->ant_comb.count = VAR_1;

 VAR_4->spec_priv.ah = VAR_4->sc_ah;
 VAR_4->spec_priv.spec_config.enabled = 0;
 VAR_4->spec_priv.spec_config.short_repeat = 1;
 VAR_4->spec_priv.spec_config.count = 8;
 VAR_4->spec_priv.spec_config.endless = 0;
 VAR_4->spec_priv.spec_config.period = 0xFF;
 VAR_4->spec_priv.spec_config.fft_period = 0xF;
}
