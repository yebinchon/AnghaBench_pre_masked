
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int dma_beacon_response_time; int sw_beacon_response_time; int cwm_ignore_extcca; int analog_shiftreg; int rx_intr_mitigation; int rimt_last; int rimt_first; int pll_pwrsave; scalar_t__ serialize_regmode; int max_txtrig_level; } ;
struct TYPE_3__ {scalar_t__ macVersion; } ;
struct ath_hw {TYPE_2__ config; int is_pciexpress; TYPE_1__ hw_version; } ;
struct ath_common {int dummy; } ;


 scalar_t__ FUNC_0 (struct ath_hw*) ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 scalar_t__ FUNC_2 (struct ath_hw*) ;
 scalar_t__ FUNC_3 (struct ath_hw*) ;
 scalar_t__ FUNC_4 (struct ath_hw*) ;
 scalar_t__ FUNC_5 (struct ath_hw*) ;
 scalar_t__ FUNC_6 (struct ath_hw*) ;
 scalar_t__ FUNC_7 (struct ath_hw*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 struct ath_common* FUNC_8 (struct ath_hw*) ;
 int FUNC_9 (struct ath_common*,int ,char*,scalar_t__) ;
 int FUNC_10 () ;

__attribute__((used)) static void FUNC_11(struct ath_hw *VAR_7)
{
 struct ath_common *VAR_8 = FUNC_8(VAR_7);

 VAR_7->config.dma_beacon_response_time = 1;
 VAR_7->config.sw_beacon_response_time = 6;
 VAR_7->config.cwm_ignore_extcca = 0;
 VAR_7->config.analog_shiftreg = 1;

 VAR_7->config.rx_intr_mitigation = 1;

 if (FUNC_5(VAR_7)) {
  VAR_7->config.rimt_last = 500;
  VAR_7->config.rimt_first = 2000;
 } else {
  VAR_7->config.rimt_last = 250;
  VAR_7->config.rimt_first = 700;
 }

 if (FUNC_6(VAR_7) || FUNC_7(VAR_7))
  VAR_7->config.pll_pwrsave = 7;
 if (FUNC_10() > 1)
  VAR_7->config.serialize_regmode = VAR_4;

 if (VAR_2 > 1 && VAR_7->config.serialize_regmode == VAR_4) {
  if (VAR_7->hw_version.macVersion == VAR_0 ||
      ((FUNC_0(VAR_7) || FUNC_2(VAR_7) || FUNC_4(VAR_7)) &&
       !VAR_7->is_pciexpress)) {
   VAR_7->config.serialize_regmode = VAR_6;
  } else {
   VAR_7->config.serialize_regmode = VAR_5;
  }
 }

 FUNC_9(VAR_8, VAR_3, "serialize_regmode is %d\n",
  VAR_7->config.serialize_regmode);

 if (FUNC_3(VAR_7) || FUNC_1(VAR_7))
  VAR_7->config.max_txtrig_level = VAR_1 >> 1;
 else
  VAR_7->config.max_txtrig_level = VAR_1;
}
