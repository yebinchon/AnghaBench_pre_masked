
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int enabled; int endless; } ;
struct ath_spec_scan_priv {int spectral_mode; TYPE_1__ spec_config; struct ath_hw* ah; } ;
struct ath_hw {int dummy; } ;
struct ath_common {int dummy; } ;
typedef enum spectral_mode { ____Placeholder_spectral_mode } spectral_mode ;
struct TYPE_6__ {int (* spectral_scan_config ) (struct ath_hw*,TYPE_1__*) ;int spectral_scan_trigger; } ;
struct TYPE_5__ {int (* restore ) (struct ath_common*) ;int (* wakeup ) (struct ath_common*) ;} ;






 TYPE_3__* FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_common*,char*) ;
 TYPE_2__* FUNC_2 (struct ath_common*) ;
 int FUNC_3 (struct ath_common*) ;
 int FUNC_4 (struct ath_hw*,TYPE_1__*) ;
 int FUNC_5 (struct ath_common*) ;

int FUNC_6(struct ath_common *VAR_0,
          struct ath_spec_scan_priv *VAR_1,
          enum spectral_mode VAR_2)
{
 struct ath_hw *VAR_3 = VAR_1->ah;

 if (!FUNC_0(VAR_3)->spectral_scan_trigger) {
  FUNC_1(VAR_0, "spectrum analyzer not implemented on this hardware\n");
  return -1;
 }

 switch (VAR_2) {
 case 129:
  VAR_1->spec_config.enabled = 0;
  break;
 case 131:



  VAR_1->spec_config.endless = 1;
  VAR_1->spec_config.enabled = 1;
  break;
 case 130:
 case 128:
  VAR_1->spec_config.endless = 0;
  VAR_1->spec_config.enabled = 1;
  break;
 default:
  return -1;
 }

 FUNC_2(VAR_0)->wakeup(VAR_0);
 FUNC_0(VAR_3)->spectral_scan_config(VAR_3, &VAR_1->spec_config);
 FUNC_2(VAR_0)->restore(VAR_0);

 VAR_1->spectral_mode = VAR_2;

 return 0;
}
