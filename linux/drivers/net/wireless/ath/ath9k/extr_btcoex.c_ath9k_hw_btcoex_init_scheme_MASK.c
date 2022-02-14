
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hw_caps; } ;
struct ath_btcoex_hw {void* scheme; } ;
struct ath_hw {TYPE_1__ caps; struct ath_btcoex_hw btcoex_hw; } ;
struct ath_common {int btcoex_enabled; } ;


 scalar_t__ FUNC_0 (struct ath_hw*) ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 scalar_t__ FUNC_2 (struct ath_hw*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (struct ath_hw*,int ,int ,int ) ;
 struct ath_common* FUNC_4 (struct ath_hw*) ;

void FUNC_5(struct ath_hw *VAR_11)
{
 struct ath_common *VAR_12 = FUNC_4(VAR_11);
 struct ath_btcoex_hw *VAR_13 = &VAR_11->btcoex_hw;




 if (!VAR_12->btcoex_enabled) {
  VAR_13->scheme = VAR_6;
  return;
 }

 if (VAR_11->caps.hw_caps & VAR_0) {
  VAR_13->scheme = VAR_5;
 } else if (FUNC_2(VAR_11)) {
  VAR_13->scheme = VAR_4;

  FUNC_3(VAR_11, VAR_10,
      VAR_2,
      VAR_8);
 } else if (FUNC_0(VAR_11)) {
  if (FUNC_1(VAR_11))
   VAR_13->scheme = VAR_4;
  else
   VAR_13->scheme = VAR_3;

  FUNC_3(VAR_11, VAR_9,
      VAR_1,
      VAR_7);
 }
}
