
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ath9k_hw_mci {int config; } ;
struct TYPE_2__ {struct ath9k_hw_mci mci; } ;
struct ath_hw {TYPE_1__ btcoex_hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct ath_hw*,int ,int ) ;
 int FUNC_3 (struct ath_hw*,int ,int ,int) ;

__attribute__((used)) static void FUNC_4(struct ath_hw *VAR_11, bool VAR_12)
{
 struct ath9k_hw_mci *VAR_13 = &VAR_11->btcoex_hw.mci;
 u32 VAR_14;

 if (!VAR_12) {
  FUNC_2(VAR_11, VAR_0,
       VAR_2);
  return;
 }
 FUNC_3(VAR_11, VAR_6, VAR_7, 1);
 FUNC_3(VAR_11, VAR_6,
        VAR_8, 1);

 if (FUNC_0(VAR_11))
  FUNC_3(VAR_11, VAR_4, VAR_5, 1);

 if (!(VAR_13->config & VAR_10)) {
  VAR_14 = FUNC_1(VAR_13->config, VAR_9);
  FUNC_3(VAR_11, VAR_0,
         VAR_1, VAR_14);
  FUNC_3(VAR_11, VAR_0,
         VAR_3, 1);
 } else
  FUNC_3(VAR_11, VAR_0,
         VAR_3, 0);

 FUNC_3(VAR_11, VAR_0,
        VAR_2, 1);
}
