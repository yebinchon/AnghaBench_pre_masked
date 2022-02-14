
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ tx_gain_buffalo; } ;
struct ath_hw {int iniModesTxGain; TYPE_1__ config; } ;


 scalar_t__ FUNC_0 (struct ath_hw*) ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 scalar_t__ FUNC_2 (struct ath_hw*) ;
 scalar_t__ FUNC_3 (struct ath_hw*) ;
 scalar_t__ FUNC_4 (struct ath_hw*) ;
 scalar_t__ FUNC_5 (struct ath_hw*) ;
 scalar_t__ FUNC_6 (struct ath_hw*) ;
 int FUNC_7 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_8(struct ath_hw *VAR_9)
{
 if (FUNC_1(VAR_9))
  FUNC_7(&VAR_9->iniModesTxGain,
   VAR_3);
 else if (FUNC_0(VAR_9))
  FUNC_7(&VAR_9->iniModesTxGain,
   VAR_2);
 else if (FUNC_2(VAR_9))
  FUNC_7(&VAR_9->iniModesTxGain,
   VAR_4);
 else if (FUNC_3(VAR_9))
  FUNC_7(&VAR_9->iniModesTxGain,
   VAR_5);
 else if (FUNC_6(VAR_9))
  FUNC_7(&VAR_9->iniModesTxGain,
   VAR_8);
 else if (FUNC_5(VAR_9))
  FUNC_7(&VAR_9->iniModesTxGain,
          VAR_7);
 else if (FUNC_4(VAR_9))
  FUNC_7(&VAR_9->iniModesTxGain,
          VAR_6);
 else {
  if (VAR_9->config.tx_gain_buffalo)
   FUNC_7(&VAR_9->iniModesTxGain,
           VAR_1);
  else
   FUNC_7(&VAR_9->iniModesTxGain,
           VAR_0);
 }
}
