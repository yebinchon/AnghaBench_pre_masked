
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int enabled; } ;
struct ath_spec_scan_priv {int spectral_mode; TYPE_1__ spec_config; struct ath_hw* ah; } ;
struct ath_hw {int dummy; } ;
struct ath_common {int dummy; } ;
struct TYPE_6__ {int (* spectral_scan_trigger ) (struct ath_hw*) ;} ;
struct TYPE_5__ {int (* restore ) (struct ath_common*) ;int (* wakeup ) (struct ath_common*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct ath_common*,struct ath_spec_scan_priv*,int ) ;
 int FUNC_2 (struct ath_hw*) ;
 TYPE_3__* FUNC_3 (struct ath_hw*) ;
 int FUNC_4 (struct ath_hw*,int) ;
 int FUNC_5 (struct ath_common*,char*) ;
 TYPE_2__* FUNC_6 (struct ath_common*) ;
 int FUNC_7 (struct ath_common*) ;
 int FUNC_8 (struct ath_hw*) ;
 int FUNC_9 (struct ath_common*) ;

void FUNC_10(struct ath_common *VAR_3,
     struct ath_spec_scan_priv *VAR_4)
{
 struct ath_hw *VAR_5 = VAR_4->ah;
 u32 VAR_6;

 if (FUNC_0(VAR_2))
  return;

 if (!FUNC_3(VAR_5)->spectral_scan_trigger) {
  FUNC_5(VAR_3, "spectrum analyzer not implemented on this hardware\n");
  return;
 }

 if (!VAR_4->spec_config.enabled)
  return;

 FUNC_6(VAR_3)->wakeup(VAR_3);
 VAR_6 = FUNC_2(VAR_5);
 FUNC_4(VAR_5, VAR_6 |
     VAR_1 |
     VAR_0);






 FUNC_1(VAR_3, VAR_4, VAR_4->spectral_mode);
 FUNC_3(VAR_5)->spectral_scan_trigger(VAR_5);
 FUNC_6(VAR_3)->restore(VAR_3);
}
